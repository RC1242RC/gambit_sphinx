---
title: 'file Backends/python_helpers.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Types

|                | Name           |
| -------------- | -------------- |
| typedef char | **[PyDict](/documentation/code/files/python__helpers_8hpp/#typedef-pydict)** <br>Types used for Python backends.  |

## Detailed Description


**Author**: 

  * Pat Scott ([p.scott@imperial.ac.uk](mailto:p.scott@imperial.ac.uk)) 
  * Tomas Gonzalo ([tomas.gonzalo@monash.edu](mailto:tomas.gonzalo@monash.edu)) 


**Date**: 

  * 2017 Dec 
  * 2020 Dec
  * 2020 June


Declarations of helper functions for python_function and python_variable classes.



------------------

Authors (add name and date if you modify):



------------------

## Types Documentation

### typedef PyDict

```
typedef char PyDict;
```

Types used for Python backends. 




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef __python_helpers_hpp__
#define __python_helpers_hpp__


#ifndef HAVE_PYBIND11

  typedef char PyDict;

#else

  #include "gambit/Utils/begin_ignore_warnings_pybind11.hpp"
  #include <pybind11/pybind11.h>
  #include <pybind11/numpy.h>
  #include "gambit/Utils/end_ignore_warnings.hpp"

  #include "gambit/Utils/util_types.hpp"


  namespace Gambit
  {

    typedef pybind11::dict PyDict;

    typedef std::map<std::string,pybind11::object> map_str_pyobj;

    namespace Backends
    {

      template <typename T>
      T return_cast(pybind11::object o) { return o.cast<T>(); }
      template <>
      void return_cast<void>(pybind11::object o);

      sspair split_qualified_python_name(str, str);

      template<typename T>
      pybind11::array_t<T> cast_std_to_np(const std::vector<T>& input)
      {
        // Get size of input
        size_t size = input.size();

        // Get pointer to data
        const T* data = input.data();

        // Create and return new array_t<double> with the data
        return pybind11::array_t<T>(size, data);
      }

      template<typename T>
      std::vector<T> cast_np_to_std(const pybind11::array_t<T>& input)
      {
        // Get size of input
        size_t size = input.size();

        // Get pointer to data
        const T* data = input.data();

        // Create and return new vector with the data
        return std::vector<T>(data,(data+size));
      }

      template<typename T>
      pybind11::array_t<T> merge(const pybind11::array_t<T>& a, const pybind11::array_t<T>& b)
      {
        // Get size of input "a" and pointer to its data
        size_t size_a = a.size();
        auto data_a = a.data();

        // Repeat for input "b"
        size_t size_b = b.size();
        auto data_b = b.data();

        // Create pybind11::array_t<double> with the right size (size_a + size_b)
        // and get the pointer to the data
        pybind11::array_t<T> output(size_a+size_b);
        auto output_data = output.mutable_data();

        // Copy the contents of a and b into output
        std::memcpy(output_data, data_a, size_a*sizeof(T));
        std::memcpy(output_data+size_a, data_b, size_b*sizeof(T));

        return output;
      }

      template<typename T>
      pybind11::array_t<T> merge(const T& a, const pybind11::array_t<T>& b)
      {
        return merge(pybind11::array_t<T>(size_t(1),&a), b);
      }

      template<typename T>
      pybind11::array_t<T> merge(const pybind11::array_t<T>& a, const T& b)
      {
        return merge(a, pybind11::array_t<T>(size_t(1),&b));
      }

    }

  }

#endif // defined HAVE_PYBIND11

#endif // defined __python_helpers_hpp__
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
