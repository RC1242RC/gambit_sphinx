
.. _program_listing_file_ColliderBit_include_gambit_ColliderBit_MCLoopInfo.hpp:

Program Listing for File MCLoopInfo.hpp
=======================================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_include_gambit_ColliderBit_MCLoopInfo.hpp>` (``ColliderBit/include/gambit/ColliderBit/MCLoopInfo.hpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   //   GAMBIT: Global and Modular BSM Inference Tool
   //   *********************************************
   
   
   #pragma once
   
   #include <vector>
   #include "gambit/Utils/util_types.hpp"
   #include "gambit/ColliderBit/MC_convergence.hpp"
   
   namespace Gambit
   {
   
     namespace ColliderBit
     {
   
       struct MCLoopInfo
       {
        
         // Event genration has been bypassed: Default = false
         bool event_gen_BYPASS = false;
   
         bool event_generation_began;
   
         mutable bool exceeded_maxFailedEvents;
   
         mutable bool end_of_event_file;
   
         std::vector<str> collider_names;
   
         std::map<str,int> maxFailedEvents;
   
         std::map<str,bool> invalidate_failed_points;
   
         mutable std::map<str,int> event_count;
   
         std::map<str,convergence_settings> convergence_options;
   
         std::map<str,std::vector<str>> analyses;
   
         std::map<str,std::map<str,std::vector<str>>> detector_analyses;
   
         void set_current_collider(str&);
   
         const str& current_collider() const;
   
         const int& current_maxFailedEvents() const;
         int& current_maxFailedEvents();
   
         const bool& current_invalidate_failed_points() const;
         bool& current_invalidate_failed_points();
   
         const int& current_event_count() const;
         int& current_event_count();
   
         const convergence_settings& current_convergence_options() const;
         convergence_settings& current_convergence_options();
   
         const std::vector<str>& current_analyses() const;
         std::vector<str>& current_analyses();
   
         const std::vector<str>& current_analyses_for(const str&) const;
         std::vector<str>& current_analyses_for(const str&);
   
         bool current_analyses_exist_for(const str&) const;
   
         void report_exceeded_maxFailedEvents() const;
   
         void report_end_of_event_file() const;
   
         void reset_flags();
   
         private:
   
           str _current_collider;
   
           std::map<str,int>::iterator _current_maxFailedEvents_it;
   
           std::map<str,bool>::iterator _current_invalidate_failed_points_it;
   
           std::map<str,int>::iterator _current_event_count_it;
   
           std::map<str,convergence_settings>::iterator _current_convergence_options_it;
   
           std::map<str,std::vector<str>>::iterator _current_analyses_it;
   
           std::map<str,std::map<str,std::vector<str>>>::iterator _current_detector_analyses_it;
   
       };
   
     }
   }
   
