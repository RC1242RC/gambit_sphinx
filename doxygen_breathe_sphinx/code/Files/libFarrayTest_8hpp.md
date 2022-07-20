---
title: 'file backend_types/libFarrayTest.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |

## Classes

|                | Name           |
| -------------- | -------------- |
| struct | **[Gambit::libFarrayTest_CB_type](/documentation/code/classes/structgambit_1_1libfarraytest__cb__type/)**  |
| struct | **[Gambit::libFarrayTest_CB2_type](/documentation/code/classes/structgambit_1_1libfarraytest__cb2__type/)**  |
| struct | **[Gambit::libFarrayTest_CB3_type](/documentation/code/classes/structgambit_1_1libfarraytest__cb3__type/)**  |

## Detailed Description


**Author**: Lars A. Dal ([l.a.dal@fys.uio.no](mailto:l.a.dal@fys.uio.no)) 

**Date**: 2014 Feb

Definitions of container classes for the libFarrayTest backend.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef __libFarrayTest_types_hpp__
#define __libFarrayTest_types_hpp__

#include "gambit/Utils/util_types.hpp"

// Farray syntax:
// Farray<[type], [lower index, dim 1], [upper index, dim 1], [alternating lower/upper indices for subsequent dimensions]>
// Fstring syntax:
// Fstring<[string length]>
// FstringArray syntax:
// FstringArray<[string length], [lower index, dim 1], [upper index, dim 1], [alternating lower/upper indices for subsequent dimensions]>

// See util_types.hpp for the typedefs (such as Finteger) used in the code below
namespace Gambit
{
    struct libFarrayTest_CB_type
    {
        Farray< Fdouble,-2,0> a;
        Farray< Fdouble,1,3>  b;
        Finteger c;
        Farray<Finteger, 1,3, 0,1, -1,0> d;
    };
    struct libFarrayTest_CB2_type
    {
        Fstring<5> chara;
        FstringArray<5, 1,3>  charb;
        FstringArray<6, 1,2, -1,0> charc;
        Finteger e;
    };
    struct libFarrayTest_CB3_type
    {
        Fcomplex cpa;
        Fcomplex16 cpb;
        Finteger f;
    };
}

#endif // defined __libFarrayTest_types_hpp__
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
