---
title: 'file backend_types/DarkAges.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::DarkAges](/documentation/code/namespaces/namespacegambit_1_1darkages/)**  |

## Classes

|                | Name           |
| -------------- | -------------- |
| struct | **[Gambit::DarkAges::Energy_injection_spectrum](/documentation/code/classes/structgambit_1_1darkages_1_1energy__injection__spectrum/)**  |
| struct | **[Gambit::DarkAges::Energy_injection_efficiency_table](/documentation/code/classes/structgambit_1_1darkages_1_1energy__injection__efficiency__table/)**  |

## Detailed Description


**Author**: Patrick Stoecker ([stoecker@physik.rwth-aachen.de](mailto:stoecker@physik.rwth-aachen.de)) 

**Date**: 2018 Mar

Definitions of container classes for the DarkAges backend.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef __DarkAges_types_hpp__
#define __DarkAges_types_hpp__

namespace Gambit
{
  namespace DarkAges
  {
    struct Energy_injection_spectrum
    {
      // kinetic energy of electron-positron plasma
      std::vector<double> E_el;
      // kinetic energy of photons
      std::vector<double> E_ph;
      // normalised electron-positron spectrum (dN/dE in GeV^-1) as function of energy E_el
      std::vector<double> spec_el;
      // normalised photon spectrum (dN/dE in GeV^-1) as function of energy E_ph
      std::vector<double> spec_ph;
    };

    // "==" and "!=" operators for Energy_injection_spectrum
    inline bool operator==(const Energy_injection_spectrum& lhs,
                           const Energy_injection_spectrum& rhs)
    {
      return lhs.E_el == rhs.E_el
          && lhs.E_ph == rhs.E_ph
          && lhs.spec_el == rhs.spec_el
          && lhs.spec_ph == rhs.spec_ph;
    }

    inline bool operator!=(const Energy_injection_spectrum& lhs,
                           const Energy_injection_spectrum& rhs)
    {
      return !(lhs == rhs);
    }

    struct Energy_injection_efficiency_table
    {
      // Flag whether DarkAges calculates f_c(z) per injection channel or an
      // effective f(z) which is multiplied with repartition fucntions
      // chi_c(x_e,z) later on (in classy)
      bool f_eff_mode = false;

      // Redshift vector (filled in both modes)
      std::vector<double> redshift;

      // f_c(z) seperated by injection channels
      // (filled only if f_eff_mode is false)
      std::vector<double> f_heat;
      std::vector<double> f_lya;
      std::vector<double> f_hion;
      std::vector<double> f_heion;
      std::vector<double> f_lowe;

      // f_eff(z)
      // (filled only if f_eff_mode is true)
      std::vector<double> f_eff;
    };

    // "==" and "!=" operators for Energy_injection_efficiency_table
    inline bool operator==(const Energy_injection_efficiency_table& lhs,
                           const Energy_injection_efficiency_table& rhs)
    {
      return lhs.f_eff_mode == rhs.f_eff_mode
          && lhs.redshift == rhs.redshift
          && lhs.f_heat == rhs.f_heat
          && lhs.f_lya == rhs.f_lya
          && lhs.f_hion == rhs.f_hion
          && lhs.f_heion == rhs.f_heion
          && lhs.f_lowe == rhs.f_lowe
          && lhs.f_eff == rhs.f_eff;
    }

    inline bool operator!=(const Energy_injection_efficiency_table& lhs,
                           const Energy_injection_efficiency_table& rhs)
    {
      return !(lhs == rhs);
    }

  }
}

#endif // defined __DarkAges_types_hpp__
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
