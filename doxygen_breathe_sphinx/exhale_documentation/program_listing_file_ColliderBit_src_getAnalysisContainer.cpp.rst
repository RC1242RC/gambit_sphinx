
.. _program_listing_file_ColliderBit_src_getAnalysisContainer.cpp:

Program Listing for File getAnalysisContainer.cpp
=================================================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_src_getAnalysisContainer.cpp>` (``ColliderBit/src/getAnalysisContainer.cpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   //   GAMBIT: Global and Modular BSM Inference Tool
   //   *********************************************
   
   #include "gambit/ColliderBit/ColliderBit_eventloop.hpp"
   
   // #define COLLIDERBIT_DEBUG
   #define DEBUG_PREFIX "DEBUG: OMP thread " << omp_get_thread_num() << ":  " << __FILE__ << ":" << __LINE__ << ":  "
   
   namespace Gambit
   {
   
     namespace ColliderBit
     {
   
       void getAnalysisContainer(AnalysisContainer& result,
                                 const str& detname,
                                 const MCLoopInfo& RunMC,
                                 const xsec_container& TotalCrossSection,
                                 int iteration)
       {
         if (RunMC.analyses.empty() or iteration == BASE_INIT) return;
         if (not RunMC.current_analyses_exist_for(detname)) return;
   
         if (iteration == START_SUBPROCESS)
         {
           // Register analysis container
           result.register_thread(detname+"AnalysisContainer");
   
           // Set current collider
           result.set_current_collider(RunMC.current_collider());
   
           // Initialize analysis container or reset all the contained analyses
           if (!result.has_analyses())
           {
             try
             {
               result.init(RunMC.current_analyses_for(detname));
             }
             catch (std::runtime_error& e)
             {
               piped_errors.request(LOCAL_INFO, e.what());
             }
           }
           else result.reset();
         }
   
         if (iteration == COLLIDER_FINALIZE)
         {
           result.collect_and_add_signal();
           int ntot = RunMC.current_event_count();
           double xs = TotalCrossSection.xsec();
           double xs_per_event = 0;
           if (xs >= 0 && ntot > 0)
           {
             xs_per_event = xs / ntot;
           }
           #ifdef COLLIDERBIT_DEBUG
             cout << DEBUG_PREFIX << "getAnalysisContainer: "
                  << "ntot = " << ntot << ",  "
                  << "xs = " << xs << ",  "
                  << "xs_per_event = " << xs_per_event << endl;
           #endif
           // Scale all analysis results with the total cross-section per event
           result.scale(xs_per_event);
         }
   
       }
   
       #define GET_ANALYSIS_CONTAINER(NAME, EXPERIMENT)               \
       void NAME(AnalysisContainer& result)                           \
       {                                                              \
         using namespace Pipes::NAME;                                 \
         getAnalysisContainer(result, #EXPERIMENT, *Dep::RunMC,       \
          *Dep::TotalCrossSection, *Loop::iteration);                 \
       }
   
       GET_ANALYSIS_CONTAINER(getATLASAnalysisContainer, ATLAS)
       GET_ANALYSIS_CONTAINER(getCMSAnalysisContainer, CMS)
       GET_ANALYSIS_CONTAINER(getIdentityAnalysisContainer, Identity)
   
   
     }
   }
