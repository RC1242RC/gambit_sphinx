---
title: 'file frontends/LibMathematicaTest_1_0.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[BACKENDNAME](/documentation/code/files/libmathematicatest__1__0_8hpp/#define-backendname)**  |
|  | **[BACKENDLANG](/documentation/code/files/libmathematicatest__1__0_8hpp/#define-backendlang)**  |
|  | **[VERSION](/documentation/code/files/libmathematicatest__1__0_8hpp/#define-version)**  |
|  | **[SAFE_VERSION](/documentation/code/files/libmathematicatest__1__0_8hpp/#define-safe-version)**  |
|  | **[REFERENCE](/documentation/code/files/libmathematicatest__1__0_8hpp/#define-reference)**  |

## Detailed Description


**Author**: Tomas Gonzalo 

**Date**: 2016 Sept

A Mathematica backend example.



------------------

Authors (add name and sate if you modify):



------------------




## Macros Documentation

### define BACKENDNAME

```
#define BACKENDNAME libMathematicaTest
```


### define BACKENDLANG

```
#define BACKENDLANG MATHEMATICA
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

#define BACKENDNAME libMathematicaTest
#define BACKENDLANG MATHEMATICA
#define VERSION 1.0
#define SAFE_VERSION 1_0
#define REFERENCE GAMBIT:2017yxo

LOAD_LIBRARY

BE_ALLOW_MODELS(CMSSM)

BE_FUNCTION(CalculateSquare, MReal, (const MInteger&), "CalculateSquare","MathTest_CalculateSquare")
BE_FUNCTION(CalculateSum, MReal, (const MReal&, const MReal&), "CalculateSum", "MathTest_CalculateSum")
BE_FUNCTION(PrintVar, MInteger, (), "PrintVar", "MathTest_PrintVar")
BE_FUNCTION(PrintVarorVar2, MReal, (const MBool&), "PrintVarorVar2", "MathTest_PrintVarorVar2")
BE_FUNCTION(VarEqualVar2, MBool, (), "VarEqualVar2", "MathTest_VarEqualVar2")
BE_FUNCTION(StringTest, MString, (const MString&), "StringTest", "MathTest_StringTest")
BE_FUNCTION(VoidTest, MVoid, (), "VoidTest", "MathTest_VoidTest")
BE_FUNCTION(ExtractElement, MInteger, (const MList<MInteger>&, const MInteger&), "ExtractElement", "MathTest_ExtractElement")
BE_FUNCTION(SquareList, MList<MInteger>, (const MList<MInteger>&), "SquareList", "MathTest_SquareList")
BE_FUNCTION(Gammafunc, MInteger, (const MInteger&), "\\[CapitalGamma]func", "MathTest_Gammafunc")

BE_VARIABLE(Var, MInteger, "Var", "MathTest_Var")
BE_VARIABLE(Var2, MReal, "Var2", "MathTest_Var2")
BE_VARIABLE(deltavar, MInteger, "\\[Delta]var", "MathTest_deltabar")

/* Convenience functions (declarations) */
BE_CONV_FUNCTION(run_Mathematica_Test, double, (const int&, const int&), "MathTest")

// Undefine macros toa void conflict with other backends
#include "gambit/Backends/backend_undefs.hpp"
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
