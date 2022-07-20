---
title: 'file HepLike_1_2/HepLike_1_2/forward_decls_abstract_classes.h'

description: "[No description available]"

---






[No description available]

## Functions

|                | Name           |
| -------------- | -------------- |
| namespace | **[CAT_3](/documentation/code/files/heplike__1__2_2forward__decls__abstract__classes_8h/#function-cat-3)**(BACKENDNAME , _ , SAFE_VERSION ) |


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
#ifndef __forward_decls_abstract_classes_HepLike_1_2_h__
#define __forward_decls_abstract_classes_HepLike_1_2_h__


#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
   
   
   class Abstract_HL_Data;
   class Abstract_HL_Gaussian;
   class Abstract_HL_BifurGaussian;
   
   
   
   class Abstract_HL_ExpPoints;
   
   
   class Abstract_HL_Limit;
   
   class Abstract_HL_ProfLikelihood;
   
   
   class Abstract_HL_nDimBifurGaussian;
   
   class Abstract_HL_nDimGaussian;
   
   class Abstract_HL_nDimLikelihood;
   
   
   
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __forward_decls_abstract_classes_HepLike_1_2_h__ */
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
