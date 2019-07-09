import FWCore.ParameterSet.Config as cms

from Configuration.StandardSequences.Eras import eras
#Check the Era matches the year of the Data
process = cms.Process("TPGANALYSIS",eras.Run2_2018)

process.load("SimCalorimetry.EcalTrigPrimProducers.ecalTriggerPrimitiveDigis_readDBOffline_cff")
process.load('Configuration.StandardSequences.FrontierConditions_GlobalTag_cff')

#Globaltag for CMSSW_10_2_1
process.GlobalTag.globaltag = '102X_dataRun2_Prompt_v4'


process.load('Configuration.StandardSequences.GeometryRecoDB_cff')

#---------------ADDED by William Richard Smith ------------------------
#Add the custom weights to the Globaltag
process.GlobalTag.toGet = cms.VPSet(
   cms.PSet(record = cms.string("EcalTPGWeightIdMapRcd"),
              tag = cms.string("EcalTPGWeightIdMap"),
              connect = cms.string('sqlite:////afs/cern.ch/user/w/wrsmith/CMSSW_10_2_1/src/CondTools/Ecal/python/EcalTPGWeightIdMap.db')
             ),
   cms.PSet(record = cms.string("EcalTPGWeightGroupRcd"),
              tag = cms.string("EcalTPGWeightGroup"),
              connect = cms.string('sqlite:////afs/cern.ch/user/w/wrsmith/CMSSW_10_2_1/src/CondTools/Ecal/python/EcalTPGWeightGroup.db')
             ),
    cms.PSet(record = cms.string("EcalTPGLinearizationConstRcd"),
             # tag = cms.string("EcalTPGLinearizationConst_IOV_285555_beginning_at_1"),
#             tag = cms.string("%EcalTPGLinearizationConst%"),
#	     connect =cms.string('%sqlite%')
             #connect =cms.string('frontier://FrontierPrep/CMS_CONDITIONS')
             ),
    cms.PSet(record = cms.string("EcalTPGPedestalsRcd"), 
             #tag = cms.string("EcalTPGPedestals_282736_beginning_at_1"), 
#             tag = cms.string("%EcalTPGPedestals%"), 
	     #connect =cms.string('sqlite:////afs/cern.ch/work/e/ecaltrg/TPLasVal_8026/src/CondTools/Ecal/test/EcalTPG_282736_moved_to_1.db')
#	     connect =cms.string('%sqlite%')
             #connect =cms.string('frontier://FrontierPrep/CMS_CONDITIONS')
             )
    )
    




# ECAL Unpacker
process.load("EventFilter.EcalRawToDigi.EcalUnpackerMapping_cfi")
process.load("EventFilter.EcalRawToDigi.EcalUnpackerData_cfi")

# ECAL TPG Producer
#caz process.load("Geometry.EcalMapping.EcalMapping_cfi")
#caz process.load("Geometry.EcalMapping.EcalMappingRecord_cfi")
#caz process.load("Geometry.CaloEventSetup.CaloGeometry_cfi")
#caz process.load("Geometry.CaloEventSetup.EcalTrigTowerConstituents_cfi")

process.load('Configuration.StandardSequences.MagneticField_AutoFromDBCurrent_cff')
process.load('Configuration.StandardSequences.RawToDigi_Data_cff')
process.load('Configuration.StandardSequences.EndOfProcess_cff')

process.load('L1Trigger.Configuration.L1TReco_cff')

process.load('Configuration.EventContent.EventContent_cff')


process.raw2digi_step = cms.Path(process.RawToDigi)
process.endjob_step = cms.EndPath(process.endOfProcess)

# Schedule definition
process.schedule = cms.Schedule(process.raw2digi_step)

from L1Trigger.Configuration.customiseReEmul import L1TReEmulFromRAW
#,L1TEventSetupForHF1x1TPs  this last one is not in the release

#call to customisation function L1TReEmulFromRAW imported from L1Trigger.Configuration.customiseReEmul
#process = L1TReEmulFromRAW(process)
from EventFilter.L1TRawToDigi.caloStage2Digis_cfi import caloStage2Digis
process.rawCaloStage2Digis = caloStage2Digis.clone()
process.rawCaloStage2Digis.InputLabel = cms.InputTag('rawDataCollector')


process.ecalTriggerPrimitiveDigis = cms.EDProducer("EcalTrigPrimProducer",
   InstanceEB = cms.string('ebDigis'),
   InstanceEE = cms.string('eeDigis'),
   Label = cms.string('ecalDigis'),
   BarrelOnly = cms.bool(False),
   Famos = cms.bool(False),
   TcpOutput = cms.bool(False),
   Debug = cms.bool(False),
   binOfMaximum = cms.int32(6), ## optional from release 200 on, from 1-10

)

# ECAL rechits and co
process.load("Configuration/StandardSequences/Reconstruction_cff")

