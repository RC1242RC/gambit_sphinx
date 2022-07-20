---
title: 'file src/python_helpers.cpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Detailed Description


**Author**: Pat Scott ([p.scott@imperial.ac.uk](mailto:p.scott@imperial.ac.uk)) 

**Date**: 2017 Dec

Implementations of helper functions for python_function and python_variable classes.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#include "gambit/cmake/cmake_variables.hpp"

#ifdef HAVE_PYBIND11

#include "gambit/Backends/python_helpers.hpp"
#include "gambit/Utils/util_functions.hpp"

namespace Gambit
{

  namespace Backends
  {

    template <>
    void return_cast<void>(pybind11::object o) { return static_cast<void>(o); }

    sspair split_qualified_python_name(str s, str m)
    {
      std::vector<str> split_s = Utils::delimiterSplit(s, ".");
      s = "";
      if (split_s.size() > 1)
      {
        s = m;
        for (auto it = split_s.begin(); it != split_s.end() - 1; ++it) s = s + "." + *it;
      }
      sspair test = sspair(s, *(split_s.end() - 1));
      return sspair(s, *(split_s.end() - 1));
    }

  }

}

#endif
```


-------------------------------

Updated on 2022-07-20 at 17:18:48 +0000
