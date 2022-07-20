---
title: 'file gm2calc_1_2_0/gm2calc_1_2_0/forward_decls_abstract_classes.hpp'

description: "[No description available]"

---






[No description available]

## Functions

|                | Name           |
| -------------- | -------------- |
| namespace | **[CAT_3](/documentation/code/files/gm2calc__1__2__0_2forward__decls__abstract__classes_8hpp/#function-cat-3)**(BACKENDNAME , _ , SAFE_VERSION ) |


## Functions Documentation

### function CAT_3

```
namespace CAT_3(
    BACKENDNAME ,
    _ ,
    SAFE_VERSION 
)
```




## Source code

```
#ifndef __forward_decls_abstract_classes_gm2calc_1_2_0_hpp__
#define __forward_decls_abstract_classes_gm2calc_1_2_0_hpp__


#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
   
   
   namespace gm2calc
   {
      class Abstract_MSSMNoFV_onshell_susy_parameters;
      class Abstract_MSSMNoFV_onshell;
      class Abstract_MSSMNoFV_onshell_mass_eigenstates;
      class Abstract_MSSMNoFV_onshell_problems;
      class Abstract_MSSMNoFV_onshell_physical;
      class Abstract_MSSMNoFV_onshell_soft_parameters;
   }
   
   
   
   namespace gm2calc
   {
      class Abstract_Error;
      class Abstract_ESetupError;
      class Abstract_EInvalidInput;
      class Abstract_EPhysicalProblem;
      class Abstract_EReadError;
   }
   
   
   
   
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __forward_decls_abstract_classes_gm2calc_1_2_0_hpp__ */
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
