
.. _program_listing_file_ColliderBit_include_gambit_ColliderBit_analyses_AnalysisContainer.hpp:

Program Listing for File AnalysisContainer.hpp
==============================================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_include_gambit_ColliderBit_analyses_AnalysisContainer.hpp>` (``ColliderBit/include/gambit/ColliderBit/analyses/AnalysisContainer.hpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   //   GAMBIT: Global and Modular BSM Inference Tool
   //   *********************************************
   
   #pragma once
   
   #include <string>
   #include <stdexcept>
   #include <vector>
   #include <map>
   
   #include "HEPUtils/Event.h"
   
   namespace Gambit
   {
   
     typedef std::string str;
   
     namespace ColliderBit
     {
   
       class Analysis;
   
       Analysis* mkAnalysis(const str& name);
   
       str getDetector(const str& name);
   
   
       class AnalysisContainer
       {
   
         private:
   
           std::map<str,std::map<str,Analysis*> > analyses_map;
   
           str current_collider;
   
           bool is_registered;
   
           int n_threads;
   
           str base_key;
   
           static std::map<str,std::map<int,AnalysisContainer*> > instances_map;
   
   
         public:
   
           AnalysisContainer();
   
           ~AnalysisContainer();
   
           void register_thread(str);
   
           void clear();
   
           void set_current_collider(str);
   
           str get_current_collider() const;
   
           bool has_analyses(str) const;
           bool has_analyses() const;
   
           void init(const std::vector<str>&, str);
           void init(const std::vector<str>&);
   
           void reset(str, str);
           void reset(str);
           void reset();
           void reset_all();
   
           const Analysis* get_analysis_pointer(str, str) const;
           const std::map<str,Analysis*>& get_collider_analyses_map(str) const;
           const std::map<str,Analysis*>& get_current_analyses_map() const;
           const std::map<str,std::map<str,Analysis*> >& get_full_analyses_map() const;
   
           void analyze(const HEPUtils::Event&, str, str) const;
           void analyze(const HEPUtils::Event&, str) const;
           void analyze(const HEPUtils::Event&) const;
   
           void collect_and_add_signal(str, str);
           void collect_and_add_signal(str);
           void collect_and_add_signal();
   
           void scale(str, str, double);
           void scale(str, double);
           void scale(double);
           void scale_all(double);
   
       };
   
     }
   }
