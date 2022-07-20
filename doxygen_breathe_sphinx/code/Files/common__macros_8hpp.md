---
title: 'file Backends/common_macros.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[BE_VARIABLE_6](/documentation/code/files/common__macros_8hpp/#define-be-variable-6)**(_1, _2, _3, _4, _5, _6)  |
|  | **[BE_VARIABLE_5](/documentation/code/files/common__macros_8hpp/#define-be-variable-5)**(_1, _2, _3, _4, _5)  |
|  | **[BE_VARIABLE_4](/documentation/code/files/common__macros_8hpp/#define-be-variable-4)**(_1, _2, _3, _4)  |
|  | **[BE_VARIABLE](/documentation/code/files/common__macros_8hpp/#define-be-variable)**(...)  |
|  | **[BE_CONV_FUNCTION_6](/documentation/code/files/common__macros_8hpp/#define-be-conv-function-6)**(_1, _2, _3, _4, _5, _6)  |
|  | **[BE_CONV_FUNCTION_5](/documentation/code/files/common__macros_8hpp/#define-be-conv-function-5)**(_1, _2, _3, _4, _5)  |
|  | **[BE_CONV_FUNCTION_4](/documentation/code/files/common__macros_8hpp/#define-be-conv-function-4)**(_1, _2, _3, _4)  |
|  | **[BE_CONV_FUNCTION](/documentation/code/files/common__macros_8hpp/#define-be-conv-function)**(...)  |
|  | **[IF_USING_PYBIND11](/documentation/code/files/common__macros_8hpp/#define-if-using-pybind11)**(ARG) <br>Evaluates to ARG if and only if we have pybind11 and USING_PYTHON is true.  |
|  | **[DO_CLASSLOADING](/documentation/code/files/common__macros_8hpp/#define-do-classloading)** <br>Turn classloading off by default (this is redefined by BOSSed backends).  |
|  | **[BE_ALLOW_MODELS](/documentation/code/files/common__macros_8hpp/#define-be-allow-models)**(...) <br>Macro for assigning allowed models to an entire backend.  |
|  | **[BE_ALLOW_MODEL_INTERMEDIATE](/documentation/code/files/common__macros_8hpp/#define-be-allow-model-intermediate)**(r, data, MODEL) <br>Intermediate macro for expanding BE_ALLOW_MODELS.  |
|  | **[BE_INI_FUNCTION](/documentation/code/files/common__macros_8hpp/#define-be-ini-function)** <br>Boilerplate code for point-level backend initialisation function definitions.  |
|  | **[BE_NAMESPACE](/documentation/code/files/common__macros_8hpp/#define-be-namespace)** <br>Boilerplate code for convenience function definitions.  |
|  | **[END_BE_INI_FUNCTION](/documentation/code/files/common__macros_8hpp/#define-end-be-ini-function)** <br>Closer for initialisation function definitional boilerplate.  |
|  | **[END_BE_NAMESPACE](/documentation/code/files/common__macros_8hpp/#define-end-be-namespace)** <br>Closer for convenience function definitional boilerplate.  |

## Detailed Description


**Author**: 

  * Pat Scott ([patscott@physics.mcgill.ca](mailto:patscott@physics.mcgill.ca)) 
  * Tomas Gonzalo ([gonzalo@physik.rwth-aachen.de](mailto:gonzalo@physik.rwth-aachen.de)) 


**Date**: 

  * 2015 May
  * 2021 Sep


Macros for backend registration that are used from both frontend headers and source files.



------------------

Authors (add name and date if you modify):



------------------




## Macros Documentation

### define BE_VARIABLE_6

```
#define BE_VARIABLE_6(
    _1,
    _2,
    _3,
    _4,
    _5,
    _6
)
BE_VARIABLE_I(_1, _2, _3, _4, _5, _6)
```


### define BE_VARIABLE_5

```
#define BE_VARIABLE_5(
    _1,
    _2,
    _3,
    _4,
    _5
)
BE_VARIABLE_I(_1, _2, _3, _4, _5, "")
```


### define BE_VARIABLE_4

```
#define BE_VARIABLE_4(
    _1,
    _2,
    _3,
    _4
)
BE_VARIABLE_I(_1, _2, _3, _4, (), "")
```


### define BE_VARIABLE

```
#define BE_VARIABLE(
    ...
)
VARARG(BE_VARIABLE, __VA_ARGS__)
```


### define BE_CONV_FUNCTION_6

```
#define BE_CONV_FUNCTION_6(
    _1,
    _2,
    _3,
    _4,
    _5,
    _6
)
BE_CONV_FUNCTION_FULL(_1, _2, _3, _4, _5, _6)
```


### define BE_CONV_FUNCTION_5

```
#define BE_CONV_FUNCTION_5(
    _1,
    _2,
    _3,
    _4,
    _5
)
BE_CONV_FUNCTION_FULL(_1, _2, _3, _4, _5, "")
```


### define BE_CONV_FUNCTION_4

```
#define BE_CONV_FUNCTION_4(
    _1,
    _2,
    _3,
    _4
)
BE_CONV_FUNCTION_FULL(_1, _2, _3, _4, (), "")
```


### define BE_CONV_FUNCTION

```
#define BE_CONV_FUNCTION(
    ...
)
VARARG(BE_CONV_FUNCTION, __VA_ARGS__)
```


### define IF_USING_PYBIND11

```
#define IF_USING_PYBIND11(
    ARG
)

```

Evaluates to ARG if and only if we have pybind11 and USING_PYTHON is true. 

### define DO_CLASSLOADING

```
#define DO_CLASSLOADING 0
```

Turn classloading off by default (this is redefined by BOSSed backends). 

### define BE_ALLOW_MODELS

```
#define BE_ALLOW_MODELS(
    ...
)
BOOST_PP_SEQ_FOR_EACH(BE_ALLOW_MODEL_INTERMEDIATE, , BOOST_PP_TUPLE_TO_SEQ((__VA_ARGS__)))
```

Macro for assigning allowed models to an entire backend. 

### define BE_ALLOW_MODEL_INTERMEDIATE

```
#define BE_ALLOW_MODEL_INTERMEDIATE(
    r,
    data,
    MODEL
)
BE_ALLOW_MODEL(MODEL)
```

Intermediate macro for expanding BE_ALLOW_MODELS. 

### define BE_INI_FUNCTION

```
#define BE_INI_FUNCTION namespace Gambit                                                            \
{                                                                           \
  namespace BackendIniBit                                                   \
  {                                                                         \
    namespace Pipes                                                         \
    {                                                                       \
      namespace CAT_4(BACKENDNAME,_,SAFE_VERSION,_init)                     \
      {                                                                     \
        const str backendDir = Backends::backendInfo().                     \
         path_dir(STRINGIFY(BACKENDNAME), STRINGIFY(VERSION));              \
      }                                                                     \
    }                                                                       \
    void CAT_4(BACKENDNAME,_,SAFE_VERSION,_init)()                          \
    {                                                                       \
      using namespace Pipes :: CAT_4(BACKENDNAME,_,SAFE_VERSION,_init) ;    \
      using namespace Backends :: CAT_3(BACKENDNAME,_,SAFE_VERSION) ;       \
```

Boilerplate code for point-level backend initialisation function definitions. 

### define BE_NAMESPACE

```
#define BE_NAMESPACE namespace Gambit                                                            \
{                                                                           \
  namespace Backends                                                        \
  {                                                                         \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                             \
```

Boilerplate code for convenience function definitions. 

### define END_BE_INI_FUNCTION

```
#define END_BE_INI_FUNCTION }}}
```

Closer for initialisation function definitional boilerplate. 

### define END_BE_NAMESPACE

```
#define END_BE_NAMESPACE }}
```

Closer for convenience function definitional boilerplate. 

## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef __COMMON_MACROS_HPP__
#define __COMMON_MACROS_HPP__

#include "gambit/Utils/standalone_error_handlers.hpp"
#include "gambit/Elements/types_rollcall.hpp"

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/seq/transform.hpp>
#include <boost/preprocessor/seq/for_each.hpp>
#include <boost/preprocessor/seq/for_each_i.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/tuple/to_seq.hpp>

#define DO_CLASSLOADING 0

#define BE_ALLOW_MODELS(...) BOOST_PP_SEQ_FOR_EACH(BE_ALLOW_MODEL_INTERMEDIATE, , BOOST_PP_TUPLE_TO_SEQ((__VA_ARGS__)))

#define BE_ALLOW_MODEL_INTERMEDIATE(r,data,MODEL) BE_ALLOW_MODEL(MODEL)

#define BE_INI_FUNCTION                                                     \
namespace Gambit                                                            \
{                                                                           \
  namespace BackendIniBit                                                   \
  {                                                                         \
    namespace Pipes                                                         \
    {                                                                       \
      namespace CAT_4(BACKENDNAME,_,SAFE_VERSION,_init)                     \
      {                                                                     \
        const str backendDir = Backends::backendInfo().                     \
         path_dir(STRINGIFY(BACKENDNAME), STRINGIFY(VERSION));              \
      }                                                                     \
    }                                                                       \
    void CAT_4(BACKENDNAME,_,SAFE_VERSION,_init)()                          \
    {                                                                       \
      using namespace Pipes :: CAT_4(BACKENDNAME,_,SAFE_VERSION,_init) ;    \
      using namespace Backends :: CAT_3(BACKENDNAME,_,SAFE_VERSION) ;       \

#define BE_NAMESPACE                                                        \
namespace Gambit                                                            \
{                                                                           \
  namespace Backends                                                        \
  {                                                                         \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                             \

#define END_BE_INI_FUNCTION }}}

#define END_BE_NAMESPACE }}

#define BE_VARIABLE_6(_1, _2, _3, _4, _5, _6)      BE_VARIABLE_I(_1, _2, _3, _4, _5, _6)
#define BE_VARIABLE_5(_1, _2, _3, _4, _5)          BE_VARIABLE_I(_1, _2, _3, _4, _5, "")
#define BE_VARIABLE_4(_1, _2, _3, _4)              BE_VARIABLE_I(_1, _2, _3, _4, (), "")
#define BE_VARIABLE(...)                           VARARG(BE_VARIABLE, __VA_ARGS__)

#define BE_CONV_FUNCTION_6(_1, _2, _3, _4, _5,_6) BE_CONV_FUNCTION_FULL(_1, _2, _3, _4, _5, _6)
#define BE_CONV_FUNCTION_5(_1, _2, _3, _4, _5)    BE_CONV_FUNCTION_FULL(_1, _2, _3, _4, _5, "")
#define BE_CONV_FUNCTION_4(_1, _2, _3, _4)        BE_CONV_FUNCTION_FULL(_1, _2, _3, _4, (), "")
#define BE_CONV_FUNCTION(...)                     VARARG(BE_CONV_FUNCTION, __VA_ARGS__)

#ifdef HAVE_PYBIND11
  #define IF_USING_PYBIND11(ARG) BOOST_PP_IF(USING_PYTHON, ARG, )
#else
  #define IF_USING_PYBIND11(ARG)
#endif

#endif // __COMMON_MACROS_HPP__
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
