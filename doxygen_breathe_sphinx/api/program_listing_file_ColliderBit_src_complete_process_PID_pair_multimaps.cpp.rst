
.. _program_listing_file_ColliderBit_src_complete_process_PID_pair_multimaps.cpp:

Program Listing for File complete_process_PID_pair_multimaps.cpp
================================================================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_src_complete_process_PID_pair_multimaps.cpp>` (``ColliderBit/src/complete_process_PID_pair_multimaps.cpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   //   GAMBIT: Global and Modular BSM Inference Tool
   //   *********************************************
   
   #include "gambit/ColliderBit/complete_process_PID_pair_multimaps.hpp"
   
   namespace Gambit
   {
     namespace ColliderBit
     {
   
       // A function stat returns the "reversed" multimap, from PID_pair to process codes
       const multimap_PID_pair_int& all_PID_pairs_to_process_codes()
       {
         static bool first = true;
         static multimap_PID_pair_int result;
   
         // Construct the map the first time this function is called
         if (first)
         {
   
           // Loop through all elements in all_process_codes_to_PID_pairs
           for (const std::pair<int,PID_pair> elem : all_process_codes_to_PID_pairs)
           {
             // Insert the reversed pair into the result map
             result.insert( std::make_pair(elem.second, elem.first) );
           }
   
           first = false;
         }
   
         return result;
       }
   
     }
   }
