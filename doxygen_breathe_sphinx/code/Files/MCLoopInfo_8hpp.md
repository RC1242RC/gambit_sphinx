---
title: 'file ColliderBit/MCLoopInfo.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::ColliderBit](/documentation/code/namespaces/namespacegambit_1_1colliderbit/)**  |

## Classes

|                | Name           |
| -------------- | -------------- |
| struct | **[Gambit::ColliderBit::MCLoopInfo](/documentation/code/classes/structgambit_1_1colliderbit_1_1mcloopinfo/)** <br>Container for event loop status data and settings.  |

## Detailed Description


**Author**: Pat Scott ([p.scott@imperial.ac.uk](mailto:p.scott@imperial.ac.uk)) 

**Date**: 2019 Jan

Type for holding event loop information.



------------------

Authors (add name if you modify):



------------------




## Source code

```
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
```


-------------------------------

Updated on 2022-07-20 at 17:18:46 +0000
