---
title: 'class Gambit::CosmoBit::Primordial_ps'

description: "[No description available]"

---








[No description available] [More...](#detailed-description)


`#include <CosmoBit_types.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[Primordial_ps](/documentation/code/classes/classgambit_1_1cosmobit_1_1primordial__ps/#function-primordial-ps)**() |
| | **[~Primordial_ps](/documentation/code/classes/classgambit_1_1cosmobit_1_1primordial__ps/#function-~primordial-ps)**() |
| void | **[set_N_pivot](/documentation/code/classes/classgambit_1_1cosmobit_1_1primordial__ps/#function-set-n-pivot)**(double npiv)<br>Fill k from an array of doubles.  |
| void | **[fill_k](/documentation/code/classes/classgambit_1_1cosmobit_1_1primordial__ps/#function-fill-k)**(double * k_array, int len) |
| void | **[fill_P_s](/documentation/code/classes/classgambit_1_1cosmobit_1_1primordial__ps/#function-fill-p-s)**(double * P_s_array, int len) |
| void | **[fill_P_s_iso](/documentation/code/classes/classgambit_1_1cosmobit_1_1primordial__ps/#function-fill-p-s-iso)**(double * P_s_iso_array, int len) |
| void | **[fill_P_t](/documentation/code/classes/classgambit_1_1cosmobit_1_1primordial__ps/#function-fill-p-t)**(double * P_t_array, int len) |
| double | **[get_N_pivot](/documentation/code/classes/classgambit_1_1cosmobit_1_1primordial__ps/#function-get-n-pivot)**() |
| std::vector< double > & | **[get_k](/documentation/code/classes/classgambit_1_1cosmobit_1_1primordial__ps/#function-get-k)**() |
| std::vector< double > & | **[get_P_s](/documentation/code/classes/classgambit_1_1cosmobit_1_1primordial__ps/#function-get-p-s)**() |
| std::vector< double > & | **[get_P_t](/documentation/code/classes/classgambit_1_1cosmobit_1_1primordial__ps/#function-get-p-t)**() |
| std::vector< double > & | **[get_P_s_iso](/documentation/code/classes/classgambit_1_1cosmobit_1_1primordial__ps/#function-get-p-s-iso)**() |
| int | **[get_vec_size](/documentation/code/classes/classgambit_1_1cosmobit_1_1primordial__ps/#function-get-vec-size)**() |

## Detailed Description

```
class Gambit::CosmoBit::Primordial_ps;
```


Class containing the primordial power spectrum. Members:

* vector of modes k (1/Mpc)
* scalar power spectrum of these modes P_s(k) (dimensionless)
* tensor power spectrum of these modes P_t(k) (dimensionless)
* scalar power spectrum of isocurvature modes P_s_iso(k) (dimensionless) 

## Public Functions Documentation

### function Primordial_ps

```
inline Primordial_ps()
```


### function ~Primordial_ps

```
inline ~Primordial_ps()
```


### function set_N_pivot

```
inline void set_N_pivot(
    double npiv
)
```

Fill k from an array of doubles. 

### function fill_k

```
void fill_k(
    double * k_array,
    int len
)
```


### function fill_P_s

```
void fill_P_s(
    double * P_s_array,
    int len
)
```


### function fill_P_s_iso

```
void fill_P_s_iso(
    double * P_s_iso_array,
    int len
)
```


### function fill_P_t

```
void fill_P_t(
    double * P_t_array,
    int len
)
```


### function get_N_pivot

```
inline double get_N_pivot()
```


### function get_k

```
inline std::vector< double > & get_k()
```


### function get_P_s

```
inline std::vector< double > & get_P_s()
```


### function get_P_t

```
inline std::vector< double > & get_P_t()
```


### function get_P_s_iso

```
inline std::vector< double > & get_P_s_iso()
```


### function get_vec_size

```
inline int get_vec_size()
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000