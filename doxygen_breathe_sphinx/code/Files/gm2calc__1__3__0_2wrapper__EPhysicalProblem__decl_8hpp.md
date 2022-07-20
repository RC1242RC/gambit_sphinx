---
title: 'file gm2calc_1_3_0/gm2calc_1_3_0/wrapper_EPhysicalProblem_decl.hpp'

description: "[No description available]"

---






[No description available]

## Functions

|                | Name           |
| -------------- | -------------- |
| namespace | **[CAT_3](/documentation/code/files/gm2calc__1__3__0_2wrapper__ephysicalproblem__decl_8hpp/#function-cat-3)**(BACKENDNAME , _ , SAFE_VERSION ) |


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
#ifndef __wrapper_EPhysicalProblem_decl_gm2calc_1_3_0_hpp__
#define __wrapper_EPhysicalProblem_decl_gm2calc_1_3_0_hpp__

#include <cstddef>
#include <string>
#include "forward_decls_wrapper_classes.hpp"
#include "gambit/Backends/wrapperbase.hpp"
#include "abstract_EPhysicalProblem.hpp"
#include "wrapper_Error_decl.hpp"

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
   
   namespace gm2calc
   {
      
      class EPhysicalProblem : public Error
      {
            // Member variables: 
         public:
            // -- Static factory pointers: 
            static Abstract_EPhysicalProblem* (*__factory0)(const ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >&);
      
            // -- Other member variables: 
      
            // Member functions: 
         public:
            ::std::basic_string<char, std::char_traits<char>, std::allocator<char> > what() const;
      
      
            // Wrappers for original constructors: 
         public:
            EPhysicalProblem(const ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >& message_);
      
            // Special pointer-based constructor: 
            EPhysicalProblem(Abstract_EPhysicalProblem* in);
      
            // Copy constructor: 
            EPhysicalProblem(const EPhysicalProblem& in);
      
            // Assignment operator: 
            EPhysicalProblem& operator=(const EPhysicalProblem& in);
      
            // Destructor: 
            ~EPhysicalProblem();
      
            // Returns correctly casted pointer to Abstract class: 
            Abstract_EPhysicalProblem* get_BEptr() const;
      
      };
   }
   
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_EPhysicalProblem_decl_gm2calc_1_3_0_hpp__ */
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
