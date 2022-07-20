---
title: 'file limits/ImageLimit.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::ColliderBit](/documentation/code/namespaces/namespacegambit_1_1colliderbit/)**  |

## Classes

|                | Name           |
| -------------- | -------------- |
| class | **[Gambit::ColliderBit::ImageLimit](/documentation/code/classes/classgambit_1_1colliderbit_1_1imagelimit/)**  |

## Detailed Description


**Author**: Andrew Fowlie ([andrew.j.fowlie@qq.com](mailto:andrew.j.fowlie@qq.com)) 

**Date**: 2019 February

Read a limit from an image, represented by a grid of values at every pixel



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************


#ifndef COLLIDERBIT_INCLUDE_GAMBIT_COLLIDERBIT_IMAGELIMIT_HPP_
#define COLLIDERBIT_INCLUDE_GAMBIT_COLLIDERBIT_IMAGELIMIT_HPP_

#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <cmath>
#include <limits>
#include <stdexcept>


namespace Gambit {
  namespace ColliderBit {

    typedef std::vector<std::vector<double>> data_type;

    class ImageLimit {
     private:
      // @brief Image data
      data_type image_data;

      // @brief Read image data from file on disk
      data_type get_image(std::string name);

      // @brief Treatment of masses outside our grid
      const double limit_outside_grid = std::numeric_limits<double>::max();

      // @brief Axis coordinates for image
      std::vector<double> extent;

     public:
      // @brief Construct class
      ImageLimit(std::string name,
                 double x_min, double x_max, double y_min, double y_max);

      // @brief Limit from axis coordinates
      double get_limit(double x, double y);
    };

  }  // namespace ColliderBit
}  // namespace Gambit

#endif  // COLLIDERBIT_INCLUDE_GAMBIT_COLLIDERBIT_IMAGELIMIT_HPP_
```


-------------------------------

Updated on 2022-07-20 at 17:18:46 +0000
