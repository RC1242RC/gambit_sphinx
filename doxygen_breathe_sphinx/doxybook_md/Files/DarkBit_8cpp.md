---
title: 'file src/DarkBit.cpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::DarkBit](/documentation/code/namespaces/namespacegambit_1_1darkbit/)**  |

## Detailed Description


**Author**: 

  * Torsten Bringmann ([torsten.bringmann@desy.de](mailto:torsten.bringmann@desy.de)) 
  * Christoph Weniger ([c.weniger@uva.nl](mailto:c.weniger@uva.nl)) 
  * Lars A. Dal ([l.a.dal@fys.uio.no](mailto:l.a.dal@fys.uio.no)) 
  * Christopher Savage ([chris@savage.name](mailto:chris@savage.name)) 
  * Pat Scott ([pscott@imperial.ac.uk](mailto:pscott@imperial.ac.uk)) 
  * Sebastian Wild ([sebastian.wild@ph.tum.de](mailto:sebastian.wild@ph.tum.de)) 
  * Tomas Gonzalo ([gonzalo@physik.rwth-aachen.de](mailto:gonzalo@physik.rwth-aachen.de)) 


**Date**: 

  * 2013 Jun 
  * 2014 Mar
  * 2013 Jul - 2015 May
  * 2014 Mar, Jul, Sep, Oct
  * 2014 Oct 
  * 2015 Jan, Feb
  * 2014 Mar 
  * 2015 Mar
  * 2016 Aug
  * 2021 Sep


Central module file of DarkBit. Calculates dark matter related observables.

Most of the model- or observable-specific code is stored in separate source files.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/DarkBit/DarkBit_rollcall.hpp"
#include "gambit/DarkBit/DarkBit_utils.hpp"

namespace Gambit
{
  namespace DarkBit
  {

    //
    //                 Simple DM property extractors
    //

    void WIMP_properties(WIMPprops &props)
    {
      using namespace Pipes::WIMP_properties;
      props.name = *Dep::DarkMatter_ID;
      props.spinx2 = Models::ParticleDB().get_spinx2(props.name);
      props.sc = not Models::ParticleDB().has_antiparticle(props.name);
      props.conjugate = props.sc ? props.name : *Dep::DarkMatterConj_ID;
      if(props.conjugate != Models::ParticleDB().get_antiparticle(props.name))
      {
        DarkBit_error().raise(LOCAL_INFO, "WIMP conjugate name does not match the particle database, please change it.");
      }

      // Get wimp mass from relevant spectrum
      if(ModelInUse("MSSM63atQ") or ModelInUse("MSSM63atMGUT"))
        props.mass = abs(Dep::MSSM_spectrum->get(Par::Pole_Mass, props.name));
      if(ModelInUse("ScalarSingletDM_Z2_running"))
        props.mass = Dep::ScalarSingletDM_Z2_spectrum->get(Par::Pole_Mass, props.name);
      if(ModelInUse("ScalarSingletDM_Z3_running"))
        props.mass = Dep::ScalarSingletDM_Z3_spectrum->get(Par::Pole_Mass, props.name);
      if(ModelInUse("VectorSingletDM_Z2"))
        props.mass = Dep::VectorSingletDM_Z2_spectrum->get(Par::Pole_Mass, props.name);
      if(ModelInUse("MajoranaSingletDM_Z2"))
        props.mass = Dep::MajoranaSingletDM_Z2_spectrum->get(Par::Pole_Mass, props.name);
      if(ModelInUse("DiracSingletDM_Z2"))
        props.mass = Dep::DiracSingletDM_Z2_spectrum->get(Par::Pole_Mass, props.name);
      if(ModelInUse("AnnihilatingDM_mixture") or ModelInUse("DecayingDM_mixture"))
        props.mass = *Param["mass"];
      if(ModelInUse("NREO_scalarDM") or ModelInUse("NREO_MajoranaDM") or ModelInUse("NREO_DiracDM"))
        props.mass = *Param["m"];
      if(ModelInUse("MDM"))
        props.mass = Dep::MDM_spectrum->get(Par::Pole_Mass, props.name);
      if(ModelInUse("DMEFT"))
        props.mass = Dep::DMEFT_spectrum->get(Par::Pole_Mass, props.name);
    }

