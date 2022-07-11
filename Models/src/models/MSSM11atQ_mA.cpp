//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  MSSM11atQ_mA translation function definitions.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)
///  \date 2017 Aug
///
///  *********************************************

#include "gambit/Models/model_macros.hpp"
#include "gambit/Models/model_helpers.hpp"
#include "gambit/Logs/logger.hpp"

#include "gambit/Models/models/MSSM11atQ_mA.hpp"


// Activate debug output
//#define MSSM11atQ_mA_DBUG

#define MODEL MSSM11atQ_mA

  void MODEL_NAMESPACE::MSSM11atQ_mA_to_MSSM16atQ_mA (const ModelParameters &myP, ModelParameters &targetP)
  {
     logger()<<"Running interpret_as_parent calculations for " STRINGIFY(MODEL) " --> MSSM16atQ_mA."<<LogTags::info<<EOM;

     // Send all parameter values upstream to matching parameters in parent.
     // Ignore that some parameters don't exist in the parent, as these are set below.
     targetP.setValues(myP,false);

     // Sfermion mass matrix entries.
     targetP.setValue("mq2_12", myP["mq2"]);
     targetP.setValue("mq2_3",  myP["mq2"]);
     targetP.setValue("mu2_3",  myP["mq2"]);
     targetP.setValue("md2_3",  myP["mq2"]);
     targetP.setValue("ml2_12", myP["ml2"]);
     targetP.setValue("ml2_3",  myP["ml2"]);
     targetP.setValue("me2_3",  myP["ml2"]);

     // Done
     #ifdef MSSM11atQ_mA_DBUG
       std::cout << STRINGIFY(MODEL) " parameters:" << myP << std::endl;
       std::cout << "MSSM16atQ_mA parameters:" << targetP << std::endl;
     #endif
  }

#undef MODEL
