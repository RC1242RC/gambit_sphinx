---
title: 'file ScannerBit/printable_types.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[SCANNER_SIMPLE_TYPES_NOBOOL](/documentation/code/files/printable__types_8hpp/#define-scanner-simple-types-nobool)**  |
|  | **[SCANNER_SIMPLE_TYPES](/documentation/code/files/printable__types_8hpp/#define-scanner-simple-types)**  |
|  | **[SCANNER_VECTOR_TYPES](/documentation/code/files/printable__types_8hpp/#define-scanner-vector-types)**  |
|  | **[SCANNER_PRINTABLE_TYPES](/documentation/code/files/printable__types_8hpp/#define-scanner-printable-types)**  |
|  | **[SCANNER_RETRIEVABLE_TYPES](/documentation/code/files/printable__types_8hpp/#define-scanner-retrievable-types)**  |

## Detailed Description


**Author**: 

  * Pat Scott ([p.scott@imperial.ac.uk](mailto:p.scott@imperial.ac.uk)) 
  * Ben Farmer ([benjamin.farmer@fysik.su.se](mailto:benjamin.farmer@fysik.su.se)) 


**Date**: 

  * 2015 Jun
  * 2016 Feb


Preprocessor sequence of functor types that should be allowed to print when using ScannerBit in standalone mode. Add to this as necessary.



------------------

Authors:



------------------




## Macros Documentation

### define SCANNER_SIMPLE_TYPES_NOBOOL

```
#define SCANNER_SIMPLE_TYPES_NOBOOL     (int)                             \
    (unsigned int)                    \
    (short int)                       \
    (unsigned short int)              \
    (long)                            \
    (unsigned long)                   \
    (long long)                       \
    (unsigned long long)              \
    (float)                           \
    (double)                          \
```


### define SCANNER_SIMPLE_TYPES

```
#define SCANNER_SIMPLE_TYPES     SCANNER_SIMPLE_TYPES_NOBOOL       \
    (bool)                            \
```


### define SCANNER_VECTOR_TYPES

```
#define SCANNER_VECTOR_TYPES     (std::vector<bool>)               \
    (std::vector<int>)                \
    (std::vector<unsigned int>)       \
    (std::vector<short int>)          \
    (std::vector<unsigned short int>) \
    (std::vector<long>)               \
    (std::vector<unsigned long>)      \
    (std::vector<long long>)          \
    (std::vector<unsigned long long>) \
    (std::vector<float>)              \
    (std::vector<double>)
```


### define SCANNER_PRINTABLE_TYPES

```
#define SCANNER_PRINTABLE_TYPES     SCANNER_SIMPLE_TYPES              \
    SCANNER_VECTOR_TYPES              \
    (map_str_dbl)                     \
    (Gambit::ModelParameters)
```


### define SCANNER_RETRIEVABLE_TYPES

```
#define SCANNER_RETRIEVABLE_TYPES     SCANNER_SIMPLE_TYPES              \
    (std::string)                     \
    (std::vector<double>)             \
    (map_str_dbl)                     \
    (Gambit::ModelParameters)
```


## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#pragma once

#include <string>
#include <map>

#include "gambit/Utils/util_types.hpp"
#include "gambit/Utils/model_parameters.hpp"


namespace Gambit
{
  // Types that scanner plugins are allowed to print.
  // Covers just basic types, vectors of those types, and
  // a couple of extras needed by scanners.

  // Bool has weird behaviour in vectors, so need a version without bool.
  #define SCANNER_SIMPLE_TYPES_NOBOOL \
    (int)                             \
    (unsigned int)                    \
    (short int)                       \
    (unsigned short int)              \
    (long)                            \
    (unsigned long)                   \
    (long long)                       \
    (unsigned long long)              \
    (float)                           \
    (double)                          \

  #define SCANNER_SIMPLE_TYPES        \
    SCANNER_SIMPLE_TYPES_NOBOOL       \
    (bool)                            \

  #define SCANNER_VECTOR_TYPES        \
    (std::vector<bool>)               \
    (std::vector<int>)                \
    (std::vector<unsigned int>)       \
    (std::vector<short int>)          \
    (std::vector<unsigned short int>) \
    (std::vector<long>)               \
    (std::vector<unsigned long>)      \
    (std::vector<long long>)          \
    (std::vector<unsigned long long>) \
    (std::vector<float>)              \
    (std::vector<double>)

  #define SCANNER_PRINTABLE_TYPES     \
    SCANNER_SIMPLE_TYPES              \
    SCANNER_VECTOR_TYPES              \
    (map_str_dbl)                     \
    (Gambit::ModelParameters)

  #define SCANNER_RETRIEVABLE_TYPES   \
    SCANNER_SIMPLE_TYPES              \
    (std::string)                     \
    (std::vector<double>)             \
    (map_str_dbl)                     \
    (Gambit::ModelParameters)
}
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
