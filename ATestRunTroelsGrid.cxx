#include <EventLoopAlgs/NTupleSvc.h>
#include <EventLoop/OutputStream.h>

#include <cstdio>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>

#include <SampleHandler/ToolsDiscovery.h>


std::string exec(const char* cmd) {
   char buffer[128];
   std::string result = "";
   std::shared_ptr<FILE> pipe(popen(cmd, "r"), pclose);
   if (!pipe) throw std::runtime_error("popen() failed!");
   while (!feof(pipe.get())) {
       if (fgets(buffer, 128, pipe.get()) != NULL)
           result += buffer;
   }
   return result;
}

// void ATestRun ( const bool isSignal = true, const bool isMC = true )
void ATestRunTroelsGrid( )
{

 bool isSignal = true;


 //===========================================
 // FOR ROOT6 WE DO NOT PUT THIS LINE
 // (ROOT6 uses Cling instead of CINT)
 // Load the libraries for all packages
 // gROOT->Macro("$ROOTCOREDIR/scripts/load_packages.C");
 // Instead on command line do:
 // > root -l '$ROOTCOREDIR/scripts/load_packages.C' 'ATestRun.cxx ("submitDir")'
 // The above works for ROOT6 and ROOT5
 //
 // Alternatively, use:
 //   root -l '$ROOTCOREDIR/scripts/load_packages.C' 'ATestRun.cxx ()' -q
 //==========================================
 std::string str = exec("date +\%Y\%m%d_\%k\%M%S");
 str.erase(std::remove(str.begin(), str.end(), '\n'), str.end());

 std::string submitDir = std::string("submitDir_") + ((isSignal)?("S_"):("B_")) + str ;

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


 // ------------------------------------------------------------------------------------------------------------------- //
 // Data samples:
 // ------------------------------------------------------------------------------------------------------------------- //

 // SIGNAL MC:
 // const char* inputFilePath = gSystem->ExpandPathName ("/lustre/hpc/hep/petersen/EGamma_ZeeAndBkg2016_MCandData/mc16_13TeV.361106.PowhegPythia8EvtGen_AZNLOCTEQ6L1_Zee.merge.AOD.e3601_s3126_r9364_r9315/");
 // const char* inputFilePath = gSystem->ExpandPathName ("/lustre/hpc/hep/petersen/ElectronPID_Zee2016/mc15_13TeV.361106.PowhegPythia8EvtGen_AZNLOCTEQ6L1_Zee.merge.AOD.e3601_s2876_r7917_r7676/");

 // BACKGROUND MC:

 // SIGNAL DATA:
 //const char* inputFilePath = gSystem->ExpandPathName ("/users/hep/petersen/Work/ElectronPID2017/root/data16_13TeV.00311071.physics_Main.deriv.DAOD_EGAM1.r9264_p3083_p3180/");

 // BACKGROUND DATA:

  const char* inputFilePath = gSystem->ExpandPathName ("~/ForTroels/CellHack/MyDADO/mc16_13TeV.361106.PowhegPythia8EvtGen_AZNLOCTEQ6L1_Zee.merge.AOD.e3601_s3126_r9781_r9778");

 // ------------------------------------------------------------------------------------------------------------------- //
 // ------------------------------------------------------------------------------------------------------------------- //

 /*
 // Signal data:
| data16_13TeV:data16_13TeV.00297730.physics_Main.merge.DAOD_EGAM1.r9264_p3083_p3101                | CONTAINER    |
...
| data16_13TeV:data16_13TeV.00311481.physics_Main.merge.DAOD_EGAM1.r9264_p3083_p3101                | CONTAINER    |

| data15_13TeV:data15_13TeV.00266904.physics_Main.merge.DAOD_EGAM1.r9264_p3083_p3101                | CONTAINER    |
...
| data15_13TeV:data15_13TeV.00284484.physics_Main.merge.DAOD_EGAM1.r9264_p3083_p3101                | CONTAINER    |




   // Background data:
| data16_13TeV:data16_13TeV.00297730.physics_Main.merge.DAOD_EGAM7.r9264_p3083_p3101                | CONTAINER    |
...
| data16_13TeV:data16_13TeV.00311481.physics_Main.merge.DAOD_EGAM7.r9264_p3083_p3101                | CONTAINER    |
 */

 // ------------------------------------------------------------------------------------------------------------------- //

 // Signal MC:
 //   I have used: mc15_13TeV.361106.PowhegPythia8EvtGen_AZNLOCTEQ6L1_Zee.merge.DAOD_EGAM8.e3601_s2576_s2132_r7773_r7676_p2666
 //   EGamma uses: mc15_13TeV.361106.PowhegPythia8EvtGen_AZNLOCTEQ6L1_Zee.merge.AOD.e3601_s2876_r7917_r7676

 // Background MC:
 //   mc15_13TeV.423300.Pythia8EvtGen_A14NNPDF23LO_perf_JF17.merge.AOD.e3848_s2876_r7917_r7676
 //   mc15_13TeV.423302.Pythia8EvtGen_A14NNPDF23LO_perf_JF35.merge.AOD.e3848_s2876_r7886_r7676
 //   mc15_13TeV.423303.Pythia8EvtGen_A14NNPDF23LO_perf_JF50.merge.AOD.e3848_s2608_s2183_r7773_r7676

 // ------------------------------------------------------------------------------------------------------------------- //
 // ------------------------------------------------------------------------------------------------------------------- //


 // const char* inputFilePath = gSystem->ExpandPathName (("/hep/nperez/storage/mc/"+std::string((isSignal)?("signal"):("background"))+"/").c_str());
 //const char* inputFilePath = gSystem->ExpandPathName (("/hep/nperez/storage/mc/"+std::string((isSignal)?("signal"):("background"))+"/").c_str());
 //SH::ScanDir().filePattern("*.root*").scan(sh,inputFilePath);

 //SH::scanRucio (sh, "user.aalonso.mc16_13TeV.361106.e3601_s3126_r9781_r9778.CellDAOD.EGAM1.01_01_EXT0/");
 //SH::scanRucio (sh, "user.aalonso.mc16_13TeV.Wnimus_enu.361103.e3601_s3126_r9781_r9778.EGAM7.03_00_EXT0");
 //SH::scanRucio (sh, "user.aalonso.mc16_13TeV.361106.Zee.e3601_s3126_r9781_r9778.CellDAOD.EGAM7.03_00_EXT0");

/*
 SH::scanRucio (sh, "user.aalonso.mc16_13TeV.423303.JF50.e3848_s3126_r9781_r9778.EGAM7.03_00_EXT0");
 SH::scanRucio (sh, "user.aalonso.mc16_13TeV.423302.JF35.e3848_s3126_r9781_r9778.EGAM7.03_00_EXT0");
 SH::scanRucio (sh, "user.aalonso.mc16_13TeV.423300.JF17.e3848_s3126_r9781_r9778.EGAM7.03_00_EXT0");
 SH::scanRucio (sh, "user.aalonso.mc16_13TeV.Wplus_enu.361100.e3601_s3126_r9781_r9778.EGAM7.03_00_EXT0");
 SH::scanRucio (sh, "user.aalonso.mc16_13TeV.Wnimus_enu.361103.e3601_s3126_r9781_r9778.EGAM7.03_00_EXT0");
 SH::scanRucio (sh, "user.aalonso.mc16_13TeV.361107.Zmumu.3601_s3126_r9781_r9778.EGAM7.03_00_EXT0");
*/
 SH::scanRucio (sh, "user.aalonso.mc16_13TeV.361106.Zee.e3601_s3126_r9781_r9778.CellDAOD.EGAM7.03_00_EXT0");



 // set the name of the tree in our files
 // in the xAOD the TTree containing the EDM containers is "CollectionTree"
 sh.setMetaString ("nc_tree", "CollectionTree");

 // further sample handler configuration may go here

 // print out the samples we found
 sh.print ();


 // this is the basic description of our job
 EL::Job job;
 // define an output and an ntuple associated to that output
 EL::OutputStream output  ("myOutput");
 job.outputAdd (output);
 EL::NTupleSvc *ntuple = new EL::NTupleSvc ("myOutput");
 job.algsAdd (ntuple);

 job.sampleHandler (sh); // use SampleHandler in this job
 // job.options()->setDouble (EL::Job::optSkipEvents,500000);

 // Number of events to consider:
 // -----------------------------
 job.options()->setDouble (EL::Job::optMaxEvents, -1); // for testing purposes
 // job.options()->setDouble (EL::Job::optMaxEvents, 50000000); // for full running (all events!)


 // add our algorithm to the job
 MyTagAndProbeAnalysis *alg = new MyTagAndProbeAnalysis;

 // later on we'll add some configuration options for our algorithm that go here

 job.algsAdd (alg);
 alg->outputName = "myOutput"; // give the name of the output to our algorithm
 alg->isSignal = isSignal;

 // make the driver we want to use:
 // this one works by running the algorithm directly:
 //EL::DirectDriver driver;
 EL::PrunDriver driver;

 // we can use other drivers to run things on the Grid, with PROOF, etc.
 driver.options()->setString("nc_outputSampleName", "user.aalonso.03_01.%in:name[4]%.%in:name[6]%.signal.test"); 


 // process the job using the driver
 driver.submitOnly (job, submitDir);
 //driver.submit (job, submitDir);
}











