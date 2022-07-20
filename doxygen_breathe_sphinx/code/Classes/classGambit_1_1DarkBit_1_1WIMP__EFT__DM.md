---
title: 'class Gambit::DarkBit::WIMP_EFT_DM'

description: "[No description available]"

---








[No description available]

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[WIMP_EFT_DM](/documentation/code/classes/classgambit_1_1darkbit_1_1wimp__eft__dm/#function-wimp-eft-dm)**([TH_ProcessCatalog](/documentation/code/classes/structgambit_1_1darkbit_1_1th__processcatalog/) *const catalog)<br>Initialize object (branching ratios etc)  |
| double | **[sv](/documentation/code/classes/classgambit_1_1darkbit_1_1wimp__eft__dm/#function-sv)**(std::string channel, double mass, double A, double B, double v)<br>Returns <sigma v> in cm3/s for given channel, velocity and model parameters.  |

## Public Functions Documentation

### function WIMP_EFT_DM

```
inline WIMP_EFT_DM(
    TH_ProcessCatalog *const catalog
)
```

Initialize object (branching ratios etc) 

### function sv

```
inline double sv(
    std::string channel,
    double mass,
    double A,
    double B,
    double v
)
```

Returns <sigma v> in cm3/s for given channel, velocity and model parameters. 

channel: bb, tautau, mumu, ss, cc, tt, gg, gammagamma, Zgamma, WW, ZZ, hh

Parameterises <sigma v> as A + Bv^2, i.e. s + p wave annihilation with no resonances, subject to basic kinematic constraints. 


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000