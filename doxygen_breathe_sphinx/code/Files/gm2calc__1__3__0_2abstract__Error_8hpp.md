---
title: 'file gm2calc_1_3_0/gm2calc_1_3_0/abstract_Error.hpp'

description: "[No description available]"

---






[No description available]

## Functions

|                | Name           |
| -------------- | -------------- |
| namespace | **[CAT_3](/documentation/code/files/gm2calc__1__3__0_2abstract__error_8hpp/#function-cat-3)**(BACKENDNAME , _ , SAFE_VERSION ) |


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
#ifndef __abstract_Error_gm2calc_1_3_0_hpp__
#define __abstract_Error_gm2calc_1_3_0_hpp__

#include <cstddef>
#include <iostream>
#include <string>
#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.hpp"
#include "forward_decls_wrapper_classes.hpp"

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
   
   
   namespace gm2calc
   {
      class Abstract_Error : public virtual AbstractBase
      {
         public:
   
            virtual ::std::basic_string<char, std::char_traits<char>, std::allocator<char> > what() const =0;
   
         public:
            virtual void pointer_assign__BOSS(Abstract_Error*) =0;
            virtual Abstract_Error* pointer_copy__BOSS() =0;
   
         private:
            Error* wptr;
            bool delete_wrapper;
         public:
            Error* get_wptr() { return wptr; }
            void set_wptr(Error* wptr_in) { wptr = wptr_in; }
            bool get_delete_wrapper() { return delete_wrapper; }
            void set_delete_wrapper(bool del_wrp_in) { delete_wrapper = del_wrp_in; }
   
         public:
            Abstract_Error()
            {
               wptr = 0;
               delete_wrapper = false;
            }
   
            Abstract_Error(const Abstract_Error&)
            {
               wptr = 0;
               delete_wrapper = false;
            }
   
            Abstract_Error& operator=(const Abstract_Error&) { return *this; }
   
            virtual void init_wrapper() =0;
   
            Error* get_init_wptr()
            {
               init_wrapper();
               return wptr;
            }
   
            Error& get_init_wref()
            {
               init_wrapper();
               return *wptr;
            }
   
            virtual ~Abstract_Error() =0;
      };
   }
   
}


#include "gambit/Backends/backend_undefs.hpp"


#endif /* __abstract_Error_gm2calc_1_3_0_hpp__ */
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
