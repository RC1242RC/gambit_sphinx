---
title: 'file common_headers/cats.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[CAT](/documentation/code/files/cats_8hpp/#define-cat)**(X, Y)  |
|  | **[CAT2](/documentation/code/files/cats_8hpp/#define-cat2)**(X, Y)  |
|  | **[CAT_2](/documentation/code/files/cats_8hpp/#define-cat-2)**  |
|  | **[CAT_3](/documentation/code/files/cats_8hpp/#define-cat-3)**(X, Y, Z)  |
|  | **[CAT_4](/documentation/code/files/cats_8hpp/#define-cat-4)**(A, X, Y, Z)  |
|  | **[CAT_5](/documentation/code/files/cats_8hpp/#define-cat-5)**(A, B, X, Y, Z)  |
|  | **[CAT_6](/documentation/code/files/cats_8hpp/#define-cat-6)**(A, B, C, X, Y, Z)  |
|  | **[CAT_7](/documentation/code/files/cats_8hpp/#define-cat-7)**(A, B, C, D, X, Y, Z)  |

## Detailed Description


**Author**: Pat Scott 

 ([patscott@physics.mcgill.ca](mailto:patscott@physics.mcgill.ca)) 

**Date**: 2014 Oct

Concatenation macros



------------------

Authors:



------------------




## Macros Documentation

### define CAT

```
#define CAT(
    X,
    Y
)
CAT2(X,Y)
```


Concatenate macro arguments for 2-7 arguments. 


### define CAT2

```
#define CAT2(
    X,
    Y
)
X##Y
```


### define CAT_2

```
#define CAT_2 CAT
```


### define CAT_3

```
#define CAT_3(
    X,
    Y,
    Z
)
CAT(X,CAT(Y,Z))
```


### define CAT_4

```
#define CAT_4(
    A,
    X,
    Y,
    Z
)
CAT(A,CAT_3(X,Y,Z))
```


### define CAT_5

```
#define CAT_5(
    A,
    B,
    X,
    Y,
    Z
)
CAT(A,CAT_4(B,X,Y,Z))
```


### define CAT_6

```
#define CAT_6(
    A,
    B,
    C,
    X,
    Y,
    Z
)
CAT(A,CAT_5(B,C,X,Y,Z))
```


### define CAT_7

```
#define CAT_7(
    A,
    B,
    C,
    D,
    X,
    Y,
    Z
)
CAT(A,CAT_6(B,C,D,X,Y,Z))
```


## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef __cats_hpp__
#define __cats_hpp__

#define CAT(X,Y) CAT2(X,Y)
#define CAT2(X,Y) X##Y
#define CAT_2 CAT
#define CAT_3(X,Y,Z) CAT(X,CAT(Y,Z))
#define CAT_4(A,X,Y,Z) CAT(A,CAT_3(X,Y,Z))
#define CAT_5(A,B,X,Y,Z) CAT(A,CAT_4(B,X,Y,Z))
#define CAT_6(A,B,C,X,Y,Z) CAT(A,CAT_5(B,C,X,Y,Z))
#define CAT_7(A,B,C,D,X,Y,Z) CAT(A,CAT_6(B,C,D,X,Y,Z))

#endif // __cats_hpp__
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
