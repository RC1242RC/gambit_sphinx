//   GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///
///  \file
///  Util variables and functions for ColliderBit
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Andy Buckley
///  \author Abram Krislock
///  \author Anders Kvellestad
///  \author Pat Scott
///  \author Tomas Gonzalo
///
///  *********************************************

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

    /// Unit conversions (multiply to construct in standard units, divide to decode to that unit)
    static const double GeV = 1, MeV = 1e-3, TeV = 1e3;


    /// Use the HEPUtils Event without needing namespace qualification
    using HEPUtils::Event;
    /// Use the HEPUtils Particle without needing namespace qualification
    using HEPUtils::Particle;
    /// Use the HEPUtils Jet without needing namespace qualification
    using HEPUtils::Jet;
    /// Use the HEPUtils P4 four-vector without needing namespace qualification
    using HEPUtils::P4;

    /// Use the HEPUtils add_quad function without needing namespace qualification
    using HEPUtils::add_quad;

    /// Typedef for a vector of Particle pointers
    typedef std::vector<const HEPUtils::Particle*> ParticlePtrs;

    /// Typedef for a vector of Jet pointers
    typedef std::vector<const HEPUtils::Jet*> JetPtrs;

    /// @name Particle IDs
    //@{

    /// Identifier for jets true
    inline bool amIaJet(const HEPUtils::Jet *jet) { (void)jet; return true; }

    /// Indentifier for b-jets true
    inline bool amIaBJet(const HEPUtils::Jet *jet) { return jet->btag(); }

    /// Identifier for jets false
    inline bool amIaJet(const HEPUtils::Particle *part) { (void)part; return false; }

    /// Indentifier for b-jets true
    inline bool amIaBJet(const HEPUtils::Particle *part) { (void)part; return true; }

    //@}

    /// @name Particle-list filtering by cuts
    //@{

    /// Convenience combination of remove_if and erase
    template <typename CONTAINER, typename RMFN>
    inline void iremoveerase(CONTAINER& c, const RMFN& fn) {
      auto newend = std::remove_if(c.begin(), c.end(), fn);
      c.erase(newend, c.end());
    }

    /// In-place filter a supplied particle vector by rejecting those which fail a supplied cut
    inline void ifilter_reject(ParticlePtrs& particles,
                               std::function<bool(const Particle*)> rejfn, bool do_delete=true) {
      iremoveerase(particles, [&](const Particle* p) {
          const bool rm = rejfn(p);
          if (rm && do_delete) delete p;
          return rm;
        });
    }

    /// In-place filter a supplied particle vector by keeping those which pass a supplied cut
    inline void ifilter_select(ParticlePtrs& particles,
                               std::function<bool(const Particle*)> selfn, bool do_delete=true) {
      ifilter_reject(particles, [&](const Particle* p) { return !selfn(p); }, do_delete);
    }


    /// Filter a supplied particle vector by rejecting those which fail a supplied cut
    /// @todo Optimise by only copying those which are selected (filter_select is canonical)
    inline ParticlePtrs filter_reject(const ParticlePtrs& particles,
                                      std::function<bool(const Particle*)> rejfn, bool do_delete=true) {
      ParticlePtrs rtn = particles;
      ifilter_reject(rtn, rejfn, do_delete);
      return rtn;
    }

    /// Filter a supplied particle vector by keeping those which pass a supplied cut
    inline ParticlePtrs filter_select(const ParticlePtrs& particles,
                                      std::function<bool(const Particle*)> selfn, bool do_delete=true) {
      return filter_reject(particles, [&](const Particle* p) { return !selfn(p); }, do_delete);
    }

    //@}



    /// @name Jet-list filtering by cuts
    //@{

    /// In-place filter a supplied jet vector by rejecting those which fail a supplied cut
    inline void ifilter_reject(JetPtrs& jets,
                               std::function<bool(const Jet*)> rejfn, bool do_delete=true) {
      iremoveerase(jets, [&](const Jet* j) {
          const bool rm = rejfn(j);
          if (rm && do_delete) delete j;
          return rm;
        });
    }

    /// In-place filter a supplied jet vector by keeping those which pass a supplied cut
    inline void ifilter_select(JetPtrs& jets,
                               std::function<bool(const Jet*)> selfn, bool do_delete=true) {
      ifilter_reject(jets, [&](const Jet* j) { return !selfn(j); }, do_delete);
    }


    /// Filter a supplied particle vector by rejecting those which fail a supplied cut
    /// @todo Optimise by only copying those which are selected (filter_select is canonical)
    inline JetPtrs filter_reject(const JetPtrs& jets,
                                 std::function<bool(const Jet*)> rejfn, bool do_delete=true) {
      JetPtrs rtn = jets;
      ifilter_reject(rtn, rejfn, do_delete);
      return rtn;
    }

    /// Filter a supplied particle vector by keeping those which pass a supplied cut
    inline JetPtrs filter_select(const JetPtrs& jets,
                                 std::function<bool(const Jet*)> selfn, bool do_delete=true) {
      return filter_reject(jets, [&](const Jet* j) { return !selfn(j); }, do_delete);
    }

    //@}



    /// @todo Provide random selection functors from const, 1D map, 2D map, and eff functor



    /// @name Random booleans sampled from efficiency maps
    //@{

    /// Return a random true/false at a success rate given by a number
    bool random_bool(double eff);

    /// Return a random true/false at a success rate given by a 1D efficiency map
    inline bool random_bool(const HEPUtils::BinnedFn1D<double>& effmap, double x) {
      return random_bool( effmap.get_at(x) );
    }

    /// Return a random true/false at a success rate given by a 2D efficiency map
    inline bool random_bool(const HEPUtils::BinnedFn2D<double>& effmap, double x, double y) {
      return random_bool( effmap.get_at(x, y) );
    }

    //@}


    /// @name Random filtering by efficiency
    //@{

    /// Utility function for filtering a supplied particle vector by sampling wrt an efficiency scalar
    void filtereff(std::vector<const HEPUtils::Particle*>& particles, double eff, bool do_delete=false);

    /// Utility function for filtering a supplied particle vector by sampling an efficiency returned by a provided function object
    void filtereff(std::vector<const HEPUtils::Particle*>& particles, std::function<double(const HEPUtils::Particle*)> eff_fn, bool do_delete=false);

    /// Utility function for filtering a supplied particle vector by sampling wrt a binned 1D efficiency map in pT
    void filtereff_pt(std::vector<const HEPUtils::Particle*>& particles, const HEPUtils::BinnedFn1D<double>& eff_pt, bool do_delete=false);

    /// Utility function for filtering a supplied particle vector by sampling wrt a binned 2D efficiency map in |eta| and pT
    void filtereff_etapt(std::vector<const HEPUtils::Particle*>& particles, const HEPUtils::BinnedFn2D<double>& eff_etapt, bool do_delete=false);

    //@}


    /// @name Tagging
    //@{

    /// Randomly get a tag result (can be anything) from a 2D |eta|-pT efficiency map
    /// @todo Also need 1D? Sampling in what variable?
    inline bool has_tag(const HEPUtils::BinnedFn2D<double>& effmap, double eta, double pt) {
      try {
        return random_bool(effmap, fabs(eta), pt);
      } catch (...) {
        return false; // No tag if outside lookup range... be careful!
      }
    }

    /// Return a map<Jet*,bool> containing a generated b-tag for every jet in the input vector
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
      if (val < binedges.front()) return -1; ///< Below/out of histo range
      if (val >= binedges.back()) return allow_overflow ? int(binedges.size())-1 : -1; ///< Above/out of histo range
      return std::distance(binedges.begin(), --std::upper_bound(binedges.begin(), binedges.end(), val));
    }


    /// Make a vector of central bin values from a vector of bin edge values using linear interpolation
    inline std::vector<double> mk_bin_values(const std::vector<double>& binEdgeValues) {
      std::vector<double> results;
      results.reserve(binEdgeValues.size()-1);
      for (size_t i = 0; i < binEdgeValues.size()-1; ++i)
        results.push_back( (binEdgeValues[i] + binEdgeValues[i+1])/2.0 );
      return results;
    }
    /// Alias
    inline std::vector<double> makeBinValues(const std::vector<double>& binEdgeValues) {
      return mk_bin_values(binEdgeValues);
    }


    /// Run jet clustering from any P4-compatible momentum type
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


    /// Check if there's a physics object above ptmin in an annulus rmin..rmax around the given four-momentum p4
    inline bool object_in_cone(const HEPUtils::Event& e, const HEPUtils::P4& p4, double ptmin, double rmax, double rmin=0.05) {
      for (const HEPUtils::Particle* p : e.visible_particles())
        if (p->pT() > ptmin && HEPUtils::in_range(HEPUtils::deltaR_eta(p4, *p), rmin, rmax)) return true;
      for (const HEPUtils::Jet* j : e.jets())
        if (j->pT() > ptmin && HEPUtils::in_range(HEPUtils::deltaR_eta(p4, *j), rmin, rmax)) return true;
      return false;
    }


    /// Overlap removal -- discard from first list if within deltaRMax of any from the second list
    /// Optional arguments:
    ///  - use_rapidity = use rapidity instead of psedurapidity to compute deltaR. Defaults to False
    ///  - pTmax = only discard from first list with pT < pTmax. Defaults to DBL_MAX
    ///  - btageff = do not discard jets that have a b-tagging efficiency lower than btageff. Defaults to 0
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

    /// Overlap removal -- discard from first list if within deltaRmax of any from the second list.
    /// Overload of previous function where deltaRmax is a function of the pT of the first list
    /// Optional arguments:
    ///  - use_rapidity = use rapidity instead of psedurapidity to compute deltaR. Defaults to False
    ///  - pTmax = only discard from first list with pT < pTmax. Defaults to DBL_MAX
    ///  - btageff = do not discard jets that have a b-tagging efficiency lower than btageff. Defaults to 0
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

    /// Overlap removal for checking against b-jets -- discard from first list if within deltaRMax of a b-jet in the second list
    /// Optional arguments:
    ///  - use_rapidity = use rapidity instead of psedurapidity to compute deltaR. Defaults to False
    ///  - pTmax = only discard from first list with pT < pTmax. Defaults to DBL_MAX
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


    /// Non-iterator version of std::all_of
    template <typename CONTAINER, typename FN>
    inline bool all_of(const CONTAINER& c, const FN& f) {
      return std::all_of(std::begin(c), std::end(c), f);
    }

    /// Non-iterator version of std::any_of
    template <typename CONTAINER, typename FN>
    inline bool any_of(const CONTAINER& c, const FN& f) {
      return std::any_of(std::begin(c), std::end(c), f);
    }

    /// Non-iterator version of std::none_of
    template <typename CONTAINER, typename FN>
    inline bool none_of(const CONTAINER& c, const FN& f) {
      return std::none_of(std::begin(c), std::end(c), f);
    }


    /// Utility function for returning a collection of same-flavour, oppsosite-sign particle pairs
    std::vector<std::vector<const HEPUtils::Particle*>> getSFOSpairs(std::vector<const HEPUtils::Particle*> particles);

    /// Utility function for returning a collection of oppsosite-sign particle pairs
    std::vector<std::vector<const HEPUtils::Particle*>> getOSpairs(std::vector<const HEPUtils::Particle*> particles);

    /// Utility function for returning a collection of same-sign particle pairs
    std::vector<std::vector<const HEPUtils::Particle*>> getSSpairs(std::vector<const HEPUtils::Particle*> particles);


    /// @name Sorting
    //@{

    /// Particle-sorting function
    inline void sortBy(ParticlePtrs& particles, std::function<bool(const Particle*, const Particle*)> cmpfn) {
      std::sort(particles.begin(), particles.end(), cmpfn);
    }

    /// Comparison function to give a particles sorting order decreasing by pT
    inline bool cmpParticlesByPt(const HEPUtils::Particle* lep1, const HEPUtils::Particle* lep2) { return lep1->pT() > lep2->pT(); }

    // Sort a particles list by decreasing pT
    inline void sortByPt(ParticlePtrs& particles) { sortBy(particles, cmpParticlesByPt); }


    /// Jet-sorting function
    inline void sortBy(JetPtrs& jets, std::function<bool(const Jet*, const Jet*)> cmpfn) {
      std::sort(jets.begin(), jets.end(), cmpfn);
    }

    /// Comparison function to give a jets sorting order decreasing by pT
    inline bool cmpJetsByPt(const HEPUtils::Jet* jet1, const HEPUtils::Jet* jet2) { return jet1->pT() > jet2->pT(); }

    // Sort a jets list by decreasing pT
    inline void sortByPt(JetPtrs& jets) { sortBy(jets, cmpJetsByPt); }
    //@}


    /// @name Counting
    //@{

    /// Count number of particles that have pT > pTlim
    inline int countPt(const std::vector<const Particle*>& particles, double pTlim)
    {
        int sum = 0;
        for (const Particle* p : particles)
        {
          if (p->pT() > pTlim) { sum++; }
        }
        return sum;
    }

    /// Count number of jets that have pT > pTlim
    inline int countPt(const std::vector<const Jet*>& jets, double pTlim)
    {
        int sum = 0;
        for (const Jet* j : jets)
        {
          if (j->pT() > pTlim) { sum++; }
        }
        return sum;
    }
    
    //@}


    /// @name Summing pT
    //@{

    /// Scalar sum pT of particles with pT > pTlim (default pTlim = 0)
    inline double scalarSumPt(const std::vector<const Particle*>& particles, double pTlim=0.)
    {
        double sum = 0.;
        for (const Particle* p : particles)
        { 
          if (p->pT() > pTlim) { sum += p->pT(); } 
        }
        return sum;
    }

    /// Scalar sum pT of jets
    inline double scalarSumPt(const std::vector<const Jet*>& jets, double pTlim=0.)
    {
        double sum = 0.;
        for (const Jet* j : jets)
        { 
          if (j->pT() > pTlim) { sum += j->pT(); } 
        }
        return sum;
    }
    
    //@}

  }

}
