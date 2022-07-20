---
title: 'namespace Gambit::DecayBit::SM_Z'

description: "[No description available]"

---






[No description available]

## Classes

|                | Name           |
| -------------- | -------------- |
| class | **[Gambit::DecayBit::SM_Z::TwoLoop](/documentation/code/classes/classgambit_1_1decaybit_1_1sm__z_1_1twoloop/)**  |

## Attributes

|                | Name           |
| -------------- | -------------- |
| const double | **[mu](/documentation/code/namespaces/namespacegambit_1_1decaybit_1_1sm__z/#variable-mu)**  |
| const double | **[sigma](/documentation/code/namespaces/namespacegambit_1_1decaybit_1_1sm__z/#variable-sigma)**  |
| constexpr struct Gambit::DecayBit::SM_Z::@0 | **[gamma_inv](/documentation/code/namespaces/namespacegambit_1_1decaybit_1_1sm__z/#variable-gamma-inv)** <br><ahref=" [http://pdglive.lbl.gov/BranchingRatio.action?desig=9&parCode=S044](http://pdglive.lbl.gov/BranchingRatio.action?desig=9&parCode=S044) ">PDG measurement of invisible width of \(Z\) boson in GeV  |
| const double | **[mh_OS](/documentation/code/namespaces/namespacegambit_1_1decaybit_1_1sm__z/#variable-mh-os)**  |
| const double | **[mt_OS](/documentation/code/namespaces/namespacegambit_1_1decaybit_1_1sm__z/#variable-mt-os)**  |
| const double | **[MZ_OS](/documentation/code/namespaces/namespacegambit_1_1decaybit_1_1sm__z/#variable-mz-os)**  |
| const double | **[alpha_s_MSbar_MZ](/documentation/code/namespaces/namespacegambit_1_1decaybit_1_1sm__z/#variable-alpha-s-msbar-mz)**  |
| const double | **[delta_alpha_OS](/documentation/code/namespaces/namespacegambit_1_1decaybit_1_1sm__z/#variable-delta-alpha-os)**  |
| constexpr struct Gambit::DecayBit::SM_Z::@1 | **[hat](/documentation/code/namespaces/namespacegambit_1_1decaybit_1_1sm__z/#variable-hat)** <br>The central values of nuisances from eq. 13.  |
| constexpr int | **[kRows](/documentation/code/namespaces/namespacegambit_1_1decaybit_1_1sm__z/#variable-krows)**  |
| constexpr int | **[kCols](/documentation/code/namespaces/namespacegambit_1_1decaybit_1_1sm__z/#variable-kcols)**  |
| constexpr double | **[table_5](/documentation/code/namespaces/namespacegambit_1_1decaybit_1_1sm__z/#variable-table-5)** <br>Coefficient data in Table 5 with MeV converted to GeV.  |
| constexpr double | **[table_6](/documentation/code/namespaces/namespacegambit_1_1decaybit_1_1sm__z/#variable-table-6)** <br>Data in Table 6, though re-arranged to match columns in Table 5 with MeV converted to GeV.  |



## Attributes Documentation

### variable mu

```
const double mu = 499.0e-3;
```


### variable sigma

```
const double sigma = 1.5e-3;
```


### variable gamma_inv

```
constexpr struct Gambit::DecayBit::SM_Z::@0 gamma_inv;
```

<ahref=" [http://pdglive.lbl.gov/BranchingRatio.action?desig=9&parCode=S044](http://pdglive.lbl.gov/BranchingRatio.action?desig=9&parCode=S044) ">PDG measurement of invisible width of \(Z\) boson in GeV 

### variable mh_OS

```
const double mh_OS = 125.7;
```


### variable mt_OS

```
const double mt_OS = 173.2;
```


### variable MZ_OS

```
const double MZ_OS = 91.1876;
```


### variable alpha_s_MSbar_MZ

```
const double alpha_s_MSbar_MZ = 0.1184;
```


### variable delta_alpha_OS

```
const double delta_alpha_OS = 0.059;
```


### variable hat

```
constexpr struct Gambit::DecayBit::SM_Z::@1 hat;
```

The central values of nuisances from eq. 13. 

### variable kRows

```
constexpr int kRows = 12;
```


### variable kCols

```
constexpr int kCols = 9;
```


### variable table_5

```
constexpr double table_5 = {
        {83.983e-3, -0.061e-3, 0.810e-3, -0.096e-3, -0.01e-3, 0.25e-3, -1.1e-3, 286e-3, 0.001e-3},
        {83.793e-3, -0.060e-3, 0.810e-3, -0.095e-3, -0.01e-3, 0.25e-3, -1.1e-3, 285.e-3, 0.001e-3},
        {167.176e-3, -0.071e-3, 1.26e-3, -0.19e-3, -0.02e-3, 0.36e-3, -0.1e-3, 504.e-3, 0.001e-3},
        {299.993e-3, -0.38e-3, 4.08e-3, 14.27e-3, 1.6e-3, 1.8e-3, -11.1e-3, 1253.e-3, 0.002e-3},
        {299.916e-3, -0.38e-3, 4.08e-3, 14.27e-3, 1.6e-3, 1.8e-3, -11.1e-3, 1253.e-3, 0.002e-3},
        {382.828e-3, -0.39e-3, 3.83e-3, 10.20e-3, -2.4e-3, 0.67e-3, -10.1e-3, 1470.e-3, 0.002e-3},
        {375.889e-3, -0.36e-3, -2.14e-3, 10.53e-3, -2.4e-3, 1.2e-3, -10.1e-3, 1459.e-3, 0.006e-3},
        {2494.74e-3, -2.3e-3, 19.9e-3, 58.61e-3, -4.0e-3, 8.0e-3, -56.0e-3, 9273.e-3, 0.012e-3},
        {20751.6, -7.8, -37., 732.3, -44, 5.5, -358, 11696., 0.1 },
        {172.22, -0.031, 1.0, 2.3, 1.3, 0.38, -1.2, 37., 0.01},
        {215.85, 0.029, -2.92, -1.32, -0.84, 0.032, 0.72, -18., 0.01},
        {41489.6, 1.6, 60.0, -579.6, 38., 7.3, 85., 0.1},
      };
```

Coefficient data in Table 5 with MeV converted to GeV. 

### variable table_6

```
constexpr double table_6 =
        {0.018e-3, 0.018e-3, 0.016e-3, 0.11e-3, 0.11e-3, 0.08e-3, 0.18e-3, 0.4e-3, 6.e-3, 5.e-5, 1.e-4, 6.};
```

Data in Table 6, though re-arranged to match columns in Table 5 with MeV converted to GeV. 

The final entry isn't in the table and instead comes from the text below eq. 16. 





-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000