
.. _program_listing_file_ColliderBit_include_gambit_ColliderBit_ColliderBit_types.hpp:

Program Listing for File ColliderBit_types.hpp
==============================================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_include_gambit_ColliderBit_ColliderBit_types.hpp>` (``ColliderBit/include/gambit/ColliderBit/ColliderBit_types.hpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   //   GAMBIT: Global and Modular BSM Inference Tool
   //   *********************************************
   
   
   #ifndef __ColliderBit_types_hpp__
   #define __ColliderBit_types_hpp__
   
   #include <vector>
   #include <chrono>
   
   #include "gambit/Utils/PID_pair.hpp"
   #include "gambit/ColliderBit/MCLoopInfo.hpp"
   #include "gambit/ColliderBit/MC_convergence.hpp"
   #include "gambit/ColliderBit/xsec.hpp"
   #include "gambit/ColliderBit/colliders/Pythia8/Py8Collider.hpp"
   #include "gambit/ColliderBit/colliders/Pythia8/Py8Collider_typedefs.hpp"
   #include "gambit/ColliderBit/detectors/BuckFast.hpp"
   #include "gambit/ColliderBit/analyses/AnalysisContainer.hpp"
   #include "gambit/ColliderBit/analyses/AnalysisData.hpp"
   
   #include "gambit/ColliderBit/limits/ALEPHSleptonLimits.hpp"
   #include "gambit/ColliderBit/limits/L3GauginoLimits.hpp"
   #include "gambit/ColliderBit/limits/L3SleptonLimits.hpp"
   #include "gambit/ColliderBit/limits/OPALGauginoLimits.hpp"
   #include "gambit/ColliderBit/limits/OPALDegenerateCharginoLimits.hpp"
   //#include "gambit/ColliderBit/limits/L3SmallDeltaMGauginoLimits.hpp"
   
   #include "HEPUtils/Event.h"
   
   namespace Gambit
   {
   
     namespace ColliderBit
     {
   
       typedef std::vector<AnalysisData> AnalysisNumbers;
       typedef std::vector<AnalysisData*> AnalysisDataPointers;
   
       struct AnalysisLogLikes
       {
         std::map<std::string,int> sr_indices;  // Signed indices so that we can use negative values for special cases
         std::map<std::string,double> sr_loglikes;
   
         std::string combination_sr_label;
         int combination_sr_index;
         double combination_loglike;
   
         AnalysisLogLikes() :
           combination_sr_label("undefined"),
           combination_sr_index(-2),
           combination_loglike(0.0)
           { }
       };
   
       typedef std::map<std::string,AnalysisLogLikes> map_str_AnalysisLogLikes;
   
       typedef std::vector<AnalysisContainer> AnalysisContainers;
   
       typedef std::chrono::milliseconds ms;
       typedef std::chrono::steady_clock steady_clock;
       typedef std::chrono::steady_clock::time_point tp;
       typedef std::map<std::string,double> timer_map_type;
   
       typedef std::pair<std::string,SLHAstruct> pair_str_SLHAstruct;
   
       // Note: 
       // The 'iipair' name below refers to the typedef std::pair<int,int> iipair 
       // declared in Utils/include/gambit/Utils/util_types.hpp
   
       typedef std::vector<std::pair<int,int>> vec_iipair;
       typedef std::vector<PID_pair> vec_PID_pair;
   
       typedef std::multimap<int,std::pair<int,int>> multimap_int_iipair;
       typedef std::multimap<int,PID_pair> multimap_int_PID_pair;
   
       typedef std::multimap<PID_pair,int> multimap_PID_pair_int;
   
       typedef std::map<int,xsec_container> map_int_xsec;
       typedef std::map<int,process_xsec_container> map_int_process_xsec;
   
       typedef std::map<std::pair<int,int>,PID_pair_xsec_container> map_iipair_PID_pair_xsec;
       typedef std::map<PID_pair,PID_pair_xsec_container> map_PID_pair_PID_pair_xsec;
   
       typedef HEPUtils::Event HEPUtils_Event;  // Extra typedef to avoid macro problem with namespaces
       typedef std::function<void(HEPUtils_Event&, const BaseCollider*)> EventWeighterFunctionType;
     }
   }
   
   
   
   #endif /* defined __ColliderBit_types_hpp__ */
