---
title: 'file src/SpecBit_types.cpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::SpecBit](/documentation/code/namespaces/namespacegambit_1_1specbit/)**  |

## Detailed Description


**Author**: Janina Renk ([janina.renk@fysik.su.se](mailto:janina.renk@fysik.su.se)) 

**Date**: 2019 July, Dec

Source code for types for module SpecBit. For instructions on adding new types, see the corresponding header.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#include "gambit/SpecBit/SpecBit_types.hpp"


namespace Gambit
{
  namespace SpecBit
  {

    void VevaciousResultContainer::clear_results(const str panic_vacuum, int pathFinder_number)
    {

      result_map[panic_vacuum].clear();
      result_map[panic_vacuum]["lifetime"] = -1;
      result_map[panic_vacuum]["thermalProbability"] = -1;

      // Now: reset all entries of non thermal & thermal bounceActionThreshold vector
      // maximum length of bounce action vector with depending on number of Pathfinders implemented in
      // used vevacious version
      // -> first entry "Bounce Action Threshold", second "straight path bounce action", followed
      // by the results from each implemented pathFinder => 2 + # path finders
      static int max_length = 2 + pathFinder_number;

      // set entries for non thermal values (append empty string) and thermal values (append Thermal)
      static std::vector<std::string> thermal_string = {"", "Thermal"};

      // loop through thermal/non-thermal entries & vector length
      for(auto&& thermal: thermal_string)
      {
        // reset straightPathGoodEnough
        result_map[panic_vacuum]["straightPathGoodEnough"+thermal] = -1;

        // reset bounce actions
        for(int ii =0; ii < max_length; ii ++)
        {
          result_map[panic_vacuum]["bounceActionThreshold"+thermal+"_["+std::to_string(ii)+"]"] = -1;
        }
      }
    }

    void VevaciousResultContainer::set_results(str panic_vaccum, str name, double val)
    {
        // for thermalProbability entry check if
        // == -1 -> hasn't been computed
        // == 0 -> set to a conservative value
        // else: take log
        if(name == "thermalProbability")
        {
          if     (val == 0) {val = -1e100;}
          else if(val == -1){val = -1;}
          else              {val = std::log(val);}
        }

        result_map[panic_vaccum][name]=val;
    }

    void VevaciousResultContainer::add_straightPathGoodEnough(str panic_vacuum)
    {
        // action threshold and action of straight path
        double threshold, straightPath;

        int straightPathGoodEnough;

        // set entries for non thermal values (append empty string) and thermal values (append Thermal)
        static std::vector<std::string> thermal_string = {"", "Thermal"};

        // loop through thermal/non-thermal entries
        for(auto&& thermal: thermal_string)
        {
          // first entry of bounceActionThreshold vector contains action threshold, second straight path action
          threshold = result_map[panic_vacuum]["bounceActionThreshold"+thermal+"_[0]"];
          straightPath = result_map[panic_vacuum]["bounceActionThreshold"+thermal+"_[1]"];

          // vevacious did not run
          if(threshold == -1)                 { straightPathGoodEnough = -1;}
          // straight path was good enough
          else if(threshold > straightPath)   { straightPathGoodEnough = 1;}
          // straight path was not good enough
          else                                { straightPathGoodEnough = 0;}

          result_map[panic_vacuum]["straightPathGoodEnough"+thermal] = straightPathGoodEnough;
        }
    }

    void SpectrumEntriesForVevacious::add_entry (std::string name, vec_pair_int_dbl parameters, int dimension)
    {
        // create spectrum entry
        SpectrumEntry entry;
        entry.name = name;
        entry.parameters = parameters;
        entry.dimension = dimension;

        // .. and store it in map
        spec_entry_map[entry.name]= entry;
    };
  }
}
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000
