
.. _program_listing_file_ColliderBit_include_gambit_ColliderBit_limits_BaseLimitContainer.hpp:

Program Listing for File BaseLimitContainer.hpp
===============================================

|exhale_lsh| :ref:`Return to documentation for file <file_ColliderBit_include_gambit_ColliderBit_limits_BaseLimitContainer.hpp>` (``ColliderBit/include/gambit/ColliderBit/limits/BaseLimitContainer.hpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   //   GAMBIT: Global and Modular BSM Inference Tool
   //   *********************************************
   
   #pragma once
   
   #include <algorithm>
   #include <cmath>
   #include <cstdlib>
   #include <fstream>
   #include <iostream>
   #include <limits>
   #include <map>
   #include <string>
   #include <utility>
   #include <vector>
   
   #include "gambit/Elements/shared_types.hpp"
   #include "gambit/ColliderBit/limits/PointsAndLines.hpp"
   
   namespace Gambit
   {
     namespace ColliderBit
     {
   
       inline LineSegment makeLine(const P2& pt1, const P2& pt2) { return LineSegment(pt1, pt2); }
   
       class BaseLimitContainer
       {
   
   
   
         protected:
           typedef std::vector<P2> Corners;
           typedef std::vector<LineSegment> Contours;
           typedef Contours* ContoursPointer;
           typedef std::map<unsigned, Contours*> LimitContours;
           typedef std::pair<unsigned, Contours*> LimitContourEntry;
   
           // The collection of all limit values, sorted from min limit to max limit
           std::vector<double> _limitValuesSorted;
   
           // The collection of all limit contours
           LimitContours _limitContours;
   
           // Some point external to all limit contours
           P2 _externalPoint;
   
   
   
   
         public:
   
           BaseLimitContainer() {}
   
           virtual ~BaseLimitContainer();
   
         
   
   
         public:
   
           virtual P2 convertPt(double x, double y) const = 0;
   
           virtual bool isWithinExclusionRegion(double x, double y, double mZ) const = 0;
   
           virtual double specialLimit(double, double) const;
           
           double limitAverage(double x, double y, double mZ) const;
   
           void dumpPlotData(double xlow, double xhigh, double ylow, double yhigh,
                             double mZ, std::string filename, int ngrid=100) const;
   
           void dumpLightPlotData(std::string filename, int nperLine=20) const;
   
       };
   
     }
   }
