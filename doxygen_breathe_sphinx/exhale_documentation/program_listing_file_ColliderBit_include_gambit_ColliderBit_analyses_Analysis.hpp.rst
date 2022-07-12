
.. _program_listing_file_ColliderBit_include_gambit_ColliderBit_analyses_Analysis.hpp:

Program Listing for File Analysis.hpp
=====================================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_include_gambit_ColliderBit_analyses_Analysis.hpp>` (``ColliderBit/include/gambit/ColliderBit/analyses/Analysis.hpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   //   GAMBIT: Global and Modular BSM Inference Tool
   //   *********************************************
   
   #pragma once
   
   #include <string>
   #include "HEPUtils/Event.h"
   #include "gambit/ColliderBit/analyses/AnalysisData.hpp"
   
   namespace Gambit
   {
     typedef std::string str;
   
     namespace ColliderBit
     {
   
       class Analysis
       {
   
         public:
   
           Analysis();
           virtual ~Analysis() { }
   
           void reset();
   
           void analyze(const HEPUtils::Event&);
           void analyze(const HEPUtils::Event*);
   
           double luminosity() const;
           void set_luminosity(double);
           void set_analysis_name(str);
           str analysis_name();
   
           const AnalysisData& get_results();
           const AnalysisData& get_results(str&);
           AnalysisData* get_results_ptr();
           AnalysisData* get_results_ptr(str&);
   
           void scale(double);
   
           void add(Analysis* other);
           virtual void combine(const Analysis* other) = 0;
   
         protected:
   
           virtual void analysis_specific_reset() = 0;
   
           virtual void run(const HEPUtils::Event*) = 0;
           void add_result(const SignalRegionData& sr);
           void set_covariance(const Eigen::MatrixXd& srcov);
           void set_covariance(const std::vector<std::vector<double>>&);
           virtual void collect_results() = 0;
   
         private:
   
           double _luminosity;
           bool _luminosity_is_set;
           bool _is_scaled;
           bool _needs_collection;
           AnalysisData _results;
           std::string _analysis_name;
   
       };
   
   
       #define DEFINE_ANALYSIS_FACTORY(ANAME)                                     \
         Analysis* create_Analysis_ ## ANAME()                                    \
         {                                                                        \
           return new Analysis_ ## ANAME();                                       \
         }                                                                        \
         std::string getDetector_ ## ANAME()                                      \
         {                                                                        \
           return std::string(Analysis_ ## ANAME::detector);                      \
         }
   
   
     }
   }
