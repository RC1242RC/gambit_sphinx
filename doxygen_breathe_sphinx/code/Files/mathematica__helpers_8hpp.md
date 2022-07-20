---
title: 'file Backends/mathematica_helpers.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::Backends](/documentation/code/namespaces/namespacegambit_1_1backends/)**  |

## Classes

|                | Name           |
| -------------- | -------------- |
| class | **[Gambit::Backends::instance_helper](/documentation/code/classes/classgambit_1_1backends_1_1instance__helper/)**  |
| class | **[Gambit::Backends::instance_helper< void >](/documentation/code/classes/classgambit_1_1backends_1_1instance__helper_3_01void_01_4/)**  |

## Detailed Description


**Author**: Pat Scott ([p.scott@imperial.ac.uk](mailto:p.scott@imperial.ac.uk)) 

**Date**: 2017 Dec

Declarations of helper functions for mathematica_function and mathematica_variable classes.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef __mathematica_helpers_hpp__
#define __mathematica_helpers_hpp__

#include "gambit/cmake/cmake_variables.hpp"
#include "gambit/Backends/backend_singleton.hpp"

#include MATHEMATICA_WSTP_H


namespace Gambit
{

  namespace Backends
  {

    void math_error(WSLINK, const str&, const str&);

    template <typename T>
    bool is_numeric()
    {
      return (std::is_same<T, int>::value or
              std::is_same<T, const int>::value or
              std::is_same<T, float>::value or
              std::is_same<T, const float>::value or
              std::is_same<T, double>::value or
              std::is_same<T, const double>::value);
    }

    template <typename T>
    class instance_helper { public: T member; };
    template <>
    class instance_helper<void> { public: int member; };

    int WSGetVariable(WSLINK WSlink, int* val);
    int WSGetVariable(WSLINK WSlink, float* val);
    int WSGetVariable(WSLINK WSlink, double* val);
    int WSGetVariable(WSLINK WSlink, bool* val);
    int WSGetVariable(WSLINK WSlink, char* val);
    int WSGetVariable(WSLINK WSlink, str* val);
    template <typename T> int WSGetVariable(WSLINK WSlink, std::vector<T>* val)
    {
      long int dim;
      if(!WSCheckFunction(WSlink, "List", &dim))
        return 0;
      for(int i=0; i<dim; i++)
      {
        T value;
        if(!WSGetVariable(WSlink, &value))
          return 0;
        val->push_back(value);
      }
      return 1;
    }

    int WSPutVariable(WSLINK WSlink, int val);
    int WSPutVariable(WSLINK WSlink, float val);
    int WSPutVariable(WSLINK WSlink, double val);
    int WSPutVariable(WSLINK WSlink, bool val);
    int WSPutVariable(WSLINK WSlink, char val);
    int WSPutVariable(WSLINK WSlink, str val);
    template <typename T> int WSPutVariable(WSLINK WSlink, std::vector<T> val)
    {
      if(!WSPutFunction(WSlink, "List", val.size()))
        return 0;
      for(auto it = val.begin(); it != val.end(); it++)
        if(!WSPutVariable(WSlink, *it))
          return 0;
      return 1;
    }
    int WSPutVariables(WSLINK);
    template <typename T>
    int WSPutVariables(WSLINK WSlink, T last)
    {
      return WSPutVariable(WSlink, last);
    }
    template <typename T1, typename T2, typename... Others>
    int WSPutVariables(WSLINK WSlink, T1 first, T2 second, Others... args)
    {
      int i = WSPutVariable(WSlink, first);
      if (i == 0) return i;
      else return i * WSPutVariables(WSlink, second, args...);
    }



  }

}

#endif // defined __mathematica_helpers_hpp__
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
