---
title: 'file analyses/Analysis.hpp'

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
| class | **[Gambit::ColliderBit::Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/)** <br>A class for collider analyses within ColliderBit.  |

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[DEFINE_ANALYSIS_FACTORY](/documentation/code/files/analysis_8hpp/#define-define-analysis-factory)**(ANAME) <br>For analysis factory function definition.  |

## Detailed Description


**Author**: 

  * Abram Krislock ([a.m.b.krislock@fys.uio.no](mailto:a.m.b.krislock@fys.uio.no))
  * Andy Buckley ([mostlikelytobefound@facebook.com](mailto:mostlikelytobefound@facebook.com))
  * Anders Kvellestad ([anders.kvellestad@fys.uio.no](mailto:anders.kvellestad@fys.uio.no)) 
  * Pat Scott ([p.scott@imperial.ac.uk](mailto:p.scott@imperial.ac.uk)) 


**Date**: 

  * often
  * 2019 Feb


Class for ColliderBit analyses.



------------------

Authors (add name and date if you modify):



------------------




## Macros Documentation

### define DEFINE_ANALYSIS_FACTORY

```
#define DEFINE_ANALYSIS_FACTORY(
    ANAME
)
      Analysis* create_Analysis_ ## ANAME()                                    \
      {                                                                        \
        return new Analysis_ ## ANAME();                                       \
      }                                                                        \
      std::string getDetector_ ## ANAME()                                      \
      {                                                                        \
        return std::string(Analysis_ ## ANAME::detector);                      \
      }
```

For analysis factory function definition. 

## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#pragma once

#include <string>
#include "HEPUtils/Event.h"
#include "gambit/ColliderBit/analyses/AnalysisData.hpp"

namespace Gambit
{
  typedef std::string str;

  namespace ColliderBit
  {

    class Analysis
    {

      public:

        Analysis();
        virtual ~Analysis() { }

        void reset();

        void analyze(const HEPUtils::Event&);
        void analyze(const HEPUtils::Event*);

        double luminosity() const;
        void set_luminosity(double);
        void set_analysis_name(str);
        str analysis_name();

        const AnalysisData& get_results();
        const AnalysisData& get_results(str&);
        AnalysisData* get_results_ptr();
        AnalysisData* get_results_ptr(str&);

        void scale(double);

        void add(Analysis* other);
        virtual void combine(const Analysis* other) = 0;

      protected:

        virtual void analysis_specific_reset() = 0;

        virtual void run(const HEPUtils::Event*) = 0;
        void add_result(const SignalRegionData& sr);
        void set_covariance(const Eigen::MatrixXd& srcov);
        void set_covariance(const std::vector<std::vector<double>>&);
        virtual void collect_results() = 0;

      private:

        double _luminosity;
        bool _luminosity_is_set;
        bool _is_scaled;
        bool _needs_collection;
        AnalysisData _results;
        std::string _analysis_name;

    };


    #define DEFINE_ANALYSIS_FACTORY(ANAME)                                     \
      Analysis* create_Analysis_ ## ANAME()                                    \
      {                                                                        \
        return new Analysis_ ## ANAME();                                       \
      }                                                                        \
      std::string getDetector_ ## ANAME()                                      \
      {                                                                        \
        return std::string(Analysis_ ## ANAME::detector);                      \
      }


  }
}
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
