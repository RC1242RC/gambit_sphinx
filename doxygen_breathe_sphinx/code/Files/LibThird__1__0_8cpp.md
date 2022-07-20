---
title: 'file frontends/LibThird_1_0.cpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Detailed Description


**Author**: Pat Scott ([p.scott@imperial.ac.uk](mailto:p.scott@imperial.ac.uk)) 

**Date**: 2018 Sep

Frontend source for the LibThird 1.0 backend.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#include "gambit/Backends/frontend_macros.hpp"
#include "gambit/Backends/frontends/LibThird_1_0.hpp"

BE_INI_FUNCTION {}
END_BE_INI_FUNCTION

BE_NAMESPACE
{
  /* Convenience function implementation */
  double awesomenessNotByAnders(int a)
  {
    logger().send("Message from 'awesomenessNotByAnders' backend convenience function in LibThird v1.0 wrapper",LogTags::info);
    initialize(a);
    someFunction();
    // An example of how to use sub-module variables and functions when they have been declared in
    // advance to GAMBIT (i.e. in a frontend header).
    *SomeOtherInt = a;
    cout << "someOtherInt in LibThird 1.0: " << *SomeOtherInt << endl;
    double result = someOtherFunction(*SomeOtherInt);
    cout << "someOtherFunction(someOtherInt) in LibThird 1.0: " << result << endl;
    return result;
  }
}
END_BE_NAMESPACE
```


-------------------------------

Updated on 2022-07-20 at 17:18:48 +0000
