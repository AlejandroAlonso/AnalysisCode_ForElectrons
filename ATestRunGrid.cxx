#include <EventLoop/DirectDriver.h>
#include <EventLoop/Job.h>
#include <MyAnalysis/MyxAODAnalysis.h>
#include <TSystem.h>
#include <SampleHandler/ToolsDiscovery.h>
#include <SampleHandler/ScanDir.h>

void ATestRunGrid (const std::string& submitDir)
{
  // Set up the job for xAOD access:
  xAOD::Init().ignore();

  // create a new sample handler to describe the data files we use
  SH::SampleHandler sh;

  // scan for datasets in the given directory
  // this works if you are on lxplus, otherwise you'd want to copy over files
  // to your local machine and use a local path.  if you do so, make sure
  // that you copy all subdirectories and point this to the directory
  // containing all the files, not the subdirectories.

  // use SampleHandler to scan all of the subdirectories of a directory for particular MC single file:
  const char* inputFilePath = gSystem->ExpandPathName ("~/ForTroels/CellHack/MyDADO/user.aalonso.mc16_13TeV.423300.JF17.e3848_s3126_r9781_r9778.EGAM7.03_00_EXT0/");
 // SH::ScanDir().filePattern("DAOD_EGAM1.DAODSmall.root").scan(sh,inputFilePath);
  //SH::ScanDir().filePattern("*user.aalonso.12918012.EXT0._000001.DAOD_EGAM7.DAOD.root*").scan(sh,inputFilePath);
 // SH::ScanDir().filePattern("**").scan(sh,inputFilePath);

 //SH::scanRucio (sh, "user.aalonso.mc16_13TeV.361106.e3601_s3126_r9781_r9778.CellDAOD.EGAM1.01_01_EXT0/");
 //SH::scanRucio (sh, "user.aalonso.mc16_13TeV.361107.Zmumu.3601_s3126_r9781_r9778.EGAM7.03_00_EXT0");
 //SH::scanRucio (sh, "user.aalonso.mc16_13TeV.423300.JF17.e3848_s3126_r9781_r9778.EGAM7.03_00_EXT0");
 SH::scanRucio (sh, "user.aalonso.mc16_13TeV.Wnimus_enu.361103.e3601_s3126_r9781_r9778.EGAM7.03_00_EXT0");
 SH::scanRucio (sh, "user.aalonso.mc16_13TeV.361106.Zee.e3601_s3126_r9781_r9778.CellDAOD.EGAM7.03_00_EXT0");

  // set the name of the tree in our files
  // in the xAOD the TTree containing the EDM containers is "CollectionTree"
  sh.setMetaString ("nc_tree", "CollectionTree");

  // further sample handler configuration may go here

  // print out the samples we found
  sh.print ();

  // this is the basic description of our job
  EL::Job job;
  job.sampleHandler (sh); // use SampleHandler in this job
  //job.options()->setDouble (EL::Job::optMaxEvents, 500); // for testing purposes, limit to run over the first 500 events only!

  // define an output and an ntuple associated to that output
  EL::OutputStream output  ("MyElectrons");
  job.outputAdd (output);
  EL::NTupleSvc *ntuple = new EL::NTupleSvc ("MyElectrons");
  job.algsAdd (ntuple);
  



  // add our algorithm to the job
  MyxAODAnalysis *alg = new MyxAODAnalysis;



  // set the name of the algorithm (this is the name use with
  // messages)
  alg->SetName ("AnalysisAlg");

  // later on we'll add some configuration options for our algorithm that go here

  job.algsAdd (alg);

  alg->m_outputName = "MyElectrons"; // give the name of the output to our algorithm
  // make the driver we want to use:
  // this one works by running the algorithm directly:
 EL::PrunDriver driver;
 // we can use other drivers to run things on the Grid, with PROOF, etc.
 driver.options()->setString("nc_outputSampleName", "user.aalonso.03_00.%in:name[4]%.%in:name[6]%.signal.test"); 
 // process the job using the driver
 driver.submitOnly (job, submitDir);
}

