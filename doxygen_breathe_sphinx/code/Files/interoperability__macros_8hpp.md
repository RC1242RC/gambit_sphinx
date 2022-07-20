---
title: 'file Backends/interoperability_macros.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[UNKNOWN](/documentation/code/files/interoperability__macros_8hpp/#define-unknown)** <br>If not defined already, define the backend languages.  |
|  | **[CC_LANG](/documentation/code/files/interoperability__macros_8hpp/#define-cc-lang)**  |
|  | **[CXX_LANG](/documentation/code/files/interoperability__macros_8hpp/#define-cxx-lang)**  |
|  | **[FORTRAN_LANG](/documentation/code/files/interoperability__macros_8hpp/#define-fortran-lang)**  |
|  | **[Fortran_LANG](/documentation/code/files/interoperability__macros_8hpp/#define-fortran-lang)**  |
|  | **[MATHEMATICA_LANG](/documentation/code/files/interoperability__macros_8hpp/#define-mathematica-lang)**  |
|  | **[Mathematica_LANG](/documentation/code/files/interoperability__macros_8hpp/#define-mathematica-lang)**  |
|  | **[PYTHON_LANG](/documentation/code/files/interoperability__macros_8hpp/#define-python-lang)**  |
|  | **[Python_LANG](/documentation/code/files/interoperability__macros_8hpp/#define-python-lang)**  |
|  | **[PYTHON2_LANG](/documentation/code/files/interoperability__macros_8hpp/#define-python2-lang)**  |
|  | **[Python2_LANG](/documentation/code/files/interoperability__macros_8hpp/#define-python2-lang)**  |
|  | **[PYTHON3_LANG](/documentation/code/files/interoperability__macros_8hpp/#define-python3-lang)**  |
|  | **[Python3_LANG](/documentation/code/files/interoperability__macros_8hpp/#define-python3-lang)**  |
|  | **[DATA_LANG](/documentation/code/files/interoperability__macros_8hpp/#define-data-lang)**  |
|  | **[Data_LANG](/documentation/code/files/interoperability__macros_8hpp/#define-data-lang)**  |
|  | **[DEFINED_BACKENDLANG](/documentation/code/files/interoperability__macros_8hpp/#define-defined-backendlang)** <br>Macro to help identifying the language of the backend.  |
|  | **[MATH_TYPE](/documentation/code/files/interoperability__macros_8hpp/#define-math-type)**(TYPE) <br>Macro to choose between mathematica types, python types and normal types.  |
|  | **[USING_CC](/documentation/code/files/interoperability__macros_8hpp/#define-using-cc)** <br>Macro that determines whether the language of the backend is C.  |
|  | **[USING_CXX](/documentation/code/files/interoperability__macros_8hpp/#define-using-cxx)** <br>Macro that determines whether the language of the backend is C++.  |
|  | **[USING_FORTRAN](/documentation/code/files/interoperability__macros_8hpp/#define-using-fortran)** <br>Macro that determines whether the language of the backend is Fortran.  |
|  | **[USING_MATHEMATICA](/documentation/code/files/interoperability__macros_8hpp/#define-using-mathematica)** <br>Macro that determines whether the language of the backend is Mathematica.  |
|  | **[USING_PYTHON](/documentation/code/files/interoperability__macros_8hpp/#define-using-python)** <br>Macro that determines whether the language of the backend is Python.  |
|  | **[DATA_ONLY](/documentation/code/files/interoperability__macros_8hpp/#define-data-only)** <br>Macro that determines whether the the backend is purely data.  |

## Detailed Description


**Author**: 

  * Pat Scott ([p.scott@imperial.ac.uk](mailto:p.scott@imperial.ac.uk)) 
  * Tomas Gonzalo ([t.e.gonzalo@fys.uio.no](mailto:t.e.gonzalo@fys.uio.no)) 


**Date**: 

  * 2017 Dec
  * 2016 Oct


Macros for interfacing with backends written in other languages.



------------------

Authors (add name and date if you modify):



------------------




## Macros Documentation

### define UNKNOWN

```
#define UNKNOWN 0
```

If not defined already, define the backend languages. 

### define CC_LANG

```
#define CC_LANG 1
```


### define CXX_LANG

```
#define CXX_LANG 2
```


### define FORTRAN_LANG

```
#define FORTRAN_LANG 3
```


### define Fortran_LANG

```
#define Fortran_LANG 3
```


### define MATHEMATICA_LANG

```
#define MATHEMATICA_LANG 4
```


### define Mathematica_LANG

```
#define Mathematica_LANG 4
```


### define PYTHON_LANG

```
#define PYTHON_LANG 5
```


### define Python_LANG

```
#define Python_LANG 5
```


### define PYTHON2_LANG

```
#define PYTHON2_LANG 5
```


### define Python2_LANG

```
#define Python2_LANG 5
```


### define PYTHON3_LANG

```
#define PYTHON3_LANG 5
```


### define Python3_LANG

```
#define Python3_LANG 5
```


### define DATA_LANG

```
#define DATA_LANG 6
```


### define Data_LANG

```
#define Data_LANG 6
```


### define DEFINED_BACKENDLANG

```
#define DEFINED_BACKENDLANG ()
```

Macro to help identifying the language of the backend. 

### define MATH_TYPE

```
#define MATH_TYPE(
    TYPE
)
        IF_ELSEIF(USING_MATHEMATICA, mathematica_variable<TYPE>,                                \
                  USING_PYTHON, python_variable<TYPE>,                                          \
                  /*USING NONE OF THE ABOVE*/ TYPE)
```

Macro to choose between mathematica types, python types and normal types. 

### define USING_CC

```
#define USING_CC         IF_ELSE_TOKEN_DEFINED(BACKENDLANG,                                             \
        BOOST_PP_EQUAL(CAT(BACKENDLANG,_LANG), CC_LANG), 0)
```

Macro that determines whether the language of the backend is C. 

### define USING_CXX

```
#define USING_CXX         IF_ELSE_TOKEN_DEFINED(BACKENDLANG,                                            \
        BOOST_PP_EQUAL(CAT(BACKENDLANG,_LANG), CXX_LANG), 0)
```

Macro that determines whether the language of the backend is C++. 

### define USING_FORTRAN

```
#define USING_FORTRAN         IF_ELSE_TOKEN_DEFINED(BACKENDLANG,                                        \
        BOOST_PP_EQUAL(CAT(BACKENDLANG,_LANG), FORTRAN_LANG), 0)
```

Macro that determines whether the language of the backend is Fortran. 

### define USING_MATHEMATICA

```
#define USING_MATHEMATICA         IF_ELSE_TOKEN_DEFINED(BACKENDLANG,                                    \
        BOOST_PP_EQUAL(CAT(BACKENDLANG,_LANG), MATHEMATICA_LANG), 0)
```

Macro that determines whether the language of the backend is Mathematica. 

### define USING_PYTHON

```
#define USING_PYTHON         IF_ELSE_TOKEN_DEFINED(BACKENDLANG,                                         \
        BOOST_PP_EQUAL(CAT(BACKENDLANG,_LANG), PYTHON_LANG), 0)
```

Macro that determines whether the language of the backend is Python. 

### define DATA_ONLY

```
#define DATA_ONLY         IF_ELSE_TOKEN_DEFINED(BACKENDLANG,                                            \
        BOOST_PP_EQUAL(CAT(BACKENDLANG,_LANG), DATA_LANG), 0)
```

Macro that determines whether the the backend is purely data. 

## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef __interoperability_macros_hpp__
#define __interoperability_macros_hpp__

#ifndef UNKNOWN
  #define UNKNOWN 0
#endif
#ifndef CC_LANG
  #define CC_LANG 1
#endif
#ifndef CXX_LANG
  #define CXX_LANG 2
#endif
#ifndef FORTRAN_LANG
  #define FORTRAN_LANG 3
#endif
#ifndef Fortran_LANG
  #define Fortran_LANG 3
#endif
#ifndef MATHEMATICA_LANG
  #define MATHEMATICA_LANG 4
#endif
#ifndef Mathematica_LANG
  #define Mathematica_LANG 4
#endif
#ifndef PYTHON_LANG
  #define PYTHON_LANG 5
#endif
#ifndef Python_LANG
  #define Python_LANG 5
#endif
#ifndef PYTHON2_LANG
  #define PYTHON2_LANG 5
#endif
#ifndef Python2_LANG
  #define Python2_LANG 5
#endif
#ifndef PYTHON3_LANG
  #define PYTHON3_LANG 5
#endif
#ifndef Python3_LANG
  #define Python3_LANG 5
#endif
#ifndef DATA_LANG
  #define DATA_LANG 6
#endif
#ifndef Data_LANG
  #define Data_LANG 6
#endif

#ifndef DEFINED_BACKENDLANG
#define DEFINED_BACKENDLANG ()
#endif

#define MATH_TYPE(TYPE)                                                                         \
        IF_ELSEIF(USING_MATHEMATICA, mathematica_variable<TYPE>,                                \
                  USING_PYTHON, python_variable<TYPE>,                                          \
                  /*USING NONE OF THE ABOVE*/ TYPE)

#define USING_CC IF_ELSE_TOKEN_DEFINED(BACKENDLANG,                                             \
        BOOST_PP_EQUAL(CAT(BACKENDLANG,_LANG), CC_LANG), 0)

#define USING_CXX IF_ELSE_TOKEN_DEFINED(BACKENDLANG,                                            \
        BOOST_PP_EQUAL(CAT(BACKENDLANG,_LANG), CXX_LANG), 0)

#define USING_FORTRAN IF_ELSE_TOKEN_DEFINED(BACKENDLANG,                                        \
        BOOST_PP_EQUAL(CAT(BACKENDLANG,_LANG), FORTRAN_LANG), 0)

#define USING_MATHEMATICA IF_ELSE_TOKEN_DEFINED(BACKENDLANG,                                    \
        BOOST_PP_EQUAL(CAT(BACKENDLANG,_LANG), MATHEMATICA_LANG), 0)

#define USING_PYTHON IF_ELSE_TOKEN_DEFINED(BACKENDLANG,                                         \
        BOOST_PP_EQUAL(CAT(BACKENDLANG,_LANG), PYTHON_LANG), 0)

#define DATA_ONLY IF_ELSE_TOKEN_DEFINED(BACKENDLANG,                                            \
        BOOST_PP_EQUAL(CAT(BACKENDLANG,_LANG), DATA_LANG), 0)

#endif // #defined __interoperability_macros_hpp__
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
