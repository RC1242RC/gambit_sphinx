---
title: 'file frontends/CaptnGeneral_2_1.cpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Functions

|                | Name           |
| -------------- | -------------- |
| | **[captn_init](/documentation/code/files/captngeneral__2__1_8cpp/#function-captn-init)**(solarmodel [0], rho0 , vsun , v0 , vesc ) |
| | **[captn_init_oper](/documentation/code/files/captngeneral__2__1_8cpp/#function-captn-init-oper)**() |
| | **[for](/documentation/code/files/captngeneral__2__1_8cpp/#function-for)**() |

## Attributes

|                | Name           |
| -------------- | -------------- |
| | **[BE_INI_FUNCTION](/documentation/code/files/captngeneral__2__1_8cpp/#variable-be-ini-function)**  |
| double | **[v0](/documentation/code/files/captngeneral__2__1_8cpp/#variable-v0)**  |
| double | **[vsun](/documentation/code/files/captngeneral__2__1_8cpp/#variable-vsun)**  |
| double | **[vesc](/documentation/code/files/captngeneral__2__1_8cpp/#variable-vesc)**  |
| const int | **[clen](/documentation/code/files/captngeneral__2__1_8cpp/#variable-clen)**  |
| char | **[solarmodel](/documentation/code/files/captngeneral__2__1_8cpp/#variable-solarmodel)**  |

## Detailed Description


Frontend for Capt'n General 1.0 backend



------------------

Authors (add name and date if you modify):

Aaron Vincent 25/09/2017 Neal Avis Kozar 13/03/2021



------------------


## Functions Documentation

### function captn_init

```
captn_init(
    solarmodel [0],
    rho0 ,
    vsun ,
    v0 ,
    vesc 
)
```


### function captn_init_oper

```
captn_init_oper()
```


### function for

```
for()
```



## Attributes Documentation

### variable BE_INI_FUNCTION

```
BE_INI_FUNCTION {
  double rho0  = *Param["rho0"]*(*Dep::RD_fraction);
```


### variable v0

```
double v0 = *Param["v0"];
```


### variable vsun

```
double vsun = *Param["vrot"];
```


### variable vesc

```
double vesc = *Param["vesc"];
```


### variable clen

```
const int clen = 300;
```


### variable solarmodel

```
char solarmodel;
```



## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#include "gambit/Backends/frontend_macros.hpp"
#include "gambit/Backends/frontends/CaptnGeneral_2_1.hpp"


// Capgen Initialisation function (definition)
BE_INI_FUNCTION
{
  double rho0  = *Param["rho0"]*(*Dep::RD_fraction);
  double v0    = *Param["v0"];
  double vsun  = *Param["vrot"];
  double vesc  = *Param["vesc"];

  const int clen = 300;
  char solarmodel[clen];
  Utils::strcpy2f(solarmodel, clen, runOptions->getValueOrDef<str>(backendDir +
    "/solarmodels/struct_b16_agss09_reduce10_nohead.dat", "solarmodel"));
  //Capgen checks whether the arrays are already allocated, so it's fine to do this at point-level
  captn_init(solarmodel[0],rho0,vsun,v0,vesc);
  captn_init_oper();

  for(int i=0; i<2; i++)
  {
    for(int j=1; j<16; j++)
    {
      if (j != 2) // 2 is not an allowed coupling constant
      {
        populate_array(0.0, j, i);
      }
    }
  }

}
END_BE_INI_FUNCTION
```


-------------------------------

Updated on 2022-07-20 at 17:18:48 +0000
