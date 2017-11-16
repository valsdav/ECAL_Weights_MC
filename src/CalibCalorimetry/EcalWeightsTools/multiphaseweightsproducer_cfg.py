import FWCore.ParameterSet.Config as cms
process = cms.Process("Demo")

process.load("FWCore.MessageService.MessageLogger_cfi")

process.maxEvents = cms.untracked.PSet( input = cms.untracked.int32(-1) )

process.maxEvents = cms.untracked.PSet( input = cms.untracked.int32(1) )

process.source = cms.Source( "EmptySource" )


list = []
totalGroups = 0
print "Late pulses have timeShift negative in the internal pulseShape array"
for i in range(-12, 13):
  totalGroups = totalGroups + 1
  sign = 'P'

  if(i==0):
    sign = ''

  if(i>0):
    sign = 'M'

  if(i<0):
    sign = 'P'
  stringToAdd = sign+str(abs(i))
  print stringToAdd
   

  demo_tmp = cms.EDAnalyzer(
	    'CMSWeightsProducer',
	    Verbosity = cms.untracked.int32(0),
	    DoFitBaseline = cms.untracked.bool(True),
	    DoFitTime = cms.untracked.bool(False),
	    nPulseSamples = cms.untracked.int32(5),
	    nPrePulseSamples = cms.untracked.int32(3),
	    ProduceSameChi2MatrixBeforeAndAfterGainSwitch = cms.untracked.bool(True),
	    TimePhase = cms.untracked.double(i),
	    OutputFileName = cms.untracked.string('data/EcalWeightsBasedOnEcalSimAlgoV02-01-04_'+stringToAdd+'.xml')
  )
  name = 'demo'+stringToAdd
  setattr(process,name,demo_tmp)

  list.append(name)

print "totalGroups = ",totalGroups

#process.demo = cms.EDAnalyzer(  'CMSWeightsProducer',
#
#				Verbosity = cms.untracked.int32(0),
#				DoFitBaseline = cms.untracked.bool(True),
#			    	DoFitTime = cms.untracked.bool(False),
#			    	nPulseSamples = cms.untracked.int32(5),
#				nPrePulseSamples = cms.untracked.int32(3),
#				ProduceSameChi2MatrixBeforeAndAfterGainSwitch = cms.untracked.bool(True),
#
#                                TimePhase = cms.untracked.double(-1.0), # //inject a time phase
#				OutputFileName = cms.untracked.string('LHCphaseFollowUp/weights_test.xml') # filenames
#				
#		             )

process.p = cms.Path(getattr(process,list[0]))
for module in list[1:]:
   process.p *= getattr(process,module)
