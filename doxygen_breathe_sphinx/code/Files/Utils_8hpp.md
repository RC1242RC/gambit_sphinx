---
title: 'file ColliderBit/Utils.hpp'

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

  * Andy Buckley 
  * Abram Krislock 
  * Anders Kvellestad 
  * Pat Scott 
  * Tomas Gonzalo


Util variables and functions for ColliderBit



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************

#pragma once

#include <functional>
#include <memory>
#include <cfloat>

#include "HEPUtils/MathUtils.h"
#include "HEPUtils/BinnedFn.h"
#include "HEPUtils/Event.h"
#include "HEPUtils/FastJet.h"

namespace Gambit
{

  namespace ColliderBit
  {

    static const double GeV = 1, MeV = 1e-3, TeV = 1e3;


    using HEPUtils::Event;
    using HEPUtils::Particle;
    using HEPUtils::Jet;
    using HEPUtils::P4;

    using HEPUtils::add_quad;

    typedef std::vector<const HEPUtils::Particle*> ParticlePtrs;

    typedef std::vector<const HEPUtils::Jet*> JetPtrs;



    inline bool amIaJet(const HEPUtils::Jet *jet) { (void)jet; return true; }

    inline bool amIaBJet(const HEPUtils::Jet *jet) { return jet->btag(); }

    inline bool amIaJet(const HEPUtils::Particle *part) { (void)part; return false; }

    inline bool amIaBJet(const HEPUtils::Particle *part) { (void)part; return true; }




    template <typename CONTAINER, typename RMFN>
    inline void iremoveerase(CONTAINER& c, const RMFN& fn) {
      auto newend = std::remove_if(c.begin(), c.end(), fn);
      c.erase(newend, c.end());
    }

    inline void ifilter_reject(ParticlePtrs& particles,
                               std::function<bool(const Particle*)> rejfn, bool do_delete=true) {
      iremoveerase(particles, [&](const Particle* p) {
          const bool rm = rejfn(p);
          if (rm && do_delete) delete p;
          return rm;
        });
    }

    inline void ifilter_select(ParticlePtrs& particles,
                               std::function<bool(const Particle*)> selfn, bool do_delete=true) {
      ifilter_reject(particles, [&](const Particle* p) { return !selfn(p); }, do_delete);
    }


    inline ParticlePtrs filter_reject(const ParticlePtrs& particles,
                                      std::function<bool(const Particle*)> rejfn, bool do_delete=true) {
      ParticlePtrs rtn = particles;
      ifilter_reject(rtn, rejfn, do_delete);
      return rtn;
    }

    inline ParticlePtrs filter_select(const ParticlePtrs& particles,
                                      std::function<bool(const Particle*)> selfn, bool do_delete=true) {
      return filter_reject(particles, [&](const Particle* p) { return !selfn(p); }, do_delete);
    }






    inline void ifilter_reject(JetPtrs& jets,
                               std::function<bool(const Jet*)> rejfn, bool do_delete=true) {
      iremoveerase(jets, [&](const Jet* j) {
          const bool rm = rejfn(j);
          if (rm && do_delete) delete j;
          return rm;
        });
    }

    inline void ifilter_select(JetPtrs& jets,
                               std::function<bool(const Jet*)> selfn, bool do_delete=true) {
      ifilter_reject(jets, [&](const Jet* j) { return !selfn(j); }, do_delete);
    }


    inline JetPtrs filter_reject(const JetPtrs& jets,
                                 std::function<bool(const Jet*)> rejfn, bool do_delete=true) {
      JetPtrs rtn = jets;
      ifilter_reject(rtn, rejfn, do_delete);
      return rtn;
    }

    inline JetPtrs filter_select(const JetPtrs& jets,
                                 std::function<bool(const Jet*)> selfn, bool do_delete=true) {
      return filter_reject(jets, [&](const Jet* j) { return !selfn(j); }, do_delete);
    }









    bool random_bool(double eff);

    inline bool random_bool(const HEPUtils::BinnedFn1D<double>& effmap, double x) {
      return random_bool( effmap.get_at(x) );
    }

    inline bool random_bool(const HEPUtils::BinnedFn2D<double>& effmap, double x, double y) {
      return random_bool( effmap.get_at(x, y) );
    }





    void filtereff(std::vector<const HEPUtils::Particle*>& particles, double eff, bool do_delete=false);

    void filtereff(std::vector<const HEPUtils::Particle*>& particles, std::function<double(const HEPUtils::Particle*)> eff_fn, bool do_delete=false);

    void filtereff_pt(std::vector<const HEPUtils::Particle*>& particles, const HEPUtils::BinnedFn1D<double>& eff_pt, bool do_delete=false);

