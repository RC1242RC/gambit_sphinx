---
title: 'class Gambit::DarkBit::HESS_Interpolator'

description: "[No description available]"

---








[No description available]

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[HESS_Interpolator](/documentation/code/classes/classgambit_1_1darkbit_1_1hess__interpolator/#function-hess-interpolator)**(std::string file) |
| | **[~HESS_Interpolator](/documentation/code/classes/classgambit_1_1darkbit_1_1hess__interpolator/#function-~hess-interpolator)**() |
| | **[HESS_Interpolator](/documentation/code/classes/classgambit_1_1darkbit_1_1hess__interpolator/#function-hess-interpolator)**(const [HESS_Interpolator](/documentation/code/classes/classgambit_1_1darkbit_1_1hess__interpolator/) & ) =delete |
| [HESS_Interpolator](/documentation/code/classes/classgambit_1_1darkbit_1_1hess__interpolator/) | **[operator=](/documentation/code/classes/classgambit_1_1darkbit_1_1hess__interpolator/#function-operator=)**(const [HESS_Interpolator](/documentation/code/classes/classgambit_1_1darkbit_1_1hess__interpolator/) & ) =delete |
| double | **[lnL](/documentation/code/classes/classgambit_1_1darkbit_1_1hess__interpolator/#function-lnl)**(double epsilon, double gamma) |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| ASCIItableReader | **[interp_lnL](/documentation/code/classes/classgambit_1_1darkbit_1_1hess__interpolator/#variable-interp-lnl)**  |

## Public Functions Documentation

### function HESS_Interpolator

```
HESS_Interpolator(
    std::string file
)
```


### function ~HESS_Interpolator

```
~HESS_Interpolator()
```


### function HESS_Interpolator

```
HESS_Interpolator(
    const HESS_Interpolator & 
) =delete
```


### function operator=

```
HESS_Interpolator operator=(
    const HESS_Interpolator & 
) =delete
```


### function lnL

```
double lnL(
    double epsilon,
    double gamma
)
```


## Public Attributes Documentation

### variable interp_lnL

```
ASCIItableReader interp_lnL;
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000