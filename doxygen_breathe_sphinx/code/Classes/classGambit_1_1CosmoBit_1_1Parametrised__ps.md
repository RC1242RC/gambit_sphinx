---
title: 'class Gambit::CosmoBit::Parametrised_ps'

description: "[No description available]"

---








[No description available] [More...](#detailed-description)


`#include <CosmoBit_types.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[Parametrised_ps](/documentation/code/classes/classgambit_1_1cosmobit_1_1parametrised__ps/#function-parametrised-ps)**() |
| | **[~Parametrised_ps](/documentation/code/classes/classgambit_1_1cosmobit_1_1parametrised__ps/#function-~parametrised-ps)**() |
| void | **[set_N_pivot](/documentation/code/classes/classgambit_1_1cosmobit_1_1parametrised__ps/#function-set-n-pivot)**(double npiv) |
| void | **[set_n_s](/documentation/code/classes/classgambit_1_1cosmobit_1_1parametrised__ps/#function-set-n-s)**(double ns) |
| void | **[set_ln10A_s](/documentation/code/classes/classgambit_1_1cosmobit_1_1parametrised__ps/#function-set-ln10a-s)**(double ln10As) |
| void | **[set_r](/documentation/code/classes/classgambit_1_1cosmobit_1_1parametrised__ps/#function-set-r)**(double rr) |
| double | **[get_N_pivot](/documentation/code/classes/classgambit_1_1cosmobit_1_1parametrised__ps/#function-get-n-pivot)**() |
| double | **[get_n_s](/documentation/code/classes/classgambit_1_1cosmobit_1_1parametrised__ps/#function-get-n-s)**() |
| double | **[get_ln10A_s](/documentation/code/classes/classgambit_1_1cosmobit_1_1parametrised__ps/#function-get-ln10a-s)**() |
| double | **[get_r](/documentation/code/classes/classgambit_1_1cosmobit_1_1parametrised__ps/#function-get-r)**() |
| map_str_dbl | **[get_parametrised_ps_map](/documentation/code/classes/classgambit_1_1cosmobit_1_1parametrised__ps/#function-get-parametrised-ps-map)**()<br>return members as str to double map for printing  |

## Detailed Description

```
class Gambit::CosmoBit::Parametrised_ps;
```


Class containing the _parametrised_ primordial power spectrum. Members:

* spectral tilt n_s
* amplitude of scalar perturbations A_s [as ln(10^{10}A_s)]
* scalar to tensor ratio r 

## Public Functions Documentation

### function Parametrised_ps

```
inline Parametrised_ps()
```


### function ~Parametrised_ps

```
inline ~Parametrised_ps()
```


### function set_N_pivot

```
inline void set_N_pivot(
    double npiv
)
```


### function set_n_s

```
inline void set_n_s(
    double ns
)
```


### function set_ln10A_s

```
inline void set_ln10A_s(
    double ln10As
)
```


### function set_r

```
inline void set_r(
    double rr
)
```


### function get_N_pivot

```
inline double get_N_pivot()
```


### function get_n_s

```
inline double get_n_s()
```


### function get_ln10A_s

```
inline double get_ln10A_s()
```


### function get_r

```
inline double get_r()
```


### function get_parametrised_ps_map

```
map_str_dbl get_parametrised_ps_map()
```

return members as str to double map for printing 

-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000