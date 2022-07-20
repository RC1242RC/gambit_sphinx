---
title: 'file ScannerBit/printer_interface.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::Scanner](/documentation/code/namespaces/namespacegambit_1_1scanner/)**  |

## Detailed Description


declaration for scanner module



------------------

Authors (add name and date if you modify): 




## Source code

```
//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//

#include "gambit/Printers/baseprintermanager.hpp"
#include "gambit/Printers/basebaseprinter.hpp"

#ifndef PRINTER_INTERFACE_HPP
#define PRINTER_INTERFACE_HPP

#include <string>
#include <vector>

namespace Gambit
{
    namespace Scanner
    { 
        typedef Printers::BasePrinterManager printer_interface;
        
        typedef Printers::BaseBasePrinter printer;

        inline void assign_aux_numbers(){}
        
        template<typename... T>
        inline void assign_aux_numbers(const std::string &tag, const T&... params)
        {
            Gambit::Printers::get_aux_param_id(tag);
            assign_aux_numbers(params...);
        }
    }
}

#endif
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
