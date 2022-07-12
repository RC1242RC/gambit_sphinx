
.. _program_listing_file_ColliderBit_src_getActiveProcessCodes.cpp:

Program Listing for File getActiveProcessCodes.cpp
==================================================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_src_getActiveProcessCodes.cpp>` (``ColliderBit/src/getActiveProcessCodes.cpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   //   GAMBIT: Global and Modular BSM Inference Tool
   //   *********************************************
   
   #include "gambit/ColliderBit/ColliderBit_eventloop.hpp"
   
   // #define COLLIDERBIT_DEBUG
   #define DEBUG_PREFIX "DEBUG: OMP thread " << omp_get_thread_num() << ":  "
   
   namespace Gambit
   {
   
     namespace ColliderBit
     {
   
       void getActiveProcessCodes(std::vector<int>& result)
       {
         using namespace Pipes::getActiveProcessCodes;
   
         if (*Loop::iteration == COLLIDER_INIT)
         {
           result.clear();
         }
   
         if (*Loop::iteration == XSEC_CALCULATION)
         {
           result = (*Dep::HardScatteringSim)->all_active_process_codes();
   
           #ifdef COLLIDERBIT_DEBUG
             for (int pcode : result)
             {
               cout << DEBUG_PREFIX << "getActiveProcessCodes: - active process: " << pcode << endl;
             }
           #endif
         }
       }
   
     } 
   } 
   
   
