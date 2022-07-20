---
title: 'file analyses/AnalysisData.hpp'

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
| struct | **[Gambit::ColliderBit::SignalRegionData](/documentation/code/classes/structgambit_1_1colliderbit_1_1signalregiondata/)** <br>A simple container for the result of one signal region from one analysis.  |
| struct | **[Gambit::ColliderBit::AnalysisData](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisdata/)**  |

## Detailed Description


**Author**: 

  * Abram Krislock ([a.m.b.krislock@fys.uio.no](mailto:a.m.b.krislock@fys.uio.no))
  * Andy Buckley ([andy.buckley@cern.ch](mailto:andy.buckley@cern.ch))
  * Anders Kvellestad ([anders.kvellestad@fys.uio.no](mailto:anders.kvellestad@fys.uio.no)) 
  * Pat Scott ([p.scott@imperial.ac.uk](mailto:p.scott@imperial.ac.uk)) 


**Date**: 

  * often
  * 2019 Feb


AnalysisData and SignalRegion structures.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#pragma once

#include "gambit/Utils/begin_ignore_warnings_eigen.hpp"
#include "Eigen/Core"
#include "gambit/Utils/end_ignore_warnings.hpp"

#include <string>
#include <map>
#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>
#include <cfloat>
#include <limits>
#include <memory>
#include <iomanip>
#include <algorithm>
#include "gambit/ColliderBit/analyses/EventCounter.hpp"

namespace Gambit
{
  namespace ColliderBit
  {


    struct SignalRegionData
    {

      SignalRegionData(const EventCounter& scounter,
                       double nobs, const std::pair<double,double>& nbkg,
                       double nsigscaled=0)
       : SignalRegionData(scounter.name(), nobs, scounter.weight_sum(), nbkg.first, scounter.weight_sum_err(), nbkg.second, nsigscaled)
      {}

      SignalRegionData(const std::string& sr,
                       double nobs, const EventCounter& scounter, const std::pair<double,double>& nbkg,
                       double nsigscaled=0)
       : SignalRegionData(sr, nobs, scounter.weight_sum(), nbkg.first, scounter.weight_sum_err(), nbkg.second, nsigscaled)
      {}

      SignalRegionData(const std::string& sr,
                       double nobs, const std::pair<double,double>& nsigMC, const std::pair<double,double>& nbkg,
                       double nsigscaled=0)
       : SignalRegionData(sr, nobs, nsigMC.first, nbkg.first, nsigMC.second, nbkg.second, nsigscaled)
      {}

      SignalRegionData(const std::string& sr,
                       double nobs, double nsigMC, double nbkg,
                       double nsigMCsys, double nbkgerr, double nsigscaled=0)
       : sr_label(sr),
         n_obs(nobs), n_sig_MC(nsigMC), n_sig_scaled(nsigscaled), n_bkg(nbkg),
         n_sig_MC_sys(nsigMCsys), n_bkg_err(nbkgerr)
      {}

      SignalRegionData() {}

      bool check() const
      {
        bool consistent = true;
        return consistent;
      }

      double scalefactor() const { return n_sig_MC == 0 ? 1 : n_sig_scaled / n_sig_MC; }

      double calc_n_sig_MC_stat() const { return sqrt(n_sig_MC); }

      double calc_n_sig_MC_err() const 
      { 
        double n_sig_MC_stat = calc_n_sig_MC_stat();
        return sqrt( n_sig_MC_stat * n_sig_MC_stat + n_sig_MC_sys * n_sig_MC_sys ); 
      }

      double calc_n_sig_scaled_stat() const { return scalefactor() * calc_n_sig_MC_stat(); }

      double calc_n_sig_scaled_sys() const { return scalefactor() * n_sig_MC_sys; }

      double calc_n_sig_scaled_err() const { return scalefactor() * calc_n_sig_MC_err(); }

      double calc_n_sigbkg_err() const 
      { 
        double n_sig_scaled_err = calc_n_sig_scaled_err();
        return sqrt( n_sig_scaled_err * n_sig_scaled_err + n_bkg_err * n_bkg_err );  
      }



      std::string sr_label; 



      double n_obs = 0; 
      double n_sig_MC = 0; 
      double n_sig_scaled = 0; 
      double n_bkg = 0; 
      double n_sig_MC_sys = 0; 
      double n_bkg_err = 0; 


    };


    struct AnalysisData
    {

      AnalysisData()
      {
        clear();
      }

      AnalysisData(const std::string& name) :
        analysis_name(name)
      {
        clear();
      }

      AnalysisData(const std::vector<SignalRegionData>& srds, const Eigen::MatrixXd& cov=Eigen::MatrixXd())
        : srdata(srds), srcov(cov)
      {
        check();
      }

      void clear()
      {
        for (auto& sr : srdata)
        {
          sr.n_sig_MC = 0;
          sr.n_sig_scaled = 0;
          sr.n_sig_MC_sys = 0;
        }
        srcov = Eigen::MatrixXd();
      }

      size_t size() const
      {
        // check();
        return srdata.size();
      }

      bool empty() const { return size() == 0; }

      bool hasCorrs() const
      {
        // check(); // bjf> This was wrong! Needs to be !=, not ==
        return srcov.rows() != 0;
      }

      void add(const SignalRegionData& srd)
      {
        std::string key = analysis_name + srd.sr_label;
        auto loc = srdata_identifiers.find(key);
        if (loc == srdata_identifiers.end())
        {
          // If the signal region doesn't exist in this object yet, add it
          srdata.push_back(srd);
          srdata_identifiers[key] = srdata.size() - 1;
        }
        else
        {
          // If it does, just update the signal count in the existing SignalRegionData object
          srdata[loc->second].n_sig_MC = srd.n_sig_MC;
        }
        check();
      }

      bool check() const
      {
        for (const SignalRegionData& srd : srdata) srd.check();
        assert(srcov.rows() == 0 || srcov.rows() == (int) srdata.size());
        return true;
      }

      bool event_gen_BYPASS = false;


      void pythonize_me() const;

      std::string analysis_name;

      SignalRegionData& operator[] (size_t i) { return srdata[i]; }
      const SignalRegionData& operator[] (size_t i) const { return srdata[i]; }

      std::vector<SignalRegionData>::iterator begin() { return srdata.begin(); }
      std::vector<SignalRegionData>::const_iterator begin() const { return srdata.begin(); }
      std::vector<SignalRegionData>::iterator end() { return srdata.end(); }
      std::vector<SignalRegionData>::const_iterator end() const { return srdata.end(); }

      std::vector<SignalRegionData> srdata;

      std::map<std::string, int> srdata_identifiers;

      Eigen::MatrixXd srcov;

    };


  }
}
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
