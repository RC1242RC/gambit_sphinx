// ====================================================================
// This file is part of FlexibleSUSY.
//
// FlexibleSUSY is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published
// by the Free Software Foundation, either version 3 of the License,
// or (at your option) any later version.
//
// FlexibleSUSY is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with FlexibleSUSY.  If not, see
// <http://www.gnu.org/licenses/>.
// ====================================================================

// File generated at Sat 26 May 2018 14:35:26

#include "ScalarSingletDM_Z2_observables.hpp"
#include "ScalarSingletDM_Z2_mass_eigenstates.hpp"
#include "ScalarSingletDM_Z2_a_muon.hpp"
#include "ScalarSingletDM_Z2_edm.hpp"
#include "ScalarSingletDM_Z2_effective_couplings.hpp"
#include "gm2calc_interface.hpp"
#include "eigen_utils.hpp"
#include "numerics2.hpp"
#include "wrappers.hpp"
#include "lowe.h"
#include "physical_input.hpp"

#define MODEL model
#define AMU a_muon
#define AMUUNCERTAINTY a_muon_uncertainty
#define AMUGM2CALC a_muon_gm2calc
#define AMUGM2CALCUNCERTAINTY a_muon_gm2calc_uncertainty
#define EDM0(p) edm_ ## p
#define EDM1(p,idx) edm_ ## p ## _ ## idx
#define EFFCPHIGGSPHOTONPHOTON eff_cp_higgs_photon_photon
#define EFFCPHIGGSGLUONGLUON eff_cp_higgs_gluon_gluon
#define EFFCPPSEUDOSCALARPHOTONPHOTON eff_cp_pseudoscalar_photon_photon
#define EFFCPPSEUDOSCALARGLUONGLUON eff_cp_pseudoscalar_gluon_gluon

#define ALPHA_S_MZ qedqcd.displayAlpha(softsusy::ALPHAS)
#define MWPole qedqcd.displayPoleMW()
#define MZPole qedqcd.displayPoleMZ()
#define MTPole qedqcd.displayPoleMt()
#define MBMB qedqcd.displayMbMb()
#define MTauPole qedqcd.displayPoleMtau()
#define MMPole qedqcd.displayPoleMmuon()

namespace flexiblesusy {

const int ScalarSingletDM_Z2_observables::NUMBER_OF_OBSERVABLES;

ScalarSingletDM_Z2_observables::ScalarSingletDM_Z2_observables()
   : a_muon(0)
   , eff_cp_higgs_photon_photon(0)
   , eff_cp_higgs_gluon_gluon(0)

{
}

Eigen::ArrayXd ScalarSingletDM_Z2_observables::get() const
{
   Eigen::ArrayXd vec(ScalarSingletDM_Z2_observables::NUMBER_OF_OBSERVABLES);

   vec(0) = a_muon;
   vec(1) = Re(eff_cp_higgs_photon_photon);
   vec(2) = Im(eff_cp_higgs_photon_photon);
   vec(3) = Re(eff_cp_higgs_gluon_gluon);
   vec(4) = Im(eff_cp_higgs_gluon_gluon);

   return vec;
}

std::vector<std::string> ScalarSingletDM_Z2_observables::get_names()
{
   std::vector<std::string> names(ScalarSingletDM_Z2_observables::NUMBER_OF_OBSERVABLES);

   names[0] = "a_muon";
   names[1] = "Re(eff_cp_higgs_photon_photon)";
   names[2] = "Im(eff_cp_higgs_photon_photon)";
   names[3] = "Re(eff_cp_higgs_gluon_gluon)";
   names[4] = "Im(eff_cp_higgs_gluon_gluon)";

   return names;
}

void ScalarSingletDM_Z2_observables::clear()
{
   a_muon = 0.;
   eff_cp_higgs_photon_photon = std::complex<double>(0.,0.);
   eff_cp_higgs_gluon_gluon = std::complex<double>(0.,0.);

}

void ScalarSingletDM_Z2_observables::set(const Eigen::ArrayXd& vec)
{
   assert(vec.rows() == ScalarSingletDM_Z2_observables::NUMBER_OF_OBSERVABLES);

   a_muon = vec(0);
   eff_cp_higgs_photon_photon = std::complex<double>(vec(1), vec(2));
   eff_cp_higgs_gluon_gluon = std::complex<double>(vec(3), vec(4));

}

ScalarSingletDM_Z2_observables calculate_observables(const ScalarSingletDM_Z2_mass_eigenstates& model,
                                              const softsusy::QedQcd& qedqcd,
                                              const Physical_input& physical_input,
                                              double scale)
{
   auto model_at_scale = model;

   if (scale > 0.)
      model_at_scale.run_to(scale);

   return calculate_observables(model_at_scale, qedqcd, physical_input);
}

ScalarSingletDM_Z2_observables calculate_observables(const ScalarSingletDM_Z2_mass_eigenstates& model,
                                              const softsusy::QedQcd& qedqcd,
                                              const Physical_input& physical_input)
{
   ScalarSingletDM_Z2_observables observables;

   ScalarSingletDM_Z2_effective_couplings effective_couplings(model, qedqcd, physical_input);
   effective_couplings.calculate_effective_couplings();

   observables.AMU = ScalarSingletDM_Z2_a_muon::calculate_a_muon(MODEL);
   observables.EFFCPHIGGSPHOTONPHOTON = effective_couplings.get_eff_CphhVPVP();
   observables.EFFCPHIGGSGLUONGLUON = effective_couplings.get_eff_CphhVGVG();

   return observables;
}

} // namespace flexiblesusy
