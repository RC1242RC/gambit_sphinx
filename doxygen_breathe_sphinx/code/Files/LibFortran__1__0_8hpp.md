---
title: 'file frontends/LibFortran_1_0.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::Backends](/documentation/code/namespaces/namespacegambit_1_1backends/)**  |

## Functions

|                | Name           |
| -------------- | -------------- |
| [LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library) | **[BE_FUNCTION](/documentation/code/files/libfortran__1__0_8hpp/#function-be-function)**(runMe , void , (double(*)(int &), int &) , "runme_" , "runMe" ) |

## Attributes

|                | Name           |
| -------------- | -------------- |
| [LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library) | **[double](/documentation/code/files/libfortran__1__0_8hpp/#variable-double)**  |
| [LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library) double int | **[average_](/documentation/code/files/libfortran__1__0_8hpp/#variable-average-)**  |

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[BACKENDNAME](/documentation/code/files/libfortran__1__0_8hpp/#define-backendname)**  |
|  | **[BACKENDLANG](/documentation/code/files/libfortran__1__0_8hpp/#define-backendlang)**  |
|  | **[VERSION](/documentation/code/files/libfortran__1__0_8hpp/#define-version)**  |
|  | **[SAFE_VERSION](/documentation/code/files/libfortran__1__0_8hpp/#define-safe-version)**  |
|  | **[REFERENCE](/documentation/code/files/libfortran__1__0_8hpp/#define-reference)**  |

## Detailed Description


**Author**: Anders Kvellestad

A fortran backend-frontend example.



------------------

Authors (add name and date if you modify):



------------------


## Functions Documentation

### function BE_FUNCTION

```
LOAD_LIBRARY BE_FUNCTION(
    runMe ,
    void ,
    (double(*)(int &), int &) ,
    "runme_" ,
    "runMe" 
)
```



## Attributes Documentation

### variable double

```
LOAD_LIBRARY double;
```


### variable average_

```
LOAD_LIBRARY double int average_;
```



## Macros Documentation

### define BACKENDNAME

```
#define BACKENDNAME LibFortran
```


### define BACKENDLANG

```
#define BACKENDLANG FORTRAN
```


### define VERSION

```
#define VERSION 1.0
```


### define SAFE_VERSION

```
#define SAFE_VERSION 1_0
```


### define REFERENCE

```
#define REFERENCE GAMBIT:2017yxo
```


## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************


#define BACKENDNAME LibFortran
#define BACKENDLANG FORTRAN
#define VERSION 1.0
#define SAFE_VERSION 1_0
#define REFERENCE GAMBIT:2017yxo

LOAD_LIBRARY

BE_FUNCTION(runMe, void, ( double (*)(int&), int&), "runme_", "runMe")
BE_FUNCTION(externalFunction, double, (int&), "externalfunction_", "externalFunction")
BE_FUNCTION(externalFunction2, double, (int&, const double&), "externalfunction2_", "externalComplicatedFunction")

// Tests for Torsten
BE_FUNCTION(average, double, (double(*)(double&), int&), "average_", "average")
BE_FUNCTION(funcGauss, double, (double&), "funcgauss_", "funcGauss")
BE_FUNCTION(funcBE, double, (double&), "funcbe_", "funcBE")

//Notes: fortran arguments must always be TYPE& for passing by reference , const TYPE& for
//passing by value, except for function pointers, which go directly by value.  The arguments
//of the functions to which pointers are being sent must be passed by reference in order
//for fortran to be able to use them.  It apparently makes no difference whether they are
//passed as const or not.

namespace Gambit
{
  namespace Backends
  {
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
    {

      /* Convenience functions go here */

    } /* end namespace BACKENDNAME_SAFE_VERSION */
  } /* end namespace Backends */
} /* end namespace Gambit */

BE_INI_FUNCTION{}
END_BE_INI_FUNCTION

// Undefine macros to avoid conflict with other backends
#include "gambit/Backends/backend_undefs.hpp"
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
