---
title: 'file priors/gaussian.cpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::Priors](/documentation/code/namespaces/namespacegambit_1_1priors/)**  |

## Detailed Description


**Author**: 

  * Ben Farmer ([benjamin.farmer@monash.edu.au](mailto:benjamin.farmer@monash.edu.au)) 
  * Gregory Martinez ([gregory.david.martinez@gmail.com](mailto:gregory.david.martinez@gmail.com)) 
  * Andrew Fowlie ([andrew.j.fowlie@qq.com](mailto:andrew.j.fowlie@qq.com)) 


**Date**: 

  * 2013 Dec
  * Feb 2014
  * August 2020


Multivariate Gaussian prior



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************

#include "gambit/ScannerBit/priors/gaussian.hpp"

namespace Gambit
{
  namespace Priors
  {
    Gaussian::Gaussian(const std::vector<std::string>& param, const Options& options) :
      BasePrior(param, param.size()), col(param.size())
    {
      std::vector<std::vector<double>> cov_matrix(param.size(), std::vector<double>(param.size(), 0.));

      if (options.hasKey("sigma") && options.hasKey("cov_matrix")) {
          std::stringstream err;
          err << "Gaussian prior: "
              << "define covariance matrix by either 'cov_matrix' or 'sigma'"
              << std::endl;
          Scanner::scan_error().raise(LOCAL_INFO, err.str());
      }
      else if (options.hasKey("cov_matrix"))
      {
        cov_matrix = options.getValue<std::vector<std::vector<double>>>("cov_matrix");

        if (cov_matrix.size() != param.size())
        {
          std::stringstream err;
          err << "Gaussian prior: "
              << "'cov_matrix' is not the same dimension as the parameters"
              << std::endl;
          Scanner::scan_error().raise(LOCAL_INFO, err.str());
        }

        for (const auto& row : cov_matrix)
        {
          if (row.size() != cov_matrix.size())
          {
            std::stringstream err;
            err << "Gaussian prior: "
                << "'cov_matrix' is not square"
                << std::endl;
            Scanner::scan_error().raise(LOCAL_INFO, err.str());
          }
        }
      }
      else if (options.hasKey("sigma"))
      {
        std::vector<double> sigma = options.getVector<double>("sigma");
        if (sigma.size() != param.size())
        {
            std::stringstream err;
            err << "Gaussian prior: "
                << "'sigma' is not the same dimension as the parameters"
                << std::endl;
            Scanner::scan_error().raise(LOCAL_INFO, err.str());
        }
        else
        {
          for (int i = 0, end = sigma.size(); i < end; i++)
          {
            cov_matrix[i][i] = sigma[i] * sigma[i];
          }
        }
      }
      else
      {
        std::stringstream err;
        err << "Gaussian prior: "
            << "the covariance matrix is not defined by either 'cov_matrix' or 'sigma'"
            << std::endl;
        Scanner::scan_error().raise(LOCAL_INFO, err.str());
      }

      if (options.hasKey("mu"))
      {
        mu = options.getVector<double>("mu");
        if (mu.size() != param.size())
        {
          std::stringstream err;
          err << "Gaussian prior: "
              << "'mu' vector is not the same dimension as the parameters"
              << std::endl;
          Scanner::scan_error().raise(LOCAL_INFO, err.str());
        }
      }
      else
      {
        std::stringstream err;
        err << "Gaussian prior: "
            << "'mu' vector is required"
            << std::endl;
        Scanner::scan_error().raise(LOCAL_INFO, err.str());
      }

      if (!col.EnterMat(cov_matrix))
      {
        std::stringstream err;
        err << "Gaussian prior: "
            << "covariance matrix is not positive-definite"
            << std::endl;
        Scanner::scan_error().raise(LOCAL_INFO, err.str());
      }
    }

  }  // namespace Priors
}  // namespace Gambit
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
