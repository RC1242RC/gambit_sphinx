---
title: 'file limits/BaseLimitContainer.hpp'

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
| class | **[Gambit::ColliderBit::BaseLimitContainer](/documentation/code/classes/classgambit_1_1colliderbit_1_1baselimitcontainer/)** <br>Base class for experimental limit curve interpolation.  |

## Detailed Description


**Author**: 

  * Abram Krislock ([a.m.b.krislock@fys.uio.no](mailto:a.m.b.krislock@fys.uio.no)) 
  * Pat Scott ([p.scott@imperial.ac.uk](mailto:p.scott@imperial.ac.uk)) 


**Date**: 

  * ????
  * 2016 Jan


Base container class for LEP limits.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
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
```


-------------------------------

Updated on 2022-07-20 at 17:18:46 +0000
