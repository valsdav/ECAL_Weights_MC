from CRABClient.UserUtilities import config, getUsernameFromSiteDB
config = config()

config.General.requestName = 'Ecal_rechits_analysis_2018_fullreadout'
config.General.workArea = 'crab_projects'
config.General.transferOutputs = True
config.General.transferLogs = False

config.JobType.pluginName = 'Analysis'
config.JobType.psetName = 'runRechitDumper.py'

config.Data.inputDataset = '/ZeroBias1/Run2018D-v1/RAW'
config.Data.inputDBS = 'global'
config.Data.splitting = 'LumiBased'
config.Data.unitsPerJob = 20
config.Data.runRange = '324725'
config.Data.outLFNDirBase = '/store/user/%s/' % (getUsernameFromSiteDB())
config.Data.publication = False
config.Data.outputDatasetTag = 'EcalRechits_fullreadout2018'

config.Site.storageSite = "T2_CH_CERN"