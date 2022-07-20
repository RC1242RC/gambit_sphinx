---
title: 'file analyses/Cutflow.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::ColliderBit](/documentation/code/namespaces/namespacegambit_1_1colliderbit/)**  |
| **[std](/documentation/code/namespaces/namespacestd/)**  |

## Classes

|                | Name           |
| -------------- | -------------- |
| struct | **[Gambit::ColliderBit::Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/)** <br>A tracker of numbers & fractions of events passing sequential cuts.  |
| struct | **[Gambit::ColliderBit::Cutflows](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflows/)** <br>A container for several [Cutflow](/documentation/code/classes/structgambit_1_1colliderbit_1_1cutflow/) objects, with some convenient batch access.  |

## Detailed Description


**Author**: Andy Buckley ([andy.buckley@cern.ch](mailto:andy.buckley@cern.ch))

The Cutflow and Cutflows classes



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#pragma once

#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <iomanip>

#include "gambit/ColliderBit/Utils.hpp"


namespace Gambit
{
  namespace ColliderBit
  {

    using namespace std;


    struct Cutflow
    {

      Cutflow() {}

      Cutflow(const string& cfname, const vector<string>& cutnames)
        : name(cfname), ncuts(cutnames.size()), cuts(cutnames), counts(ncuts+1, 0), icurr(0)
      {  }

      void fillinit(double weight=1.)
      {
        counts[0] += weight;
        icurr = 1;
      }

      bool fill(size_t icut, bool cutresult=true, double weight=1.)
      {
        // if (icut == 0)
        //   throw RangeError("Cut number must be greater than 0");
        if (cutresult) counts.at(icut) += weight;
        icurr = icut + 1;
        return cutresult;
      }

      bool fill(size_t icut, double weight)
      {
        return fill(icut, true, weight);
      }

      bool fill(size_t icut, const vector<bool>& cutresults, double weight=1.)
      {
        //   throw RangeError("Cut number must be greater than 0");
        // if (cutresults.size() > ncuts-icut)
        //   throw RangeError("Number of filled cut results needs to match the Cutflow construction");
        bool rtn = true;
        for (size_t i = 0; i < cutresults.size(); ++i)
          if (!fill(icut+i, cutresults[i], weight)) { rtn = false; break; }
        icurr = icut + cutresults.size();
        return rtn;
      }


      bool fillall(const vector<bool>& cutresults, double weight=1.)
      {
        // if (cutresults.size() != ncuts)
        //   throw RangeError("Number of filled cut results needs to match the Cutflow construction");
        // if (icut == 0) { fillinit(weight); icut = 1; }
        return fill(1, cutresults, weight);
      }

      bool fillnext(bool cutresult, double weight=1.)
      {
        return fill(icurr, cutresult, weight);
      }

      bool fillnext(double weight=1.)
      {
        return fill(icurr, true, weight);
      }

      bool fillnext(const vector<bool>& cutresults, double weight=1.)
      {
        return fill(icurr, cutresults, weight);
      }


      bool filltail(const vector<bool>& cutresults, double weight=1.)
      {
        return fill(ncuts+1-cutresults.size(), cutresults, weight);
      }

      void scale(double factor)
      {
        for (double& x : counts) x *= factor;
      }

      void normalize(double norm, size_t icut=0)
      {
        scale(norm/counts.at(icut));
      }

      string str() const
      {
        using namespace std;
        stringstream ss;
        ss << fixed << std::setprecision(1) << counts.front();
        const size_t count0len = ss.str().length();
        ss.str("");
        ss << name << " cut-flow:\n";
        size_t maxnamelen = 0;
        for (const string& t : cuts)
          maxnamelen = max(t.length(), maxnamelen);
        ss << setw(maxnamelen+5) << "" << "   "
           << setw(count0len) << right << "Count" << "    "
           << setw(6) << right << "A_cumu" << "    "
           << setw(6) << right << "A_incr";
        for (size_t i = 0; i <= ncuts; ++i)
        {
          const int pcttot = (counts.front() == 0) ? -1 : round(100*counts.at(i)/double(counts.front()));
          const int pctinc = (i == 0 || counts.at(i-1) == 0) ? -1 : round(100*counts.at(i)/double(counts.at(i-1)));
          stringstream ss2;
          ss2 << fixed << setprecision(1) << counts.at(i);
          const string countstr = ss2.str(); ss2.str("");
          ss2 << fixed << setprecision(3) << pcttot << "%";
          const string pcttotstr = ss2.str(); ss2.str("");
          ss2 << fixed << setprecision(3) << pctinc << "%";
          const string pctincstr = ss2.str();
          ss << "\n"
             << setw(maxnamelen+5) << left << (i == 0 ? "" : "Pass "+cuts.at(i-1)) << "   "
             << setw(count0len) << right << countstr << "    "
             << setw(6) << right << (pcttot < 0 ? "- " : pcttotstr) << "    "
             << setw(6) << right << (pctinc < 0 ? "- " : pctincstr);
        }
        return ss.str();
      }

