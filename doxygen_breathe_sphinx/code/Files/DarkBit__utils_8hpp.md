---
title: 'file DarkBit/DarkBit_utils.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::DarkBit](/documentation/code/namespaces/namespacegambit_1_1darkbit/)**  |
| **[Gambit::DarkBit::DarkBit_utils](/documentation/code/namespaces/namespacegambit_1_1darkbit_1_1darkbit__utils/)**  |

## Detailed Description


**Author**: Torsten Bringmann ([torsten.bringmann@fys.uio.no](mailto:torsten.bringmann@fys.uio.no)) 

**Date**: 2015 May

Utility functions for DarkBit



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************


#ifndef __DarkBit_utils_hpp__
#define __DarkBit_utils_hpp__

#include <vector>
#include <map>

#include "gambit/Utils/util_types.hpp"
#include "gambit/cmake/cmake_variables.hpp"
#include "gambit/Elements/daFunk.hpp"


namespace Gambit
{

  namespace DarkBit
  {

    namespace DarkBit_utils
    {

      // Functions

      // Convert between mass and flavour eigenstate identifiers
      std::string str_flav_to_mass(const std::string& flav);
      std::string str_mass_to_flav(const std::string& mass);

      // Helper function for recursively importing decays and decays of resulting final states into a process catalog
      void ImportDecays(std::string pID, TH_ProcessCatalog &catalog,
                        std::set<std::string> &importedDecays,
                        const DecayTable* tbl, double minBranching,
                        std::vector<std::string> excludeDecays = std::vector<std::string>());

      template <int i>
      double gamma3bdy_limits(double Eg, double M_DM, double m1, double m2);
    }

  }

}

#endif // defined __DarkBit_utils_hpp__
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
