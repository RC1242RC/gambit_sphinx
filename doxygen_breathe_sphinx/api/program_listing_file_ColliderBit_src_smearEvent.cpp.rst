
.. _program_listing_file_ColliderBit_src_smearEvent.cpp:

Program Listing for File smearEvent.cpp
=======================================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_src_smearEvent.cpp>` (``ColliderBit/src/smearEvent.cpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   //   GAMBIT: Global and Modular BSM Inference Tool
   //   *********************************************
   
   #include "gambit/ColliderBit/ColliderBit_eventloop.hpp"
   
   namespace Gambit
   {
   
     namespace ColliderBit
     {
   
       void smearEvent(HEPUtils::Event& result,
                       const HEPUtils::Event& HardScatteringEvent,
                       const BaseDetector& detector,
                       const MCLoopInfo& RunMC,
                       const int iteration,
                       const str& detname)
       {
         if (iteration <= BASE_INIT or not RunMC.current_analyses_exist_for(detname)) return;
         result.clear();
         HardScatteringEvent.cloneTo(result);
         detector.processEvent(result);
       }
   
       #define SMEAR_EVENT(NAME, EXPERIMENT)                                                \
       void NAME(HEPUtils::Event& result)                                                   \
       {                                                                                    \
         using namespace Pipes::NAME;                                                       \
         smearEvent(result, *Dep::HardScatteringEvent, *(*Dep::CAT(EXPERIMENT,DetectorSim)),\
          *Dep::RunMC, *Loop::iteration, #EXPERIMENT);                                      \
       }
   
       SMEAR_EVENT(smearEventATLAS, ATLAS)
       SMEAR_EVENT(smearEventCMS, CMS)
       SMEAR_EVENT(copyEvent, Identity)
   
     }
   
   }
