
.. _program_listing_file_ColliderBit_src_getBuckFast.cpp:

Program Listing for File getBuckFast.cpp
========================================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_src_getBuckFast.cpp>` (``ColliderBit/src/getBuckFast.cpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   //   GAMBIT: Global and Modular BSM Inference Tool
   //   *********************************************
   
   #include <memory>
   
   #include "gambit/ColliderBit/ColliderBit_eventloop.hpp"
   #include "gambit/ColliderBit/ATLASEfficiencies.hpp"
   #include "gambit/ColliderBit/CMSEfficiencies.hpp"
   #include "gambit/ColliderBit/detectors/BuckFast.hpp"
   
   #include "HEPUtils/FastJet.h"
   
   
   namespace Gambit
   {
   
     namespace ColliderBit
     {
   
       void getBuckFastATLAS(BaseDetector* &result)
       {
         using namespace Pipes::getBuckFastATLAS;
         thread_local BuckFast bucky;
         if (*Loop::iteration == START_SUBPROCESS)
         {
           bucky.smearElectronEnergy = &ATLAS::smearElectronEnergy;
           bucky.smearMuonMomentum   = &ATLAS::smearMuonMomentum;
           bucky.smearTaus           = &ATLAS::smearTaus;
           bucky.smearJets           = &ATLAS::smearJets;
           result = &bucky;
         }
       }
   
       void getBuckFastCMS(BaseDetector* &result)
       {
         using namespace Pipes::getBuckFastCMS;
         thread_local BuckFast bucky;
         if (*Loop::iteration == START_SUBPROCESS)
         {
           bucky.smearElectronEnergy = &CMS::smearElectronEnergy;
           bucky.smearMuonMomentum   = &CMS::smearMuonMomentum;
           bucky.smearTaus           = &CMS::smearTaus;
           bucky.smearJets           = &CMS::smearJets;
           result = &bucky;
         }
       }
   
       void getBuckFastIdentity(BaseDetector* &result)
       {
         using namespace Pipes::getBuckFastIdentity;
         thread_local BuckFast bucky;
         result = &bucky;
       }
   
     }
   
   }