    void mwimp_generic(double &result)
    {
      using namespace Pipes::mwimp_generic;
      result = Dep::WIMP_properties->mass;
      if (result < 0.0) DarkBit_error().raise(LOCAL_INFO, "Negative WIMP mass detected.");
    }

    void spinwimpx2_generic(unsigned int &result)
    {
      using namespace Pipes::spinwimpx2_generic;
      result = Dep::WIMP_properties->spinx2;
    }

    void wimp_sc_generic(bool &result)
    {
      using namespace Pipes::wimp_sc_generic;
      result = Dep::WIMP_properties->sc;
    }

    void sigmav_late_universe(double &result)
    {
      using namespace Pipes::sigmav_late_universe;
      std::string DMid = *Dep::DarkMatter_ID;
      std::string DMbarid = *Dep::DarkMatterConj_ID;
      TH_Process annProc = Dep::TH_ProcessCatalog->getProcess(DMid, DMbarid);
      result = 0.0;
      // Add all the regular channels
      for (std::vector<TH_Channel>::iterator it = annProc.channelList.begin();
          it != annProc.channelList.end(); ++it)
      {
        if ( it->nFinalStates == 2 )
        {
          // (sv)(v=0) for two-body final state
          double yield = it->genRate->bind("v")->eval(0.);
          if (yield >= 0.) result += yield;
        }
      }
      // Add invisible contributions
      double yield = annProc.genRateMisc->bind("v")->eval(0.);
      if (yield >= 0.) result += yield;
    }

    void sigmav_late_universe_MicrOmegas(double &result)
    {
      using namespace Pipes::sigmav_late_universe_MicrOmegas;

      // set requested spectra to NULL since we don't need them
      double * SpNe=NULL,*SpNm=NULL,*SpNl=NULL;
      double * SpA=NULL,*SpE=NULL,*SpP=NULL;
      int err;

      // TODO: Add option to choose options for calculation from MicrOmegas (right now all effects are turned on)
      result = BEreq::calcSpectrum(byVal(3),byVal(SpA),byVal(SpE),byVal(SpP),byVal(SpNe),byVal(SpNm),byVal(SpNl) ,byVal(&err));

      if (err != 0 )
      {
         DarkBit_error().raise(LOCAL_INFO, "MicrOmegas spectrum calculation returned error code = " + std::to_string(err));
      }

    }

    void DM_process_from_ProcessCatalog(std::string &result)
    {
      using namespace Pipes::DM_process_from_ProcessCatalog;
      
      // Only need to check this once.
      static bool first = true;
      if (first)
      {
        // Can we find a process that is a decay?
        // (This logic used so that this capability does not depend on DarkMatterConj_ID)
        const TH_Process* p = (*Dep::TH_ProcessCatalog).find(*Dep::DarkMatter_ID);

        // If not, it's an annihilation.
        if (p == NULL) result = "annihilation";
        else result = "decay";
        first = false;
      }
      
    }


    //
    //        Extraction of local and global dark matter halo properties
    //


    double profile_gNFW(double rhos, double rs, double alpha, double beta, double gamma, double r)
    { return pow(2, (beta-gamma)/alpha)*rhos/pow(r/rs, gamma)/pow(1+pow(r/rs, alpha), (beta-gamma)/alpha); }

    double profile_Einasto(double rhos, double rs, double alpha, double r)
    { return rhos*exp((-2.0/alpha)*(pow(r/rs, alpha)-1)); }

    void GalacticHalo_gNFW(GalacticHaloProperties &result)
    {
      using namespace Pipes::GalacticHalo_gNFW;
      double rhos  = *Param["rhos"];
      double rs    = *Param["rs"];
      double r_sun = *Param["r_sun"];
      double alpha = *Param["alpha"];
      double beta  = *Param["beta"];
      double gamma = *Param["gamma"];
      result.DensityProfile = daFunk::func(profile_gNFW, rhos, rs, alpha, beta, gamma, daFunk::var("r"));
      result.r_sun = r_sun;
    }

