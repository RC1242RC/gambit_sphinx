---
title: 'file backend_types/CalcHEP.hpp'

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
| struct | **[Gambit::colorBasis](/documentation/code/classes/structgambit_1_1colorbasis/)**  |
| struct | **[Gambit::CalcHEP_interface](/documentation/code/classes/structgambit_1_1calchep__interface/)**  |
| struct | **[Gambit::numout](/documentation/code/classes/structgambit_1_1numout/)**  |

## Detailed Description


**Author**: Sanjay Bloor [sanjay.bloor12@imperial.ac.uk](mailto:sanjay.bloor12@imperial.ac.uk)

**Date**: 2017 May

Helper types for CalcHEP backend.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef __CalcHEP_types_hpp__
#define __CalcHEP_types_hpp__

namespace Gambit
{

  typedef double REAL; 
  
  struct colorBasis
  { 
    int pow; 
    int nC; 
    int * chains;
  };
  
  struct CalcHEP_interface
  {
    int forceUG;
    char * CALCHEP;
    int nvar;
    int nfunc;
    char ** varName;
    REAL * va;
    int nin;
    int nout;
    int nprc;
    char* (*pinf)(int, int , REAL*,int *);
    int  (*pinfAux)(int, int,int *,int*,int*);
    char** polarized;
    int (*calcFunc)(void);
    double * BWrange;
    int    * twidth;    
    int *   gtwidth;
    int *   gswidth;
    double (**aWidth)(char *);
    double (*sqme)(int,double,REAL*,REAL*,int*);
    char * (*den_info)(int, int, int *, int*);
    colorBasis *cb;  
  };

  struct numout
  {
    void * handle;
    REAL ** link;
    REAL *Q,*SC;
    int init;
    CalcHEP_interface * interface; 
  };
}

#endif /* defined __CalcHEP_types_hpp__ */
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
