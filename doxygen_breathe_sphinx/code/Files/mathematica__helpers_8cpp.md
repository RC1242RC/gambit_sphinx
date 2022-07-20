---
title: 'file src/mathematica_helpers.cpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Detailed Description


**Author**: Pat Scott ([p.scott@imperial.ac.uk](mailto:p.scott@imperial.ac.uk)) 

**Date**: 2017 Dec

Implementations of helper functions for mathematica_function and mathematica_variable classes.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#include "gambit/cmake/cmake_variables.hpp"

#ifdef HAVE_MATHEMATICA

#include "gambit/Backends/mathematica_helpers.hpp"


namespace Gambit
{

  namespace Backends
  {

    void math_error(WSLINK _WSlink, const str& locality, const str& err)
    {
      backend_warning().raise(locality, err);
      if (WSError(_WSlink))
      {
        backend_warning().raise(locality, WSErrorMessage(_WSlink));
        WSClearError(_WSlink);
        WSNewPacket(_WSlink);
      }
      else backend_warning().raise(locality, "Type unknown or incompatible with WSTP");
    }

    int WSGetVariable(WSLINK WSlink, int* val) { return WSGetInteger(WSlink, val); }
    int WSGetVariable(WSLINK WSlink, float* val) { return WSGetReal32(WSlink, val); }
    int WSGetVariable(WSLINK WSlink, double* val) { return WSGetReal64(WSlink, val); }
    int WSGetVariable(WSLINK WSlink, bool* val)
    {
      const char *val2;
      int ret = WSGetString(WSlink, &val2);
      *val = (str(val2) == "True");
      return ret;
    }
    int WSGetVariable(WSLINK WSlink, char* val)
    {
      const char *val2;
      int ret = WSGetString(WSlink, &val2);
      *val = val2[0];
      return ret;
    }
    int WSGetVariable(WSLINK WSlink, str* val)
    {
      const char *val2;
      int ret = WSGetString(WSlink, &val2);
      *val = str(val2);
      return ret;
    }

    int WSPutVariable(WSLINK WSlink, int val) { return WSPutInteger32(WSlink, val); }
    int WSPutVariable(WSLINK WSlink, float val) { return WSPutReal32(WSlink, val); }
    int WSPutVariable(WSLINK WSlink, double val) { return WSPutReal64(WSlink, val); }
    int WSPutVariable(WSLINK WSlink, bool val)
    {
      if(val)
        return WSPutSymbol(WSlink, "True");
      else
        return WSPutSymbol(WSlink, "False");
    }
    int WSPutVariable(WSLINK WSlink, char val) { return WSPutString(WSlink, str(&val).c_str()); }
    int WSPutVariable(WSLINK WSlink, str val) { return WSPutString(WSlink, val.c_str()); }
    int WSPutVariables(WSLINK) { return 1; }

  }

}

#endif
```


-------------------------------

Updated on 2022-07-20 at 17:18:48 +0000
