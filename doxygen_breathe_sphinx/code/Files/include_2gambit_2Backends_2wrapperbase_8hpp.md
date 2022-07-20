---
title: 'file Backends/include/gambit/Backends/wrapperbase.hpp'

description: "[No description available]"

---






[No description available]

## Classes

|                | Name           |
| -------------- | -------------- |
| class | **[WrapperBase](/documentation/code/classes/classwrapperbase/)**  |




## Source code

```
#ifndef __WRAPPERBASE__
#define __WRAPPERBASE__



class AbstractBase;

class WrapperBase
{
    protected:
        AbstractBase* BEptr;
        bool delete_BEptr;
    public:
        bool can_delete_BEptr() { return delete_BEptr; }
        void set_delete_BEptr(bool del_wrp_in) { delete_BEptr = del_wrp_in; }

    public:
        WrapperBase(AbstractBase* BEptr_in) : BEptr(BEptr_in), delete_BEptr(true) {}

        virtual ~WrapperBase() {}
};



#endif /* __WRAPPERBASE__ */
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
