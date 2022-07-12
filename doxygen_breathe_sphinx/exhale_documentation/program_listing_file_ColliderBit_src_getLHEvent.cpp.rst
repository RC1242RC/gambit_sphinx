
.. _program_listing_file_ColliderBit_src_getLHEvent.cpp:

Program Listing for File getLHEvent.cpp
=======================================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_src_getLHEvent.cpp>` (``ColliderBit/src/getLHEvent.cpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   //   GAMBIT: Global and Modular BSM Inference Tool
   //   *********************************************
   
   #include "gambit/cmake/cmake_variables.hpp"
   
   #include <iostream>
   
   using namespace std;
   
   #ifndef EXCLUDE_HEPMC
   
   #include "gambit/ColliderBit/ColliderBit_eventloop.hpp"
   #include "gambit/ColliderBit/lhef2heputils.hpp"
   #include "gambit/Utils/util_functions.hpp"
   
   #include "gambit/Utils/begin_ignore_warnings_hepmc.hpp"
   #include "HepMC3/LHEF.h"
   #include "gambit/Utils/end_ignore_warnings.hpp"
   
   
   namespace Gambit
   {
   
     namespace ColliderBit
     {
   
       void getLHEvent(HEPUtils::Event& result)
       {
         using namespace Pipes::getLHEvent;
   
         result.clear();
   
         // Get yaml options and initialise the LHEF reader
         const static double jet_pt_min = runOptions->getValueOrDef<double>(10.0, "jet_pt_min");
         const static str lhef_filename = runOptions->getValue<str>("lhef_filename");
         static bool first = true;
         if (first)
         {
           if (not Utils::file_exists(lhef_filename)) throw std::runtime_error("LHE file "+lhef_filename+" not found.  Quitting...");
           first = false;
         }
         static LHEF::Reader lhe(lhef_filename);
   
         // Don't do anything during special iterations
         if (*Loop::iteration < 0) return;
   
         // Attempt to read the next LHE event as a HEPUtils event. If there are no more events, wrap up the loop and skip the rest of this iteration.
         bool event_retrieved = true;
         #pragma omp critical (reading_LHEvent)
         {
           if (lhe.readEvent()) get_HEPUtils_event(lhe, result, jet_pt_min);
           else event_retrieved = false;
         }
         if (not event_retrieved)
         {
           // Tell the MCLoopInfo instance that we have reached the end of the file
           Dep::RunMC->report_end_of_event_file();
           Loop::halt();
         }
   
       }
   
     }
   
   }
   
   #endif
