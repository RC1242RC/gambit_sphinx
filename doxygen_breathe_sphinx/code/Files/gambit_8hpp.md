---
title: 'file Core/gambit.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Detailed Description


**Author**: The GAMBIT Collaboration 

**Date**: 2012 Oct -->

Header for main GAMBIT executable.



------------------

Authors:



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef __gambit_main_hpp__
#define __gambit_main_hpp__

#include "gambit/Utils/signal_helpers.hpp"
#include "gambit/Utils/signal_handling.hpp"
#include "gambit/Utils/static_members.hpp"
#include "gambit/Utils/stream_overloads.hpp"
#include "gambit/Models/model_rollcall.hpp"
#include "gambit/Elements/equivalency_singleton.hpp"
#include "gambit/Backends/backend_rollcall.hpp"
#include "gambit/Core/depresolver.hpp"
#include "gambit/Core/yaml_parser.hpp"
#include "gambit/Core/likelihood_container.hpp"
#include "gambit/Core/module_rollcall.hpp"
#include "gambit/Core/core_singleton.hpp"
#include "gambit/Logs/logger.hpp"
#include "gambit/Printers/printermanager.hpp"
#include "gambit/ScannerBit/scannerbit.hpp"
#include "gambit/ScannerBit/priors_rollcall.hpp"

#endif //__gambit_main_hpp__
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
