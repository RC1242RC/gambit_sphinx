---
title: 'file priors/doublelogflatjoin.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::Priors](/documentation/code/namespaces/namespacegambit_1_1priors/)**  |

## Classes

|                | Name           |
| -------------- | -------------- |
| class | **[Gambit::Priors::DoubleLogFlatJoin](/documentation/code/classes/classgambit_1_1priors_1_1doublelogflatjoin/)**  |

## Detailed Description


**Author**: Ben Farmer ([benjamin.farmer@fysik.su.se](mailto:benjamin.farmer@fysik.su.se)) 

**Date**: 2016 Jun

Prior function made up of two log priors (positive and negative branch) joined across zero by a flat region.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************

#ifndef PRIOR_DOUBLELOGFLATJOIN_HPP
#define PRIOR_DOUBLELOGFLATJOIN_HPP

#include "gambit/ScannerBit/priors.hpp"
#include "gambit/Utils/yaml_options.hpp"

#include <vector>
  
namespace Gambit
{
   namespace Priors
   {
      class DoubleLogFlatJoin : public BasePrior
      {
      private:
         const std::string &myparameter;
         double lower;
         double flat_start;
         double flat_end;
         double upper;
         double C; 
         double P01;
         double P12;
         double P23;

         bool no_lower_log;
         bool no_upper_log;
     
         double get_option(const str&, const Options&);

      public: 
         DoubleLogFlatJoin(const std::vector<std::string>& param, const Options&); 

         void transform(const std::vector <double> &unitpars, std::unordered_map <std::string, double> &output) const override;
         std::vector<double> inverse_transform(const std::unordered_map<std::string, double> &) const override;

         double operator()(const std::vector<double> &vec) const override;
      };
  
      LOAD_PRIOR(double_log_flat_join, DoubleLogFlatJoin)
   }
}

#endif
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000