    void GalacticHalo_Einasto(GalacticHaloProperties &result)
    {
      using namespace Pipes::GalacticHalo_Einasto;
      double rhos  = *Param["rhos"];
      double rs    = *Param["rs"];
      double r_sun = *Param["r_sun"];
      double alpha = *Param["alpha"];
      result.DensityProfile = daFunk::func(profile_Einasto, rhos, rs, alpha, daFunk::var("r"));
      result.r_sun = r_sun;
    }

    void ExtractLocalMaxwellianHalo(LocalMaxwellianHalo &result)
    {
      using namespace Pipes::ExtractLocalMaxwellianHalo;
      double rho0  = *Param["rho0"];
      double v0  = *Param["v0"];
      double vesc  = *Param["vesc"];
      double vrot  = *Param["vrot"];
      result.rho0 = rho0;
      result.v0 = v0;
      result.vesc = vesc;
      result.vrot = vrot;
    }

    //
    //                        Decaying dark matter
    //

// TODO: Temporarily disabled until project is ready
/*
    void DecDM_branching_el(double &result)
    {
      using namespace Pipes::DecDM_branching_el;

      result = 0.0;
      std::string DM_ID = *Dep::DarkMatter_ID;

      // Check whether the process catalog has the decay prosses
      if (Dep::TH_ProcessCatalog->find(DM_ID) != NULL)
      {
        const TH_Channel* dec_channel = (*Dep::TH_ProcessCatalog).getProcess(DM_ID).find({"e-_1", "e+_1"});
        if (dec_channel != NULL)
        {
          double total_width = *Dep::DM_width;
          double partial_width = dec_channel->genRate->bind()->eval();
          result = partial_width / total_width;
        }
      }
    }

    void DecDM_branching_ph(double &result)
    {
      using namespace Pipes::DecDM_branching_ph;

      result = 0.0;
      std::string DM_ID = *Dep::DarkMatter_ID;

      // Check whether the process catalog has the decay prosses
      if (Dep::TH_ProcessCatalog->find(DM_ID) != NULL)
      {
        const TH_Channel* dec_channel = (*Dep::TH_ProcessCatalog).getProcess(DM_ID).find({"gamma", "gamma"});
        if (dec_channel != NULL)
        {
          double total_width = *Dep::DM_width;
          double partial_width = dec_channel->genRate->bind()->eval();
          result = partial_width / total_width;
        }
      }
    }
*/
    //
    //                          DarkBit Unit Test
    //

