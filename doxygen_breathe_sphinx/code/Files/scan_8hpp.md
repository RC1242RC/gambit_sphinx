---
title: 'file ScannerBit/scan.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::Scanner](/documentation/code/namespaces/namespacegambit_1_1scanner/)**  |

## Classes

|                | Name           |
| -------------- | -------------- |
| class | **[Gambit::Scanner::Scan_Manager](/documentation/code/classes/classgambit_1_1scanner_1_1scan__manager/)**  |

## Detailed Description


**Author**: Christoph Weniger ([c.weniger@uva.nl](mailto:c.weniger@uva.nl)) 

**Date**: 2013 May, June, July 

Scanner method implementations.



------------------

Authors (add name and date if you modify):




## Source code

```
//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//

#ifndef __scan_hpp__
#define __scan_hpp__

#include "gambit/ScannerBit/printer_interface.hpp"
#include "gambit/ScannerBit/factory_defs.hpp"
#include "gambit/ScannerBit/priors/composite.hpp"
#include "gambit/Utils/yaml_options.hpp"
#include "gambit/Utils/yaml_parser_base.hpp"

namespace Gambit
{
    namespace Scanner
    {       
        // Scan manager class that manages everything that is ScannerBit.
        class Scan_Manager
        {
        private:
            const Factory_Base *factory;
            Options options;
            Priors::CompositePrior *prior;
            printer_interface *printerInterface;
            // Flag to indicate whether or not the factory needs deleting in the destructor.  Do not reset!
            bool has_local_factory;

        public:
            Scan_Manager (const YAML::Node &node, printer_interface*, const Factory_Base* factory = 0);
            ~Scan_Manager();
            int Run();                       
        };             
    }
}

#endif
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
