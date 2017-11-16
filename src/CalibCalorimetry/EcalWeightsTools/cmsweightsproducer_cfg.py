import FWCore.ParameterSet.Config as cms
process = cms.Process("Demo")

process.load("FWCore.MessageService.MessageLogger_cfi")

process.maxEvents = cms.untracked.PSet( input = cms.untracked.int32(-1) )

process.maxEvents = cms.untracked.PSet( input = cms.untracked.int32(1) )

process.source = cms.Source( "EmptySource" )

process.demo = cms.EDAnalyzer(  'CMSWeightsProducer',

				Verbosity = cms.untracked.int32(0),
				DoFitBaseline = cms.untracked.bool(True),
			    	DoFitTime = cms.untracked.bool(False),
			    	nPulseSamples = cms.untracked.int32(5),
				nPrePulseSamples = cms.untracked.int32(3),
				ProduceSameChi2MatrixBeforeAndAfterGainSwitch = cms.untracked.bool(True),

                                TimePhase = cms.untracked.double(0.0), # //inject a time phase
				OutputFileName = cms.untracked.string('test/weights_test.xml') # filenames
				
		             )

process.p = cms.Path(process.demo)
