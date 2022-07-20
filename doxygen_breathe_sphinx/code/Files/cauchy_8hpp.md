---
title: 'file priors/cauchy.hpp'

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
| class | **[Gambit::Priors::Cauchy](/documentation/code/classes/classgambit_1_1priors_1_1cauchy/)** <br>Multi-dimensional [Cauchy]() prior.  |

## Detailed Description


**Author**: 

  * Ben Farmer ([benjamin.farmer@monash.edu.au](mailto:benjamin.farmer@monash.edu.au)) 
  * Gregory Martinez ([gregory.david.martinez@gmail.com](mailto:gregory.david.martinez@gmail.com)) 
  * Andrew Fowlie ([andrew.j.fowlie@qq.com](mailto:andrew.j.fowlie@qq.com)) 


**Date**: 

  * 2013 Dec
  * Feb 2014
  * August 2020


Multivariate Cauchy prior



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************

#ifndef __PRIOR_CAUCHY_HPP__
#define __PRIOR_CAUCHY_HPP__

#include <algorithm>
#include <cmath>
#include <string>
#include <unordered_map>
#include <vector>

#include "gambit/ScannerBit/cholesky.hpp"
#include "gambit/ScannerBit/priors.hpp"
#include "gambit/ScannerBit/scanner_utils.hpp"

namespace Gambit {
  namespace Priors {
    class Cauchy : public BasePrior
    {
     private:
      std::vector<double> location;
      mutable Cholesky col;

     public:
      // Constructor defined in cauchy.cpp
      Cauchy(const std::vector<std::string>& param, const Options& options);

      void transform(const std::vector<double>& unitpars, std::unordered_map<std::string, double>& outputMap) const override
      {
        std::vector<double> vec(unitpars.size());

        auto v_it = vec.begin();
        for (auto elem_it = unitpars.begin(), elem_end = unitpars.end(); elem_it != elem_end; elem_it++, v_it++)
        {
          *v_it = std::tan(M_PI * (*elem_it - 0.5));
        }

        col.ElMult(vec);

        v_it = vec.begin();
        auto m_it = location.begin();
        for (auto str_it = param_names.begin(), str_end = param_names.end(); str_it != str_end; str_it++)
        {
          outputMap[*str_it] = *(v_it++) + *(m_it++);
        }
      }

      std::vector<double> inverse_transform(const std::unordered_map<std::string, double> &physical) const override
      {
        // subtract location
        std::vector<double> central;
        for (int i = 0, n = this->size(); i < n; i++)
        {
          central.push_back(physical.at(param_names[i]) - location[i]);
        }

        // invert rotation by Cholesky matrix
        std::vector<double> rotated = col.invElMult(central);

        // now diagonal; invert Cauchy CDF
        std::vector<double> u;
        for (const auto& v : rotated)
        {
          u.push_back(std::atan(v) / M_PI + 0.5);
        }
        return u;
      }

      double operator()(const std::vector<double>& vec) const override
      {
        static double norm = std::log(M_PI * col.DetSqrt());
        return -std::log1p(col.Square(vec, location)) - norm;
      }
    };

    LOAD_PRIOR(cauchy, Cauchy)

  }  // namespace Priors
}  // namespace Gambit

#endif  // __PRIOR_CAUCHY_HPP__
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000
