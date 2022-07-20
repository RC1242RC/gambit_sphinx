---
title: 'file frontends/LibFarrayTest_1_0.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Functions

|                | Name           |
| -------------- | -------------- |
| [LOAD_LIBRARY](/documentation/code/files/frontend__macros_8hpp/#define-load-library) | **[BE_FUNCTION](/documentation/code/files/libfarraytest__1__0_8hpp/#function-be-function)**(fptrRoutine , void , (Farray< Fdouble, 1, 3 > &, Finteger &, Fdouble(*)(Farray< Fdouble, 1, 3 > &)) , "fptrroutine_" , "libFarrayTest_fptrRoutine" ) |

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[BACKENDNAME](/documentation/code/files/libfarraytest__1__0_8hpp/#define-backendname)**  |
|  | **[BACKENDLANG](/documentation/code/files/libfarraytest__1__0_8hpp/#define-backendlang)**  |
|  | **[VERSION](/documentation/code/files/libfarraytest__1__0_8hpp/#define-version)**  |
|  | **[SAFE_VERSION](/documentation/code/files/libfarraytest__1__0_8hpp/#define-safe-version)**  |
|  | **[REFERENCE](/documentation/code/files/libfarraytest__1__0_8hpp/#define-reference)**  |

## Detailed Description


**Author**: Lars A. Dal

A fortran backend-frontend example, showing how to use the special GAMBIT fortran variable types, in particular fortran arrays.



------------------

Authors (add name and date if you modify):



------------------


## Functions Documentation

### function BE_FUNCTION

```
LOAD_LIBRARY BE_FUNCTION(
    fptrRoutine ,
    void ,
    (Farray< Fdouble, 1, 3 > &, Finteger &, Fdouble(*)(Farray< Fdouble, 1, 3 > &)) ,
    "fptrroutine_" ,
    "libFarrayTest_fptrRoutine" 
)
```




## Macros Documentation

### define BACKENDNAME

```
#define BACKENDNAME LibFarrayTest
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


#define BACKENDNAME LibFarrayTest
#define BACKENDLANG FORTRAN
#define VERSION 1.0
#define SAFE_VERSION 1_0
#define REFERENCE GAMBIT:2017yxo

LOAD_LIBRARY

BE_VARIABLE(commonBlock, libFarrayTest_CB_type, "commonblock_", "libFarrayTestCommonBlock")
BE_VARIABLE(commonBlock2, libFarrayTest_CB2_type, "commonblock2_", "libFarrayTestCommonBlock2")
BE_VARIABLE(commonBlock3, libFarrayTest_CB3_type, "commonblock3_", "libFarrayTestCommonBlock3")

BE_FUNCTION(printStuff, void, (), "printstuff_", "libFarrayTest_printStuff")

BE_FUNCTION(fillArrays, void, (), "fillarrays_", "libFarrayTest_fillArrays")

BE_FUNCTION(fptrRoutine, void, (Farray< Fdouble,1,3>&, Finteger&, Fdouble(*)(Farray< Fdouble,1,3>&) ), "fptrroutine_", "libFarrayTest_fptrRoutine")

BE_FUNCTION(doubleFuncArray, Fdouble, (Farray< Fdouble,1,3>&), "doublefuncarray_", "libFarrayTest_doubleFuncArray")

// The doubleFuncArray2 function is identical to doubleFuncArray.
// This is an alternative way to declare and use the function (see ExampleBit A).
// This version should only be used in very special cases, where you need to pass arrays with different index ranges than those specified in the function.
// (But you should know what you are doing!)
BE_FUNCTION(doubleFuncArray2, Fdouble, (Fdouble*), "doublefuncarray2_", "libFarrayTest_doubleFuncArray2")

BE_FUNCTION(doubleFuncArray3, Fdouble, (Farray<Fdouble, 1,2, 2,3>&), "doublefuncarray3_", "libFarrayTest_doubleFuncArray3")

BE_FUNCTION(testcomplex, void, (Fcomplex16&, Freal8&, Freal8&), "testcomplex_", "libFarrayTest_testcomplex")

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