    void filtereff_etapt(std::vector<const HEPUtils::Particle*>& particles, const HEPUtils::BinnedFn2D<double>& eff_etapt, bool do_delete=false);





    inline bool has_tag(const HEPUtils::BinnedFn2D<double>& effmap, double eta, double pt) {
      try {
        return random_bool(effmap, fabs(eta), pt);
      } catch (...) {
        return false; // No tag if outside lookup range... be careful!
      }
    }

    inline std::map<const HEPUtils::Jet*,bool> generateBTagsMap(const std::vector<const HEPUtils::Jet*>& jets, 
                                                                double bTagEff, double cMissTagEff, double otherMissTagEff,
                                                                double pTmin = 0., double absEtaMax = DBL_MAX)
    {
      std::map<const HEPUtils::Jet*,bool> bTagsMap;
      for (const HEPUtils::Jet* j : jets)
      {
        bool genBTag = false;
        if((j->pT() > pTmin) && (j->abseta() < absEtaMax))
        {
          if(j->btag()) 
          { 
            if(random_bool(bTagEff)) { genBTag = true; }
          }
          else if(j->ctag()) 
          { 
            if(random_bool(cMissTagEff)) { genBTag = true; }
          }
          else
          { 
            if(random_bool(otherMissTagEff)) { genBTag = true; }
          }
        }
        bTagsMap[j] = genBTag;
      }
      return bTagsMap;
    }


    template <typename NUM1, typename NUM2>
    inline size_t binIndex(NUM1 val, const std::vector<NUM2>& binedges, bool allow_overflow=false) {
      if (val < binedges.front()) return -1; 
      if (val >= binedges.back()) return allow_overflow ? int(binedges.size())-1 : -1; 
      return std::distance(binedges.begin(), --std::upper_bound(binedges.begin(), binedges.end(), val));
    }


    inline std::vector<double> mk_bin_values(const std::vector<double>& binEdgeValues) {
      std::vector<double> results;
      results.reserve(binEdgeValues.size()-1);
      for (size_t i = 0; i < binEdgeValues.size()-1; ++i)
        results.push_back( (binEdgeValues[i] + binEdgeValues[i+1])/2.0 );
      return results;
    }
    inline std::vector<double> makeBinValues(const std::vector<double>& binEdgeValues) {
      return mk_bin_values(binEdgeValues);
    }


    template <typename MOM>
    inline std::vector<std::shared_ptr<HEPUtils::Jet>> get_jets(const std::vector<MOM*>& moms, double R,
                                                double ptmin=0*GeV, FJNS::JetAlgorithm alg=FJNS::antikt_algorithm) {
      // Make PseudoJets
      std::vector<FJNS::PseudoJet> constituents;
      for (const MOM* p : moms) constituents.push_back(HEPUtils::mk_pseudojet(*p));
      // Run clustering
      std::vector<FJNS::PseudoJet> jets = HEPUtils::get_jets(constituents, R, ptmin, alg);
      // Make newly-allocated Jets
      std::vector<std::shared_ptr<HEPUtils::Jet>> rtn;
      for (const FJNS::PseudoJet& j : jets) rtn.push_back(std::make_shared<HEPUtils::Jet>(HEPUtils::mk_p4(j)));
      return rtn;
    }


    inline bool object_in_cone(const HEPUtils::Event& e, const HEPUtils::P4& p4, double ptmin, double rmax, double rmin=0.05) {
      for (const HEPUtils::Particle* p : e.visible_particles())
        if (p->pT() > ptmin && HEPUtils::in_range(HEPUtils::deltaR_eta(p4, *p), rmin, rmax)) return true;
      for (const HEPUtils::Jet* j : e.jets())
        if (j->pT() > ptmin && HEPUtils::in_range(HEPUtils::deltaR_eta(p4, *j), rmin, rmax)) return true;
      return false;
    }


    template<typename MOMPTRS1, typename MOMPTRS2>
    void removeOverlap(MOMPTRS1& momstofilter, const MOMPTRS2& momstocmp, double deltaRMax, bool use_rapidity=false, double pTmax = DBL_MAX, double btageff = 0)
    {
      ifilter_reject(momstofilter, [&](const typename MOMPTRS1::value_type& mom1)
      {
        for (const typename MOMPTRS2::value_type& mom2 : momstocmp) {
          const double dR = (use_rapidity) ? deltaR_rap(mom1->mom(), mom2->mom()) : deltaR_eta(mom1->mom(), mom2->mom());
          if (dR < deltaRMax && mom1->pT() < pTmax && ( !amIaBJet(mom1) || !random_bool(btageff) ) ) return true;
        }
        return false;
      }, false);
    }

