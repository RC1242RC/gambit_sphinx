---
title: 'struct Gambit::DarkBit::SimYieldChannel'
description: 'Annihilation/decay channel. '

---








Annihilation/decay channel. 


`#include <DarkBit_types.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[SimYieldChannel](/documentation/code/classes/structgambit_1_1darkbit_1_1simyieldchannel/#function-simyieldchannel)**(daFunk::Funk dNdE, const std::string & p1, const std::string & p2, const std::string & finalState, double Ecm_min, double Ecm_max, [safe_ptr](/documentation/code/classes/classgambit_1_1safe__ptr/)< Options > runOptions)<br>General annihilation/decay channel for sim yield tables.  |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| daFunk::Funk | **[dNdE](/documentation/code/classes/structgambit_1_1darkbit_1_1simyieldchannel/#variable-dnde)**  |
| daFunk::BoundFunk | **[dNdE_bound](/documentation/code/classes/structgambit_1_1darkbit_1_1simyieldchannel/#variable-dnde-bound)**  |
| std::string | **[p1](/documentation/code/classes/structgambit_1_1darkbit_1_1simyieldchannel/#variable-p1)**  |
| std::string | **[p2](/documentation/code/classes/structgambit_1_1darkbit_1_1simyieldchannel/#variable-p2)**  |
| std::string | **[finalState](/documentation/code/classes/structgambit_1_1darkbit_1_1simyieldchannel/#variable-finalstate)**  |
| double | **[finalStateMass](/documentation/code/classes/structgambit_1_1darkbit_1_1simyieldchannel/#variable-finalstatemass)**  |
| double | **[Ecm_min](/documentation/code/classes/structgambit_1_1darkbit_1_1simyieldchannel/#variable-ecm-min)**  |
| double | **[Ecm_max](/documentation/code/classes/structgambit_1_1darkbit_1_1simyieldchannel/#variable-ecm-max)**  |

## Public Functions Documentation

### function SimYieldChannel

```
SimYieldChannel(
    daFunk::Funk dNdE,
    const std::string & p1,
    const std::string & p2,
    const std::string & finalState,
    double Ecm_min,
    double Ecm_max,
    safe_ptr< Options > runOptions
)
```

General annihilation/decay channel for sim yield tables. 

## Public Attributes Documentation

### variable dNdE

```
daFunk::Funk dNdE;
```


### variable dNdE_bound

```
daFunk::BoundFunk dNdE_bound;
```


### variable p1

```
std::string p1;
```


### variable p2

```
std::string p2;
```


### variable finalState

```
std::string finalState;
```


### variable finalStateMass

```
double finalStateMass;
```


### variable Ecm_min

```
double Ecm_min;
```


### variable Ecm_max

```
double Ecm_max;
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000