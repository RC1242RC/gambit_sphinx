---
title: 'file DarkBit/SimpleHist.hpp'

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
| struct | **[Gambit::DarkBit::SimpleHist](/documentation/code/classes/structgambit_1_1darkbit_1_1simplehist/)** <br>Histogram class for cascade decays.  |

## Detailed Description


**Author**: Lars A. Dal ([l.a.dal@fys.uio.no](mailto:l.a.dal@fys.uio.no)) 

**Date**: 2015 Feb

Type definition header for DarkBit SimpleHist types.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************


#ifndef __SimpleHist_hpp__
#define __SimpleHist_hpp__

#include <vector>
#include <map>

#include "gambit/Utils/util_types.hpp"
#include "gambit/cmake/cmake_variables.hpp"
#include "gambit/Elements/daFunk.hpp"


namespace Gambit
{

  namespace DarkBit
  {

    struct SimpleHist
    {

        // Functions

        SimpleHist(){}

        SimpleHist(int nBins, double Emin, double Emax, bool logscale);

        SimpleHist(std::vector<double> binLower);

        void addEvent(double E, double weight=1.0);

        void addToBin(int bin, double weight=1.0);

        void addBox(double Emin, double Emax, double weight=1.0);

        void addHistAsWeights_sameBin(SimpleHist &in);

        double getError(int bin) const;

        double getRelError(int bin) const;

        void divideByBinSize();

        void multiply(double x);

        int findIndex(double val) const;

        double binSize(int bin) const;

        double binCenter(int bin) const;

        std::vector<double> getBinCenters() const;

        const std::vector<double>& getBinValues() const;

        void getEdges(double& lower, double& upper) const;

        // Variables
        std::vector<double> binLower;
        std::vector<double> binVals;
        std::vector<double> wtSq;
        int nBins;
    };

    typedef std::map<str, std::map<str, Gambit::DarkBit::SimpleHist> > simpleHistContainter;
    typedef std::map<str, int> stringIntMap;
    typedef std::map<str, daFunk::Funk> stringFunkMap;

  }

}

#endif // defined __SimpleHist_hpp__
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
