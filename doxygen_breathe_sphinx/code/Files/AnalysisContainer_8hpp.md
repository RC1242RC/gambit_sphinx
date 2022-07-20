---
title: 'file analyses/AnalysisContainer.hpp'

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
| class | **[Gambit::ColliderBit::AnalysisContainer](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysiscontainer/)** <br>A class for managing collections of [Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/) instances.  |

## Detailed Description


**Author**: 

  * Abram Krislock ([a.m.b.krislock@fys.uio.no](mailto:a.m.b.krislock@fys.uio.no))
  * Andy Buckley ([mostlikelytobefound@facebook.com](mailto:mostlikelytobefound@facebook.com))
  * Anders Kvellestad ([anders.kvellestad@fys.uio.no](mailto:anders.kvellestad@fys.uio.no)) 
  * Pat Scott ([p.scott@imperial.ac.uk](mailto:p.scott@imperial.ac.uk)) 


**Date**: 

  * often
  * 2019 Feb


Class for holding ColliderBit analyses.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#pragma once

#include <string>
#include <stdexcept>
#include <vector>
#include <map>

#include "HEPUtils/Event.h"

namespace Gambit
{

  typedef std::string str;

  namespace ColliderBit
  {

    class Analysis;

    Analysis* mkAnalysis(const str& name);

    str getDetector(const str& name);


    class AnalysisContainer
    {

      private:

        std::map<str,std::map<str,Analysis*> > analyses_map;

        str current_collider;

        bool is_registered;

        int n_threads;

        str base_key;

        static std::map<str,std::map<int,AnalysisContainer*> > instances_map;


      public:

        AnalysisContainer();

        ~AnalysisContainer();

        void register_thread(str);

        void clear();

        void set_current_collider(str);

        str get_current_collider() const;

        bool has_analyses(str) const;
        bool has_analyses() const;

        void init(const std::vector<str>&, str);
        void init(const std::vector<str>&);

        void reset(str, str);
        void reset(str);
        void reset();
        void reset_all();

        const Analysis* get_analysis_pointer(str, str) const;
        const std::map<str,Analysis*>& get_collider_analyses_map(str) const;
        const std::map<str,Analysis*>& get_current_analyses_map() const;
        const std::map<str,std::map<str,Analysis*> >& get_full_analyses_map() const;

        void analyze(const HEPUtils::Event&, str, str) const;
        void analyze(const HEPUtils::Event&, str) const;
        void analyze(const HEPUtils::Event&) const;

        void collect_and_add_signal(str, str);
        void collect_and_add_signal(str);
        void collect_and_add_signal();

        void scale(str, str, double);
        void scale(str, double);
        void scale(double);
        void scale_all(double);

    };

  }
}
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
