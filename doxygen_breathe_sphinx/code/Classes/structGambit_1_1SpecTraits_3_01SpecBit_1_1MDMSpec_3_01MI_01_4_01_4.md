---
title: 'struct Gambit::SpecTraits< SpecBit::MDMSpec< MI > >'

description: "[No description available]"

---








[No description available] [More...](#detailed-description)


`#include <MDMSpec_head.hpp>`

## Public Types

|                | Name           |
| -------------- | -------------- |
| typedef SpectrumContents::MDM | **[Contents](/documentation/code/classes/structgambit_1_1spectraits_3_01specbit_1_1mdmspec_3_01mi_01_4_01_4/#typedef-contents)**  |
| typedef MI::Model | **[Model](/documentation/code/classes/structgambit_1_1spectraits_3_01specbit_1_1mdmspec_3_01mi_01_4_01_4/#typedef-model)**  |
| typedef DummyInput | **[Input](/documentation/code/classes/structgambit_1_1spectraits_3_01specbit_1_1mdmspec_3_01mi_01_4_01_4/#typedef-input)**  |

## Public Functions

|                | Name           |
| -------------- | -------------- |
| std::string | **[name](/documentation/code/classes/structgambit_1_1spectraits_3_01specbit_1_1mdmspec_3_01mi_01_4_01_4/#function-name)**() |

## Detailed Description

```
template <class MI >
struct Gambit::SpecTraits< SpecBit::MDMSpec< MI > >;
```


Specialisation of "traits" class used to inform Spec<T> class of what "Model" and "Input" are for this derived class 

## Public Types Documentation

### typedef Contents

```
typedef SpectrumContents::MDM Gambit::SpecTraits< SpecBit::MDMSpec< MI > >::Contents;
```


### typedef Model

```
typedef MI::Model Gambit::SpecTraits< SpecBit::MDMSpec< MI > >::Model;
```


### typedef Input

```
typedef DummyInput Gambit::SpecTraits< SpecBit::MDMSpec< MI > >::Input;
```


## Public Functions Documentation

### function name

```
static inline std::string name()
```


-------------------------------

Updated on 2022-07-20 at 17:18:43 +0000