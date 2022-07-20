---
title: 'file DarkBit/PPPC.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::DarkBit](/documentation/code/namespaces/namespacegambit_1_1darkbit/)**  |

## Classes

|                | Name           |
| -------------- | -------------- |
| class | **[Gambit::DarkBit::Interpolator2D](/documentation/code/classes/classgambit_1_1darkbit_1_1interpolator2d/)**  |
| class | **[Gambit::DarkBit::PPPC_interpolation](/documentation/code/classes/classgambit_1_1darkbit_1_1pppc__interpolation/)**  |

## Detailed Description


**Author**: Patrick Stoecker ([stoecker@physik.rwth-aachen.de](mailto:stoecker@physik.rwth-aachen.de)) 

**Date**: 2021 Mar

Routines for the interpolation of the yield tables from PPPC4DMID.

Class decalrations



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef __PPPC_hpp__
#define __PPPC_hpp__

#include <unordered_map>

#include <gsl/gsl_interp2d.h>
#include <gsl/gsl_spline2d.h>

#include "gambit/Utils/ascii_table_reader.hpp"

namespace Gambit
{
  namespace DarkBit
  {

    class Interpolator2D
    {
      public:
        Interpolator2D();
        Interpolator2D(const std::vector<double>& xin, const std::vector<double>& yin, const std::vector<double>& zin);
        Interpolator2D& operator=(Interpolator2D&&);
        // Destructor.
        ~Interpolator2D();
        // Delete copy constructor and assignment operator to avoid shallow copies.
        Interpolator2D(const Interpolator2D&) = delete;
        Interpolator2D operator=(const Interpolator2D&) = delete;
        // Routine to access interpolated values.
        double interpolate(double x, double y) const;
        // Routine to check if a point is inside the interpolating box.
        bool is_inside_box(double x, double y) const;
      private:
        // Initialiser for the Interpolator2D class.
        void init(const std::vector<double>& xin, const std::vector<double>& yin, const std::vector<double>& zin);
        // The gsl objects for the interpolating functions that need to be available to the class routines.
        gsl_interp_accel *x_acc;
        gsl_interp_accel *y_acc;
        gsl_spline2d *spline;
        double* z;
        // Upper and lower "x" and "y" values available to the interpolating function.
        double x_lo, y_lo, x_up, y_up;
    };

    class PPPC_interpolation
    {
      public:
        PPPC_interpolation(const std::string& filename);

        // Disable default ctor, copy ctor and copy assigment
        PPPC_interpolation() = delete;
        PPPC_interpolation(const PPPC_interpolation&) = delete;
        PPPC_interpolation operator=(const PPPC_interpolation&) = delete;

        // Only allow move assignment
        PPPC_interpolation& operator=(PPPC_interpolation&& other);

        double operator()(const std::string& channel, double m, double x) const;

      private:
        void check_channel(const std::string& channel) const;

        ASCIItableReader table;
        std::unordered_map<std::string, Interpolator2D> interpMap;
    };

  }
}
#endif // defined __PPPC_hpp__
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
