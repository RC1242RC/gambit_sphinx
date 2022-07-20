---
title: 'file backend_types/DDCalc.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::Models](/documentation/code/namespaces/namespacegambit_1_1models/)**  |

## Classes

|                | Name           |
| -------------- | -------------- |
| class | **[Gambit::safe_ptr](/documentation/code/classes/classgambit_1_1safe__ptr/)**  |
| class | **[Gambit::Models::safe_param_map](/documentation/code/classes/classgambit_1_1models_1_1safe__param__map/)**  |
| struct | **[Gambit::DM_nucleon_couplings](/documentation/code/classes/structgambit_1_1dm__nucleon__couplings/)**  |
| struct | **[Gambit::NREO_DM_nucleon_couplings](/documentation/code/classes/structgambit_1_1nreo__dm__nucleon__couplings/)** <br>Container for effective non-relativistic DM-nucleon Wilson coefficients.  |
| struct | **[Gambit::DD_coupling_container](/documentation/code/classes/structgambit_1_1dd__coupling__container/)**  |

## Detailed Description


**Author**: 

  * Pat Scott [p.scott@imperial.ac.uk](mailto:p.scott@imperial.ac.uk)
  * Ben Farmer ([b.farmer@imperial.ac.uk](mailto:b.farmer@imperial.ac.uk)) 
  * Felix Kahlhofer ([kahlhoefer@physik.rwth-aachen.de](mailto:kahlhoefer@physik.rwth-aachen.de)) 


**Date**: 

  * 2016 May
  * 2019 Jul
  * 2020 May


Helper types for DDCalc backend.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef __DDCalc_types_hpp__
#define __DDCalc_types_hpp__

#include <map>

namespace Gambit
{

  // Forward declarations
  class ModelParameters;
  template<class T> class safe_ptr;
  namespace Models { template<class T> class safe_param_map; }

  // Container for SI/SD DM-nucleon couplings
  struct DM_nucleon_couplings
  {
    double gps;
    double gns;
    double gpa;
    double gna;
  };

  struct NREO_DM_nucleon_couplings
  {
      public:
          // Various constructors
          NREO_DM_nucleon_couplings();
          NREO_DM_nucleon_couplings(int CPT);
          NREO_DM_nucleon_couplings(const ModelParameters&);
          NREO_DM_nucleon_couplings(const Models::safe_param_map<safe_ptr<const double>>&);
          // Define operator basis
          // CPTbasis = 1 for NREFT_CPT basis
          // CPTbasis = 0 for NREffectiveTheory basis
          int CPTbasis;
          std::map<int,double> c0;
          std::map<int,double> c1;
  };

  struct DD_coupling_container
  {
    int coeff_structure;                               // Simple integer to determine which WIMP type to initialise. Possible choices are
                                                       // int = 1: Spin-independent/spin-dependent interactions only
                                                       // int = 2: NREFT_CPT from arXiv:1708.02678
                                                       // int = 3: NREffectiveTheory from arXiv:1505.03117
    DM_nucleon_couplings          DM_nucleon_coeffs;   // SI/SD DM-nucleon couplings (relevant for int = 1)
    NREO_DM_nucleon_couplings     DD_nonrel_WCs;       // Effective non-relativistic DM-nucleon Wilson coefficients (relevant for int = 2, 3)
  };

}

#endif /* defined __DDCalc_types_hpp__ */
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
