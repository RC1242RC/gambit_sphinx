---
title: 'file backend_types/MontePythonLike.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Detailed Description


**Author**: 

  * Janina Renk ([janina.renk@fysik.su.se](mailto:janina.renk@fysik.su.se)) 
  * Pat Scott ([pat.scott@uq.edu.au](mailto:pat.scott@uq.edu.au)) 


**Date**: 

  * 2019 Jun
  * 2020 Apr


Declarations of container classes for the [MontePythonLike](/documentation/code/namespaces/namespacemontepythonlike/) backend.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef __MontePythonLike_types_hpp__
#define __MontePythonLike_types_hpp__

#include "gambit/cmake/cmake_variables.hpp"
#include "gambit/Backends/python_helpers.hpp"

#ifdef HAVE_PYBIND11

  #include "gambit/Utils/begin_ignore_warnings_pybind11.hpp"
  #include <pybind11/pybind11.h>
  #include <pybind11/stl_bind.h>
  #include "gambit/Utils/end_ignore_warnings.hpp"

  namespace Gambit
  {

    class MPLike_data_container
    {
      public:

        MPLike_data_container() {}
        MPLike_data_container(pybind11::object &data_in, map_str_pyobj likelihoods_in): data(data_in), likelihoods(likelihoods_in){}

        pybind11::object data;

        map_str_pyobj likelihoods;
    };

  }

#endif // end of HAVE_PYBIND11 bracket

#endif // defined __MontePythonLike_types_hpp__
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