    template<typename MOMPTRS1, typename MOMPTRS2>
    void removeOverlap(MOMPTRS1& momstofilter, const MOMPTRS2& momstocmp, double (*deltaRMax)(const double), bool use_rapidity=false, double pTmax = DBL_MAX, double btageff = 0)
    {
      ifilter_reject(momstofilter, [&](const typename MOMPTRS1::value_type& mom1)
      {
        for (const typename MOMPTRS2::value_type& mom2 : momstocmp) {
          const double dR = (use_rapidity) ? deltaR_rap(mom1->mom(), mom2->mom()) : deltaR_eta(mom1->mom(), mom2->mom());
          if (dR < deltaRMax(mom1->pT()) && mom1->pT() < pTmax && ( !amIaBJet(mom1) || !random_bool(btageff) ) ) return true;
        }
        return false;
      }, false);
    }

    template<typename MOMPTRS1>
    void removeOverlapIfBjet(MOMPTRS1& momstofilter, std::vector<const HEPUtils::Jet*>& jets, double deltaRMax, bool use_rapidity=false, double pTmax = DBL_MAX)
    {
      ifilter_reject(momstofilter, [&](const typename MOMPTRS1::value_type& mom1)
      {
        for (const HEPUtils::Jet* jet : jets) {
          const double dR = (use_rapidity) ? deltaR_rap(mom1->mom(), jet->mom()) : deltaR_eta(mom1->mom(), jet->mom());
          if (dR < deltaRMax && mom1->pT() < pTmax && jet->btag() ) return true;
        }
        return false;
      }, false);
    }


    template <typename CONTAINER, typename FN>
    inline bool all_of(const CONTAINER& c, const FN& f) {
      return std::all_of(std::begin(c), std::end(c), f);
    }

    template <typename CONTAINER, typename FN>
    inline bool any_of(const CONTAINER& c, const FN& f) {
      return std::any_of(std::begin(c), std::end(c), f);
    }

    template <typename CONTAINER, typename FN>
    inline bool none_of(const CONTAINER& c, const FN& f) {
      return std::none_of(std::begin(c), std::end(c), f);
    }


    std::vector<std::vector<const HEPUtils::Particle*>> getSFOSpairs(std::vector<const HEPUtils::Particle*> particles);

    std::vector<std::vector<const HEPUtils::Particle*>> getOSpairs(std::vector<const HEPUtils::Particle*> particles);

    std::vector<std::vector<const HEPUtils::Particle*>> getSSpairs(std::vector<const HEPUtils::Particle*> particles);




    inline void sortBy(ParticlePtrs& particles, std::function<bool(const Particle*, const Particle*)> cmpfn) {
      std::sort(particles.begin(), particles.end(), cmpfn);
    }

    inline bool cmpParticlesByPt(const HEPUtils::Particle* lep1, const HEPUtils::Particle* lep2) { return lep1->pT() > lep2->pT(); }

    // Sort a particles list by decreasing pT
    inline void sortByPt(ParticlePtrs& particles) { sortBy(particles, cmpParticlesByPt); }


    inline void sortBy(JetPtrs& jets, std::function<bool(const Jet*, const Jet*)> cmpfn) {
      std::sort(jets.begin(), jets.end(), cmpfn);
    }

    inline bool cmpJetsByPt(const HEPUtils::Jet* jet1, const HEPUtils::Jet* jet2) { return jet1->pT() > jet2->pT(); }

    // Sort a jets list by decreasing pT
    inline void sortByPt(JetPtrs& jets) { sortBy(jets, cmpJetsByPt); }




    inline int countPt(const std::vector<const Particle*>& particles, double pTlim)
    {
        int sum = 0;
        for (const Particle* p : particles)
        {
          if (p->pT() > pTlim) { sum++; }
        }
        return sum;
    }

    inline int countPt(const std::vector<const Jet*>& jets, double pTlim)
    {
        int sum = 0;
        for (const Jet* j : jets)
        {
          if (j->pT() > pTlim) { sum++; }
        }
        return sum;
    }
    




    inline double scalarSumPt(const std::vector<const Particle*>& particles, double pTlim=0.)
    {
        double sum = 0.;
        for (const Particle* p : particles)
        { 
          if (p->pT() > pTlim) { sum += p->pT(); } 
        }
        return sum;
    }

    inline double scalarSumPt(const std::vector<const Jet*>& jets, double pTlim=0.)
    {
        double sum = 0.;
        for (const Jet* j : jets)
        { 
          if (j->pT() > pTlim) { sum += j->pT(); } 
        }
        return sum;
    }
    

  }

}
```


-------------------------------

Updated on 2022-07-20 at 17:18:46 +0000
