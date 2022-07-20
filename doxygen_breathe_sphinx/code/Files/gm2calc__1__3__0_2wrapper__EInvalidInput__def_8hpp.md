---
title: 'file gm2calc_1_3_0/gm2calc_1_3_0/wrapper_EInvalidInput_def.hpp'

description: "[No description available]"

---






[No description available]

## Functions

|                | Name           |
| -------------- | -------------- |
| namespace | **[CAT_3](/documentation/code/files/gm2calc__1__3__0_2wrapper__einvalidinput__def_8hpp/#function-cat-3)**(BACKENDNAME , _ , SAFE_VERSION ) |


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
#ifndef __wrapper_EInvalidInput_def_gm2calc_1_3_0_hpp__
#define __wrapper_EInvalidInput_def_gm2calc_1_3_0_hpp__

#include <string>

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
   
   namespace gm2calc
   {
      
      // Member functions: 
      inline ::std::basic_string<char, std::char_traits<char>, std::allocator<char> > EInvalidInput::what() const
      {
         return get_BEptr()->what();
      }
      
      
      // Wrappers for original constructors: 
      inline EInvalidInput::EInvalidInput(const ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >& message_) :
         Error(__factory0(message_))
      {
         get_BEptr()->set_wptr(this);
         get_BEptr()->set_delete_wrapper(false);
      }
      
      // Special pointer-based constructor: 
      inline EInvalidInput::EInvalidInput(Abstract_EInvalidInput* in) :
         Error(in)
      {
         get_BEptr()->set_wptr(this);
         get_BEptr()->set_delete_wrapper(false);
      }
      
      // Copy constructor: 
      inline EInvalidInput::EInvalidInput(const EInvalidInput& in) :
         Error(in.get_BEptr()->pointer_copy__BOSS())
      {
         get_BEptr()->set_wptr(this);
         get_BEptr()->set_delete_wrapper(false);
      }
      
      // Assignment operator: 
      inline EInvalidInput& EInvalidInput::operator=(const EInvalidInput& in)
      {
         if (this != &in)
         {
            get_BEptr()->pointer_assign__BOSS(in.get_BEptr());
         }
         return *this;
      }
      
      
      // Destructor: 
      inline EInvalidInput::~EInvalidInput()
      {
         if (get_BEptr() != 0)
         {
            get_BEptr()->set_delete_wrapper(false);
            if (can_delete_BEptr())
            {
               delete BEptr;
               BEptr = 0;
            }
         }
         set_delete_BEptr(false);
      }
      
      // Returns correctly casted pointer to Abstract class: 
      inline Abstract_EInvalidInput* gm2calc::EInvalidInput::get_BEptr() const
      {
         return dynamic_cast<Abstract_EInvalidInput*>(BEptr);
      }
   }
   
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_EInvalidInput_def_gm2calc_1_3_0_hpp__ */
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
