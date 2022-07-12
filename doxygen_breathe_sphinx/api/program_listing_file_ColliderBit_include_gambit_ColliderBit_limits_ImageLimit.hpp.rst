
.. _program_listing_file_ColliderBit_include_gambit_ColliderBit_limits_ImageLimit.hpp:

Program Listing for File ImageLimit.hpp
=======================================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_include_gambit_ColliderBit_limits_ImageLimit.hpp>` (``ColliderBit/include/gambit/ColliderBit/limits/ImageLimit.hpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

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
