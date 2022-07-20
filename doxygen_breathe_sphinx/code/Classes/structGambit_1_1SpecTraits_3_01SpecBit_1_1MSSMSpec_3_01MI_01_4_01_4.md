---
title: 'struct Gambit::SpecTraits< SpecBit::MSSMSpec< MI > >'

description: "[No description available]"

---








[No description available] [More...](#detailed-description)


`#include <MSSMSpec_head.hpp>`

## Public Types

|                | Name           |
| -------------- | -------------- |
| typedef SpectrumContents::MSSM | **[Contents](/documentation/code/classes/structgambit_1_1spectraits_3_01specbit_1_1mssmspec_3_01mi_01_4_01_4/#typedef-contents)**  |
| typedef MI::Model | **[Model](/documentation/code/classes/structgambit_1_1spectraits_3_01specbit_1_1mssmspec_3_01mi_01_4_01_4/#typedef-model)**  |
| typedef DummyInput | **[Input](/documentation/code/classes/structgambit_1_1spectraits_3_01specbit_1_1mssmspec_3_01mi_01_4_01_4/#typedef-input)**  |

## Public Functions

|                | Name           |
| -------------- | -------------- |
| std::string | **[name](/documentation/code/classes/structgambit_1_1spectraits_3_01specbit_1_1mssmspec_3_01mi_01_4_01_4/#function-name)**() |

## Detailed Description

```
template <class MI >
struct Gambit::SpecTraits< SpecBit::MSSMSpec< MI > >;
```


Specialisation of "traits" class used to inform Spec<T> class of what "Model" and "Input" are for this derived class 

## Public Types Documentation

### typedef Contents

```
typedef SpectrumContents::MSSM Gambit::SpecTraits< SpecBit::MSSMSpec< MI > >::Contents;
```


### typedef Model

```
typedef MI::Model Gambit::SpecTraits< SpecBit::MSSMSpec< MI > >::Model;
```


### typedef Input

```
typedef DummyInput Gambit::SpecTraits< SpecBit::MSSMSpec< MI > >::Input;
```


## Public Functions Documentation

### function name

```
static inline std::string name()
```


-------------------------------

Updated on 2022-07-20 at 17:18:43 +0000