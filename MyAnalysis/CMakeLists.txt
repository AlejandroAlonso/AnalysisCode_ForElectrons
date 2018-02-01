# The name of the package:
atlas_subdir (MyAnalysis)
# Component(s) in the package:
atlas_add_root_dictionary (MyAnalysisLib
   MyAnalysisDictSource
   ROOT_HEADERS MyAnalysis/*.h Root/LinkDef.h
   EXTERNAL_PACKAGES ROOT )

# add the library itself:
atlas_add_library (MyAnalysisLib
   MyAnalysis/*.h MyAnalysis/*.ihh Root/*.cxx ${MyAnalysisDictSource}
   PUBLIC_HEADERS MyAnalysis
   INCLUDE_DIRS
   LINK_LIBRARIES JetResolutionLib MuonMomentumCorrectionsLib TrigConfxAODLib TrigDecisionToolLib xAODMissingET TriggerMatchingToolLib  IsolationSelectionLib ElectronPhotonShowerShapeFudgeToolLib  EventLoop EventLoopAlgs xAODEventInfo xAODEgamma xAODTruth EventLoopGrid AsgAnalysisInterfaces GoodRunsListsLib JetSelectorToolsLib  xAODJet xAODCore AsgTools xAODTracking  xAODCaloEvent
   PRIVATE_LINK_LIBRARIES )