#Changed on 15/10/18 by William Richard Smith. Changed algorithm to multifit.

#import RecoLocalCalo.EcalRecProducers.ecalGlobalUncalibRecHit_cfi
#process.ecalUncalibHit = RecoLocalCalo.EcalRecProducers.ecalGlobalUncalibRecHit_cfi.ecalGlobalUncalibRecHit.clone()

#------------------------
import RecoLocalCalo.EcalRecProducers.ecalMultiFitUncalibRecHit_cfi
process.ecalUncalibHit =  RecoLocalCalo.EcalRecProducers.ecalMultiFitUncalibRecHit_cfi.ecalMultiFitUncalibRecHit.clone()
process.ecalUncalibHit.algoPSet.activeBXs = cms.vint32(-5,-4,-3,-2,-1,0,1,2,3,4)
process.ecalUncalibHit.algoPSet.useLumiInfoRunHeader = cms.bool( False )
#--------------------------


process.load("RecoLocalCalo.EcalRecProducers.ecalRecHit_cfi")
process.load("Geometry.CaloEventSetup.CaloTopology_cfi")
process.load("RecoLocalCalo.EcalRecProducers.ecalDetIdToBeRecovered_cfi")
process.ecalRecHit.EBuncalibRecHitCollection = 'ecalUncalibHit:EcalUncalibRecHitsEB'
process.ecalRecHit.EEuncalibRecHitCollection = 'ecalUncalibHit:EcalUncalibRecHitsEE'

process.maxEvents = cms.untracked.PSet(
    input = cms.untracked.int32(-1)
)

#Choose the data
process.source = cms.Source("PoolSource",
fileNames = (cms.untracked.vstring('root://xrootd-cms.infn.it//store/data/Run2018C/EGamma/RAW/v1/000/320/059/00000/1E7502F2-E18D-E811-A278-FA163E70FC5F.root'))
)

process.tpAnalyzer = cms.EDAnalyzer("EcalTPGAnalyzer",
    isMC  = cms.bool(False),
    isRECO  = cms.bool(False),
   PVCollection = cms.InputTag("offlinePrimaryVertices"),
   pileupCollection = cms.InputTag("addPileupInfo"),
#   PVCollection = cms.InputTag("offlineSlimmedPrimaryVertices"),
   TPCollection = cms.InputTag("ecalDigis","EcalTriggerPrimitives"),
   TPEmulatorCollection =  cms.InputTag("ecalTriggerPrimitiveDigis",""),
   DigiCollectionEB = cms.InputTag("ecalDigis","ebDigis"),
   DigiCollectionEE = cms.InputTag("ecalDigis","eeDigis"),
   GTRecordCollection = cms.string('gtDigis'),
   EcalRecHitCollectionEB = cms.InputTag("ecalRecHit","EcalRecHitsEB"),
   EcalRecHitCollectionEE = cms.InputTag("ecalRecHit","EcalRecHitsEE"),
   uncalibratedRecHitCollectionEB = cms.InputTag("ecalMaxSampleUncalibRecHit","EcalUncalibRecHitsEB"),
   uncalibratedRecHitCollectionEE = cms.InputTag("ecalMaxSampleUncalibRecHit","EcalUncalibRecHitsEE"),
   l1extraIsol=cms.InputTag("l1extraParticles","Isolated"), 
   l1extraNonIsol= cms.InputTag("l1extraParticles","NonIsolated"), 
   Print = cms.bool(False),
   L1Print = cms.bool(False),
   ReadTriggerPrimitives = cms.bool(True),
   UseEndCap = cms.bool(True),
   keepOnlyTowersAboveZero = cms.bool(True),
   skipWritingEndcapDigi = cms.bool(True)
)



process.load("RecoLocalCalo.EcalRecProducers.ecalRecHit_cfi")
process.load("RecoLocalCalo.EcalRecProducers.ecalGlobalUncalibRecHit_cfi")
process.load("Geometry.CaloEventSetup.CaloTopology_cfi")
process.load("RecoLocalCalo.EcalRecProducers.ecalDetIdToBeRecovered_cfi")
process.ecalRecHit.EBuncalibRecHitCollection = 'ecalUncalibHit:EcalUncalibRecHitsEB'
process.ecalRecHit.EEuncalibRecHitCollection = 'ecalUncalibHit:EcalUncalibRecHitsEE'

process.p = cms.Path(
   #process.rawCaloStage2Digis*
   process.L1Reco*
   process.ecalTriggerPrimitiveDigis*
   process.ecalUncalibHit*
   process.ecalDetIdToBeRecovered*
   process.ecalRecHit*
   process.tpAnalyzer
)


process.schedule.append(process.p)

#process.MessageLogger = cms.Service("MessageLogger"
#   ,cout = cms.untracked.PSet(threshold = cms.untracked.string('ERROR')),
#   destinations = cms.untracked.vstring('cout')
#)