      void print(std::ostream& os) const
      {
        os << str() << std::flush;
      }

      string name;
      size_t ncuts;
      vector<string> cuts;
      vector<double> counts;
      size_t icurr;

    };


    inline std::ostream& operator << (std::ostream& os, const Cutflow& cf)
    {
      return os << cf.str();
    }



    struct Cutflows
    {

      Cutflows() {  }

      Cutflows(const vector<Cutflow>& cutflows) : cfs(cutflows) {  }

      void addCutflow(const Cutflow& cf)
      {
        cfs.push_back(cf);
      }

      void addCutflow(const string& cfname, const vector<string>& cutnames)
      {
        cfs.push_back(Cutflow(cfname, cutnames));
      }

      Cutflow& operator [] (size_t i) { return cfs[i]; }
      const Cutflow& operator [] (size_t i) const { return cfs[i]; }

      Cutflow& operator [] (const string& name)
      {
        for (Cutflow& cf : cfs)
          if (cf.name == name) return cf;
        // throw UserError("Requested cut-flow name '" + name + "' does not exist");
        throw 0;
      }
      const Cutflow& operator [] (const string& name) const
      {
        for (const Cutflow& cf : cfs)
          if (cf.name == name) return cf;
        // throw UserError("Requested cut-flow name '" + name + "' does not exist");
        throw 0;
      }

      void fillinit(double weight=1.)
      {
        for (Cutflow& cf : cfs) cf.fillinit(weight);
      }

      bool fill(size_t icut, bool cutresult=true, double weight=1.)
      {
        for (Cutflow& cf : cfs) cf.fill(icut, cutresult, weight);
        return cutresult;
      }

      bool fill(size_t icut, double weight)
      {
        return fill(icut, true, weight);
      }

      bool fill(size_t icut, const vector<bool>& cutresults, double weight=1.)
      {
        bool rtn = true;
        for (Cutflow& cf : cfs) rtn = cf.fill(icut, cutresults, weight);
        return rtn;
      }


      bool fillall(const vector<bool>& cutresults, double weight=1.)
      {
        bool rtn = true;
        for (Cutflow& cf : cfs) rtn = cf.fillall(cutresults, weight);
        return rtn;
      }

      bool fillnext(bool cutresult, double weight=1.) {
        for (Cutflow& cf : cfs) cf.fillnext(cutresult, weight);
        return cutresult;
      }

      bool fillnext(double weight=1.)
      {
        for (Cutflow& cf : cfs) cf.fillnext(weight);
        return true;
      }

      bool fillnext(const vector<bool>& cutresults, double weight=1.)
      {
        bool rtn = true;
        for (Cutflow& cf : cfs) rtn = cf.fillnext(cutresults, weight);
        return rtn;
      }


      void scale(double factor)
      {
        for (Cutflow& cf : cfs) cf.scale(factor);
      }

      void normalize(double norm, size_t icut=0)
      {
        for (Cutflow& cf : cfs) cf.normalize(norm, icut);
      }

      string str() const
      {
        stringstream ss;
        for (const Cutflow& cf : cfs)
          ss << cf << "\n\n";
        return ss.str();
      }

      void print(std::ostream& os) const
      {
        os << str() << std::flush;
      }


      vector<Cutflow> cfs;

    };


    inline std::ostream& operator << (std::ostream& os, const Cutflows& cfs)
    {
      return os << cfs.str();
    }


  }
}
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