    void UnitTest_DarkBit(int &result)
    {
      using namespace Pipes::UnitTest_DarkBit;
      using DarkBit_utils::gamma3bdy_limits;
      /* This function depends on all relevant DM observables (indirect and
       * direct) and dumps them into convenient files in YAML format, which
       * afterwards can be checked against the expectations.
       */

      double M_DM =
        Dep::TH_ProcessCatalog->getParticleProperty(*Dep::DarkMatter_ID).mass;
      double Gps = (*Dep::DD_couplings).gps;
      double Gpa = (*Dep::DD_couplings).gpa;
      double Gns = (*Dep::DD_couplings).gns;
      double Gna = (*Dep::DD_couplings).gna;
      double oh2 = *Dep::RD_oh2;

      std::string DMid = *Dep::DarkMatter_ID;
      std::string DMbarid = *Dep::DarkMatterConj_ID;
      TH_Process annProc = (*Dep::TH_ProcessCatalog).getProcess(DMid, DMbarid);
      daFunk::Funk spectrum = (*Dep::GA_Yield)->set("v", 0.);

      std::ostringstream filename;
      /*
      static unsigned int counter = 0;
      filename << runOptions->getValueOrDef<std::string>("UnitTest_DarkBit",
          "fileroot");
      filename << "_" << counter << ".yml";
      counter++;
      */
      filename << runOptions->getValueOrDef<std::string>("UnitTest.yaml", "filename");

      std::ofstream os;
      os.open(filename.str());
      if(os)
      {
        // Standard output.
        os << "# Direct detection couplings\n";
        os << "DDcouplings:\n";
        os << "  gps: " << Gps << "\n";
        os << "  gpa: " << Gpa << "\n";
        os << "  gns: " << Gns << "\n";
        os << "  gna: " << Gna << "\n";
        os << "\n";
        os << "# Particle masses [GeV] \n";
        os << "ParticleMasses:\n";
        os << "  Mchi: " << M_DM << "\n";
        os << "\n";
        os << "# Relic density Omega h^2\n";
        os << "RelicDensity:\n";
        os << "  oh2: " << oh2 << "\n";
        os << "\n";

        // Output gamma-ray spectrum (grid be set in YAML file).
        double x_min =
          runOptions->getValueOrDef<double>(0.1, "GA_AnnYield", "Emin");
        double x_max =
          runOptions->getValueOrDef<double>(10000, "GA_AnnYield", "Emax");
        int n = runOptions->getValueOrDef<double>(26, "GA_AnnYield", "nbins");
        // from 0.1 to 500 GeV
        std::vector<double> x = daFunk::logspace(log10(x_min), log10(x_max), n);
        std::vector<double> y = spectrum->bind("E")->vect(x);
        os << "# Annihilation spectrum dNdE [1/GeV]\n";
        os << "GammaRaySpectrum:\n";
        os << "  E: [";
        for (std::vector<double>::iterator it = x.begin(); it != x.end(); it++)
          os << *it << ", ";
        os  << "]\n";
        os << "  dNdE: [";
        for (std::vector<double>::iterator it = y.begin(); it != y.end(); it++)
          os << *it << ", ";
        os  << "]\n";
        os << std::endl;

        os << "# Annihilation rates\n";
        os << "AnnihilationRates:\n";
        for (std::vector<TH_Channel>::iterator it = annProc.channelList.begin();
            it != annProc.channelList.end(); ++it)
        {
          os << "  ";
          for (std::vector<std::string>::iterator
              jt = it->finalStateIDs.begin(); jt!=it->finalStateIDs.end(); jt++)
          {
            os << *jt << "";
          }
          if (it->finalStateIDs.size() == 2)
            os << ": " << it->genRate->bind("v")->eval(0);
          if (it->finalStateIDs.size() == 3)
          {
            double m1 = (*Dep::TH_ProcessCatalog).getParticleProperty(
                it->finalStateIDs[1]).mass;
            double m2 = (*Dep::TH_ProcessCatalog).getParticleProperty(
                it->finalStateIDs[2]).mass;
            double mass = M_DM;
            daFunk::Funk E1_low =  daFunk::func(gamma3bdy_limits<0>, daFunk::var("E"), mass, m1, m2);
            daFunk::Funk E1_high =  daFunk::func(gamma3bdy_limits<1>, daFunk::var("E"), mass, m1, m2);
            daFunk::Funk dsigmavde = it->genRate->gsl_integration("E1", E1_low, E1_high)->set_epsrel(1e-3)->set("v", 0);
            auto xgrid = daFunk::logspace(-2, 3, 1000);
            auto ygrid = daFunk::logspace(-2, 3, 1000);
            for ( size_t i = 0; i<xgrid.size(); i++ )
            {
              ygrid[i] = dsigmavde->bind("E")->eval(xgrid[i]);
            }
            auto interp = daFunk::interp("E", xgrid, ygrid);
            double svTOT = interp->gsl_integration("E", 10., 20.)->set_epsabs(1e-3)->bind()->eval();
            os << ": " << svTOT;
          }
          os << "\n";
        }
        os << std::endl;
      }
      else
      {
        logger() << "Warning: outputfile not open for writing." << EOM;
      }
      os.close();
      result = 0;
    }
  }
}
```


-------------------------------

Updated on 2022-07-20 at 16:54:08 +0000