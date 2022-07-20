---
title: 'file HepLike_1_2/wrapper_HL_Data_decl.h'

description: "[No description available]"

---






[No description available]

## Functions

|                | Name           |
| -------------- | -------------- |
| namespace | **[CAT_3](/documentation/code/files/wrapper__hl__data__decl_8h/#function-cat-3)**(BACKENDNAME , _ , SAFE_VERSION ) |


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
#ifndef __wrapper_HL_Data_decl_HepLike_1_2_h__
#define __wrapper_HL_Data_decl_HepLike_1_2_h__

#include <cstddef>
#include <string>
#include "forward_decls_wrapper_classes.h"
#include "gambit/Backends/wrapperbase.hpp"
#include "abstract_HL_Data.h"
#include "yaml-cpp/yaml.h"

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
   
   
   class HL_Data : public WrapperBase
   {
         // Member variables: 
      public:
         // -- Static factory pointers: 
         static Abstract_HL_Data* (*__factory0)();
         static Abstract_HL_Data* (*__factory1)(::std::basic_string<char>);
   
         // -- Other member variables: 
      public:
         std::basic_string<char>& HFile;
   
         // Member functions: 
      public:
         void Read();
   
         void set_debug_yaml(bool arg_1);
   
   
         // Wrappers for original constructors: 
      public:
         HL_Data();
         HL_Data(::std::basic_string<char> arg_1);
   
         // Special pointer-based constructor: 
         HL_Data(Abstract_HL_Data* in);
   
         // Copy constructor: 
         HL_Data(const HL_Data& in);
   
         // Assignment operator: 
         HL_Data& operator=(const HL_Data& in);
   
         // Destructor: 
         ~HL_Data();
   
         // Returns correctly casted pointer to Abstract class: 
         Abstract_HL_Data* get_BEptr() const;
   
   };
   
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_HL_Data_decl_HepLike_1_2_h__ */
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
