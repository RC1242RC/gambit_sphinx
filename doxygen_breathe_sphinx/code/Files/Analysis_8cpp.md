---
title: 'file analyses/Analysis.cpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::ColliderBit](/documentation/code/namespaces/namespacegambit_1_1colliderbit/)**  |

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




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#include <vector>
#include "HEPUtils/Event.h"
#include "gambit/ColliderBit/analyses/Analysis.hpp"

namespace Gambit
{
  namespace ColliderBit
  {

    Analysis::Analysis() : _luminosity(0)
                         , _luminosity_is_set(false)
                         , _is_scaled(false)
                         , _needs_collection(true)
                         { }

    void Analysis::reset()
    {
      _is_scaled = false;
      _needs_collection = true;
      _results.clear();
      analysis_specific_reset();
    }

    void Analysis::analyze(const HEPUtils::Event& e) { analyze(&e); }

    void Analysis::analyze(const HEPUtils::Event* e)
    {
      _needs_collection = true;
      run(e);
    }

    double Analysis::luminosity() const { return _luminosity; }

    void Analysis::set_luminosity(double lumi) { _luminosity_is_set = true; _luminosity = lumi; }

    void Analysis::set_analysis_name(str aname)
    {
      _analysis_name = aname;
      _results.analysis_name = _analysis_name;
    }

    str Analysis::analysis_name() { return _analysis_name; }

    const AnalysisData& Analysis::get_results()
    {
      if (_needs_collection)
      {
        collect_results();
        _needs_collection = false;
      }
      return _results;
    }

    const AnalysisData& Analysis::get_results(str& warning)
    {
      warning = "";
      if (not _luminosity_is_set)
        warning += "Luminosity has not been set for analysis " + _analysis_name + ".";
      if (not _is_scaled)
        warning += "Results have not been scaled for analysis " + _analysis_name + ".";

      return get_results();
    }

    AnalysisData* Analysis::get_results_ptr()
    {
      // Call get_results() to make sure everything has been collected properly, but ignore the return value
      get_results();
      // Now provide pointer to _results directly
      return &_results;
    }

    AnalysisData* Analysis::get_results_ptr(str& warning)
    {
      // Call get_results() to make sure everything has been collected properly, but ignore the return value
      get_results(warning);
      // Now provide pointer to _results directly
      return &_results;
    }

    void Analysis::add_result(const SignalRegionData& sr) { _results.add(sr); }

    void Analysis::set_covariance(const Eigen::MatrixXd& srcov) { _results.srcov = srcov; }

    void Analysis::set_covariance(const std::vector<std::vector<double>>& srcov)
    {
      Eigen::MatrixXd cov(srcov.size(), srcov.front().size());
      for (size_t i = 0; i < srcov.size(); ++i)
      {
        for (size_t j = 0; j < srcov.front().size(); ++j)
        {
          cov(i,j) = srcov[i][j];
        }
      }
      set_covariance(cov);
    }

    void Analysis::scale(double xsec_per_event)
    {
      double factor = luminosity() * xsec_per_event;
      assert(factor >= 0);
      for (SignalRegionData& sr : _results)
      {
        sr.n_sig_scaled = factor * sr.n_sig_MC;
      }
      _is_scaled = true;
    }

    void Analysis::add(Analysis* other)
    {
      if (_results.empty()) collect_results();
      if (this == other) return;
      const AnalysisData otherResults = other->get_results();
      assert(otherResults.size() == _results.size());
      for (size_t i = 0; i < _results.size(); ++i)
      {
        _results[i].n_sig_MC += otherResults[i].n_sig_MC;
      }
      combine(other);
    }

  }
}
```


-------------------------------

Updated on 2022-07-20 at 17:18:46 +0000
