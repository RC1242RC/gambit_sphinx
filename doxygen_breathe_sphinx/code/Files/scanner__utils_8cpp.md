---
title: 'file src/scanner_utils.cpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::Scanner](/documentation/code/namespaces/namespacegambit_1_1scanner/)**  |

## Detailed Description


Utility functions definitions for ScannerBit



------------------


# Authors

(add name and date if you modify)

Pat Scott ([patscott@physics.mcgill.ca](mailto:patscott@physics.mcgill.ca)) 

2014 Mar



------------------




## Source code

```
//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************

#include "gambit/ScannerBit/scanner_utils.hpp"

namespace Gambit
{

        namespace Scanner
        { 

                error& scan_error()
                {
                        static error local("A problem has been raised by ScannerBit.","scan_error", LogTags::scanner);
                        return local;
                }

                warning& scan_warning()
                {
                        static warning local("A problem has been raised by ScannerBit.","scan_warning", LogTags::scanner);
                        return local;
                }

        }

}
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
