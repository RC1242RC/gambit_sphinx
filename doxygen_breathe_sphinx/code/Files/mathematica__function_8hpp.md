---
title: 'file Backends/mathematica_function.hpp'

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
| class | **[Gambit::Backends::mathematica_function](/documentation/code/classes/classgambit_1_1backends_1_1mathematica__function/)** <br>Holds the info about a Mathematica backend function, and defines conversion functions.  |

## Detailed Description


**Author**: 

  * Tomas Gonzalo ([t.e.gonzalo@fys.uio.no](mailto:t.e.gonzalo@fys.uio.no)) 
  * Pat Scott ([p.scott@imperial.ac.uk](mailto:p.scott@imperial.ac.uk)) 


**Date**: 

  * 2016 Sep
  * 2017 Dec


Templated class for holding and executing pointers to Mathematica backends.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef __mathematica_function_hpp__
#define __mathematica_function_hpp__

#include "gambit/Elements/ini_catch.hpp"
#include "gambit/Utils/util_functions.hpp"
#include "gambit/Backends/backend_singleton.hpp"
#include "gambit/cmake/cmake_variables.hpp"
#include <boost/algorithm/string/replace.hpp>

#ifdef HAVE_MATHEMATICA
  #include "gambit/Backends/mathematica_helpers.hpp"
  #include MATHEMATICA_WSTP_H
#endif

namespace Gambit
{

  namespace Backends
  {
    template <typename TYPE, typename... ARGS>
    class mathematica_function
    {

      private:

        #ifdef HAVE_MATHEMATICA
          WSLINK _WSlink;
        #endif
        str _symbol;

      public:

        mathematica_function(const str& be, const str& ver, const str& symbol) :  _symbol(symbol)
        {
          try
          {
            #ifdef HAVE_MATHEMATICA
              // Extract the backend WSLINK pointer from the backendInfo object
              if (backendInfo().works.at(be+ver))
              {
                _WSlink = backendInfo().loaded_mathematica_backends.at(be+ver);
              }
              else _WSlink = (WSLINK)0;

              // Modify the symbol to allow for non-ASCII characters
              boost::replace_all(_symbol, "\\[", "\\\\[");

            #else

              // Avoid compiler warnings
              (void)be;
              (void)ver;
            #endif
          }
          catch (std::exception& e) { ini_catch(e); }
        }


        TYPE operator()(ARGS&&... args)
        {
          #ifdef HAVE_MATHEMATICA
            // If TYPE is a numeric type, send N first
            if(is_numeric<TYPE>())
            { 
              if(!WSPutFunction(_WSlink, "N", 1))
              {
                math_error(_WSlink, LOCAL_INFO, "Error sending packet throught WSTP");
                return TYPE();
              }
            }

            // Send the symbol name now
            if(!WSPutFunction(_WSlink, "Apply", 2) or
               !WSPutFunction(_WSlink, "ToExpression",1) or
               !WSPutString(_WSlink, _symbol.c_str()) or
               !WSPutFunction(_WSlink, "List", sizeof...(args)))
            {
              math_error(_WSlink, LOCAL_INFO, "Error sending packet through WSTP");
              return TYPE();
            }

            // Now send all the arguments
            if (!WSPutVariables(_WSlink, args...))
            {
              math_error(_WSlink, LOCAL_INFO, "Error sending packet through WSTP");
              return TYPE();
            }

            // Last, mark the end of the message
            if(!WSEndPacket(_WSlink))
            {
              math_error(_WSlink, LOCAL_INFO, "Error sending packet through WSTP");
              return TYPE();
            }

            // Wait to receive a packet from the kernel
            int pkt;
            while( (pkt = WSNextPacket(_WSlink), pkt) && pkt != RETURNPKT)
            {
              WSNewPacket(_WSlink);
              if (WSError(_WSlink))
              {
                math_error(_WSlink, LOCAL_INFO, "Error reading packet from WSTP");
                return TYPE();
              }
            }

            // Read the received packet into the return value, unless it's void
            if (boost::is_same<TYPE, void>::value)
            {
              WSNewPacket(_WSlink);
            }
            else
            {
              decltype(instance_helper<TYPE>::member) val;
              if(!WSGetVariable(_WSlink, &val))
              {
                math_error(_WSlink, LOCAL_INFO, "Error reading packet from WSTP");
                return TYPE();
              }
              return static_cast<TYPE>(val);
            }

          #else

          // Avoid cimpiler warnings
          Utils::dummy_function<ARGS...>(args...);

          #endif

          return TYPE();

        }

     };

  }

}

#endif //defined __mathematica_function_hpp__
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
