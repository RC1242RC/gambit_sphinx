---
title: 'namespace Gambit::PrecisionBit'

description: "[No description available]"

---






[No description available]

## Functions

|                | Name           |
| -------------- | -------------- |
| void | **[FeynHiggs_precision_edm_e](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-feynhiggs-precision-edm-e)**(double & result) |
| void | **[FeynHiggs_precision_edm_n](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-feynhiggs-precision-edm-n)**(double & result) |
| void | **[FeynHiggs_precision_edm_hg](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-feynhiggs-precision-edm-hg)**(double & result) |
| void | **[FeynHiggs_precision_gm2](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-feynhiggs-precision-gm2)**(triplet< double > & result) |
| void | **[FeynHiggs_precision_deltarho](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-feynhiggs-precision-deltarho)**(triplet< double > & result) |
| void | **[FeynHiggs_precision_mw](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-feynhiggs-precision-mw)**(triplet< double > & result) |
| void | **[FeynHiggs_precision_sinW2](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-feynhiggs-precision-sinw2)**(triplet< double > & result) |
| void | **[mw_from_SM_spectrum](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-mw-from-sm-spectrum)**(triplet< double > & result) |
| void | **[mw_from_ScalarSingletDM_Z2_spectrum](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-mw-from-scalarsingletdm-z2-spectrum)**(triplet< double > & result) |
| void | **[mw_from_ScalarSingletDM_Z3_spectrum](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-mw-from-scalarsingletdm-z3-spectrum)**(triplet< double > & result) |
| void | **[mw_from_VectorSingletDM_Z2_spectrum](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-mw-from-vectorsingletdm-z2-spectrum)**(triplet< double > & result) |
| void | **[mw_from_MajoranaSingletDM_Z2_spectrum](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-mw-from-majoranasingletdm-z2-spectrum)**(triplet< double > & result) |
| void | **[mw_from_DiracSingletDM_Z2_spectrum](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-mw-from-diracsingletdm-z2-spectrum)**(triplet< double > & result) |
| void | **[mw_from_MSSM_spectrum](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-mw-from-mssm-spectrum)**(triplet< double > & result) |
| void | **[mh_from_SM_spectrum](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-mh-from-sm-spectrum)**(triplet< double > & result) |
| void | **[mh_from_ScalarSingletDM_Z2_spectrum](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-mh-from-scalarsingletdm-z2-spectrum)**(triplet< double > & result) |
| void | **[mh_from_ScalarSingletDM_Z3_spectrum](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-mh-from-scalarsingletdm-z3-spectrum)**(triplet< double > & result) |
| void | **[mh_from_MSSM_spectrum](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-mh-from-mssm-spectrum)**(triplet< double > & result) |
| void | **[FeynHiggs_PrecisionObs](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-feynhiggs-precisionobs)**([fh_PrecisionObs_container](/documentation/code/classes/structgambit_1_1fh__precisionobs__container/) & result) |
| void | **[update_W_masses](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-update-w-masses)**(SubSpectrum & HE, SubSpectrum & LE, const triplet< double > & prec_mw, bool allow_fallback)<br>Helper function to set W masses.  |
| void | **[update_H_masses](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-update-h-masses)**(SubSpectrum & HE, int n_higgs, const str * higgses, int central, int error, std::vector< triplet< double > > & MH, bool allow_fallback)<br>Helper function to set arbitrary number of H masses.  |
| void | **[make_MSSM_precision_spectrum_none](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-make-mssm-precision-spectrum-none)**(Spectrum & improved_spec)<br>Precision MSSM spectrum manufacturer that does nothing but relabel the unimproved spectrum.  |
| void | **[make_MSSM_precision_spectrum_W](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-make-mssm-precision-spectrum-w)**(Spectrum & improved_spec)<br>Precision MSSM spectrum manufacturer with precision W mass only.  |
| void | **[make_MSSM_precision_spectrum_H](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-make-mssm-precision-spectrum-h)**(Spectrum & improved_spec)<br>Precision MSSM spectrum manufacturer with precision SM-like Higgs mass.  |
| void | **[make_MSSM_precision_spectrum_H_W](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-make-mssm-precision-spectrum-h-w)**(Spectrum & improved_spec)<br>Precision MSSM spectrum manufacturer with precision W and SM-like Higgs masses.  |
| void | **[make_MSSM_precision_spectrum_4H_W](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-make-mssm-precision-spectrum-4h-w)**(Spectrum & improved_spec)<br>Precision MSSM spectrum manufacturer with precision W and 2HDM (4x) Higgs masses.  |
| void | **[lnL_Z_mass](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-lnl-z-mass)**(double & result) |
| void | **[lnL_t_mass](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-lnl-t-mass)**(double & result) |
| void | **[lnL_mtrun](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-lnl-mtrun)**(double & result)<br>Running top mass MS-bar likelihood.  |
| void | **[lnL_mbmb](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-lnl-mbmb)**(double & result) |
| void | **[lnL_mcmc](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-lnl-mcmc)**(double & result) |
| void | **[lnL_light_quark_masses](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-lnl-light-quark-masses)**(double & result)<br>Likelihoods for light quark mass ratios. At the moment, all are just gaussians. Default data from PDG [http://PDG.LBL.GOV](http://PDG.LBL.GOV) 26/06/2017. Likelihoods apply to MSbar masses at the scale mu = 2 GeV. m_u/m_d = 0.38-0.58 m_s / ((m_u + m_d)/2) = 27.3 +/- 0.7 m_s = (96 +/- 4) MeV.  |
| void | **[lnL_alpha_em](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-lnl-alpha-em)**(double & result) |
| void | **[lnL_alpha_s](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-lnl-alpha-s)**(double & result) |
| void | **[lnL_GF](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-lnl-gf)**(double & result) |
| void | **[lnL_W_mass](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-lnl-w-mass)**(double & result)<br>W boson mass likelihood.  |
| void | **[lnL_h_mass](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-lnl-h-mass)**(double & result) |
| void | **[lnL_sinW2_eff](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-lnl-sinw2-eff)**(double & result)<br>Reference: [http://pdg.lbl.gov/2016/reviews/rpp2016-rev-qcd.pdf](http://pdg.lbl.gov/2016/reviews/rpp2016-rev-qcd.pdf) = C. Patrignani et al. (Particle Data Group), Chin. Phys. C, 40, 100001 (2016).  |
| void | **[lnL_deltarho](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-lnl-deltarho)**(double & result) |
| void | **[gm2_SM_ee](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-gm2-sm-ee)**(triplet< double > & result)<br>g-2 in SM from e+e- data  |
| void | **[gm2_SM_tautau](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-gm2-sm-tautau)**(triplet< double > & result)<br>g-2 in SM from tau+tau- data  |
| void | **[lnL_gm2](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-lnl-gm2)**(double & result)<br>g-2 likelihood  |
| void | **[GM2C_SUSY](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-gm2c-susy)**(triplet< double > & result)<br>Calculate a_mu_SUSY using the gm2calc backend.  |
| void | **[SuperIso_muon_gm2](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-superiso-muon-gm2)**(triplet< double > & result)<br>Calculation of g-2 with SuperIso.  |
| void | **[SP_PrecisionObs](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-sp-precisionobs)**(double & result) |
| void | **[RHN_sinW2_eff](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-rhn-sinw2-eff)**(triplet< double > & result) |
| void | **[RHN_mw](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-rhn-mw)**(triplet< double > & result) |
| void | **[lnL_neutron_lifetime_beam_Yue](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-lnl-neutron-lifetime-beam-yue)**(double & result)<br>Beam method: Phys. Rev. Lett. 111, 222501 (2013) [https://arxiv.org/abs/1309.2623](https://arxiv.org/abs/1309.2623).  |
| void | **[lnL_neutron_lifetime_bottle_PDG19](/documentation/code/namespaces/namespacegambit_1_1precisionbit/#function-lnl-neutron-lifetime-bottle-pdg19)**(double & result)<br>Bottle method: average recommended by PDG 2019 [http://pdg.lbl.gov/2019/listings/rpp2019-list-n.pdf](http://pdg.lbl.gov/2019/listings/rpp2019-list-n.pdf).  |


## Functions Documentation

### function FeynHiggs_precision_edm_e

```
void FeynHiggs_precision_edm_e(
    double & result
)
```


FeynHiggs precision extractors 


### function FeynHiggs_precision_edm_n

```
void FeynHiggs_precision_edm_n(
    double & result
)
```


### function FeynHiggs_precision_edm_hg

```
void FeynHiggs_precision_edm_hg(
    double & result
)
```


### function FeynHiggs_precision_gm2

```
void FeynHiggs_precision_gm2(
    triplet< double > & result
)
```


### function FeynHiggs_precision_deltarho

```
void FeynHiggs_precision_deltarho(
    triplet< double > & result
)
```


### function FeynHiggs_precision_mw

```
void FeynHiggs_precision_mw(
    triplet< double > & result
)
```


### function FeynHiggs_precision_sinW2

```
void FeynHiggs_precision_sinW2(
    triplet< double > & result
)
```


### function mw_from_SM_spectrum

```
void mw_from_SM_spectrum(
    triplet< double > & result
)
```


Basic mass extractors for different types of spectra, for use with precision likelihoods and other things not needing a whole spectrum object. 


### function mw_from_ScalarSingletDM_Z2_spectrum

```
void mw_from_ScalarSingletDM_Z2_spectrum(
    triplet< double > & result
)
```


### function mw_from_ScalarSingletDM_Z3_spectrum

```
void mw_from_ScalarSingletDM_Z3_spectrum(
    triplet< double > & result
)
```


### function mw_from_VectorSingletDM_Z2_spectrum

```
void mw_from_VectorSingletDM_Z2_spectrum(
    triplet< double > & result
)
```


### function mw_from_MajoranaSingletDM_Z2_spectrum

```
void mw_from_MajoranaSingletDM_Z2_spectrum(
    triplet< double > & result
)
```


### function mw_from_DiracSingletDM_Z2_spectrum

```
void mw_from_DiracSingletDM_Z2_spectrum(
    triplet< double > & result
)
```


### function mw_from_MSSM_spectrum

```
void mw_from_MSSM_spectrum(
    triplet< double > & result
)
```


### function mh_from_SM_spectrum

```
void mh_from_SM_spectrum(
    triplet< double > & result
)
```


### function mh_from_ScalarSingletDM_Z2_spectrum

```
void mh_from_ScalarSingletDM_Z2_spectrum(
    triplet< double > & result
)
```


### function mh_from_ScalarSingletDM_Z3_spectrum

```
void mh_from_ScalarSingletDM_Z3_spectrum(
    triplet< double > & result
)
```


### function mh_from_MSSM_spectrum

```
void mh_from_MSSM_spectrum(
    triplet< double > & result
)
```


### function FeynHiggs_PrecisionObs

```
void FeynHiggs_PrecisionObs(
    fh_PrecisionObs_container & result
)
```


### function update_W_masses

```
void update_W_masses(
    SubSpectrum & HE,
    SubSpectrum & LE,
    const triplet< double > & prec_mw,
    bool allow_fallback
)
```

Helper function to set W masses. 

### function update_H_masses

```
void update_H_masses(
    SubSpectrum & HE,
    int n_higgs,
    const str * higgses,
    int central,
    int error,
    std::vector< triplet< double > > & MH,
    bool allow_fallback
)
```

Helper function to set arbitrary number of H masses. 

### function make_MSSM_precision_spectrum_none

```
void make_MSSM_precision_spectrum_none(
    Spectrum & improved_spec
)
```

Precision MSSM spectrum manufacturer that does nothing but relabel the unimproved spectrum. 

### function make_MSSM_precision_spectrum_W

```
void make_MSSM_precision_spectrum_W(
    Spectrum & improved_spec
)
```

Precision MSSM spectrum manufacturer with precision W mass only. 

### function make_MSSM_precision_spectrum_H

```
void make_MSSM_precision_spectrum_H(
    Spectrum & improved_spec
)
```

Precision MSSM spectrum manufacturer with precision SM-like Higgs mass. 

### function make_MSSM_precision_spectrum_H_W

```
void make_MSSM_precision_spectrum_H_W(
    Spectrum & improved_spec
)
```

Precision MSSM spectrum manufacturer with precision W and SM-like Higgs masses. 

### function make_MSSM_precision_spectrum_4H_W

```
void make_MSSM_precision_spectrum_4H_W(
    Spectrum & improved_spec
)
```

Precision MSSM spectrum manufacturer with precision W and 2HDM (4x) Higgs masses. 

### function lnL_Z_mass

```
void lnL_Z_mass(
    double & result
)
```


Z boson mass likelihood M_Z (Breit-Wigner mass parameter ~ pole) = 91.1876 +/- 0.0021 GeV (1 sigma), Gaussian. Reference: [http://pdg.lbl.gov/2016/reviews/rpp2016-rev-qcd.pdf](http://pdg.lbl.gov/2016/reviews/rpp2016-rev-qcd.pdf) = C. Patrignani et al. (Particle Data Group), Chin. Phys. C, 40, 100001 (2016). 


Option profile_systematics<bool>: Use likelihood version that has been profiled over systematic errors (default false)


### function lnL_t_mass

```
void lnL_t_mass(
    double & result
)
```


t quark mass likelihood m_t (pole) = 173.34 +/- 0.76 GeV (1 sigma), Gaussian. Reference: [http://arxiv.org/abs/1403.4427](http://arxiv.org/abs/1403.4427)


Option profile_systematics<bool>: Use likelihood version that has been profiled over systematic errors (default false)


### function lnL_mtrun

```
void lnL_mtrun(
    double & result
)
```

Running top mass MS-bar likelihood. 

This uses a special running MS-bar top mass input parameter at the scale mtop from ATLAS. Reference: [https://arxiv.org/pdf/1905.02302.pdf](https://arxiv.org/pdf/1905.02302.pdf) (see table 2, page 14)

The asymmetric errors are averaged. 


### function lnL_mbmb

```
void lnL_mbmb(
    double & result
)
```


b quark mass likelihood m_b (mb)^MSbar = 4.18 +/- 0.03 GeV (1 sigma), Gaussian. Reference: [http://pdg.lbl.gov/2016/reviews/rpp2016-rev-qcd.pdf](http://pdg.lbl.gov/2016/reviews/rpp2016-rev-qcd.pdf) = C. Patrignani et al. (Particle Data Group), Chin. Phys. C, 40, 100001 (2016). 


Option profile_systematics<bool>: Use likelihood version that has been profiled over systematic errors (default false)


### function lnL_mcmc

```
void lnL_mcmc(
    double & result
)
```


c quark mass likelihood m_c (mc)^MSbar = 1.28 +/- 0.03 GeV (1 sigma), Gaussian. Reference: [http://pdg.lbl.gov/2016/reviews/rpp2016-rev-qcd.pdf](http://pdg.lbl.gov/2016/reviews/rpp2016-rev-qcd.pdf) = C. Patrignani et al. (Particle Data Group), Chin. Phys. C, 40, 100001 (2016). 


Option profile_systematics<bool>: Use likelihood version that has been profiled over systematic errors (default false)


### function lnL_light_quark_masses

```
void lnL_light_quark_masses(
    double & result
)
```

Likelihoods for light quark mass ratios. At the moment, all are just gaussians. Default data from PDG [http://PDG.LBL.GOV](http://PDG.LBL.GOV) 26/06/2017. Likelihoods apply to MSbar masses at the scale mu = 2 GeV. m_u/m_d = 0.38-0.58 m_s / ((m_u + m_d)/2) = 27.3 +/- 0.7 m_s = (96 +/- 4) MeV. 

Option profile_systematics<bool>: Use likelihood version that has been profiled over systematic errors (default false)


### function lnL_alpha_em

```
void lnL_alpha_em(
    double & result
)
```


alpha^{-1}(mZ)^MSbar likelihood alpha^{-1}(mZ)^MSbar = 127.950 +/- 0.017 (1 sigma), Gaussian. (PDG global SM fit) Reference: [http://pdg.lbl.gov/2016/reviews/rpp2016-rev-standard-model.pdf](http://pdg.lbl.gov/2016/reviews/rpp2016-rev-standard-model.pdf) = C. Patrignani et al. (Particle Data Group), Chin. Phys. C, 40, 100001 (2016). 


Option profile_systematics<bool>: Use likelihood version that has been profiled over systematic errors (default false)


### function lnL_alpha_s

```
void lnL_alpha_s(
    double & result
)
```


alpha_s(mZ)^MSbar likelihood alpha_s(mZ)^MSbar = 0.1181 +/- 0.0011 (1 sigma), Gaussian. Reference: [http://pdg.lbl.gov/2016/reviews/rpp2016-rev-qcd.pdf](http://pdg.lbl.gov/2016/reviews/rpp2016-rev-qcd.pdf) = C. Patrignani et al. (Particle Data Group), Chin. Phys. C, 40, 100001 (2016). 


Option profile_systematics<bool>: Use likelihood version that has been profiled over systematic errors (default false)


### function lnL_GF

```
void lnL_GF(
    double & result
)
```


G_Fermi likelihood G_Fermi = (1.1663787 +/- 0.0000006) * 10^-5 GeV^-2 (1 sigma), Gaussian. Reference: [http://pdg.lbl.gov/2016/reviews/rpp2016-rev-qcd.pdf](http://pdg.lbl.gov/2016/reviews/rpp2016-rev-qcd.pdf) = C. Patrignani et al. (Particle Data Group), Chin. Phys. C, 40, 100001 (2016). 


Option profile_systematics<bool>: Use likelihood version that has been profiled over systematic errors (default false)


### function lnL_W_mass

```
void lnL_W_mass(
    double & result
)
```

W boson mass likelihood. 

Option profile_systematics<bool>: Use likelihood version that has been profiled over systematic errors (default false)


### function lnL_h_mass

```
void lnL_h_mass(
    double & result
)
```


Simple, naive h boson mass likelihood Reference: D. Aad et al arxiv:1503.07589, Phys.Rev.Lett. 114 (2015) 191803 (ATLAS + CMS combination) Also used dierctly in [http://pdg.lbl.gov/2016/tables/rpp2016-sum-gauge-higgs-bosons.pdf](http://pdg.lbl.gov/2016/tables/rpp2016-sum-gauge-higgs-bosons.pdf) = C. Patrignani et al. (Particle Data Group), Chin. Phys. C, 40, 100001 (2016). 


Option profile_systematics<bool>: Use likelihood version that has been profiled over systematic errors (default false)


### function lnL_sinW2_eff

```
void lnL_sinW2_eff(
    double & result
)
```

Reference: [http://pdg.lbl.gov/2016/reviews/rpp2016-rev-qcd.pdf](http://pdg.lbl.gov/2016/reviews/rpp2016-rev-qcd.pdf) = C. Patrignani et al. (Particle Data Group), Chin. Phys. C, 40, 100001 (2016). 

Effective leptonic sin^2(theta_W) likelihood sin^2theta_W^leptonic_effective~ sin^2theta_W(mZ)^MSbar + 0.00029 = 0.23155 +/- 0.00005 (1 sigma), Gaussian. (PDG global SM fit) 


Option profile_systematics<bool>: Use likelihood version that has been profiled over systematic errors (default false)


### function lnL_deltarho

```
void lnL_deltarho(
    double & result
)
```


Delta rho likelihood Delta rho = 0.00037 +/- 0.00023 (1 sigma), Gaussian. (PDG global SM fit) Reference: [http://pdg.lbl.gov/2016/reviews/rpp2016-rev-qcd.pdf](http://pdg.lbl.gov/2016/reviews/rpp2016-rev-qcd.pdf) = C. Patrignani et al. (Particle Data Group), Chin. Phys. C, 40, 100001 (2016). 


Option profile_systematics<bool>: Use likelihood version that has been profiled over systematic errors (default false)


### function gm2_SM_ee

```
void gm2_SM_ee(
    triplet< double > & result
)
```

g-2 in SM from e+e- data 

Values taken from prediction in arXiv:1010.4180 (Eq 22)


### function gm2_SM_tautau

```
void gm2_SM_tautau(
    triplet< double > & result
)
```

g-2 in SM from tau+tau- data 

Values taken from prediction in arXiv:1010.4180, based on tau data


### function lnL_gm2

```
void lnL_gm2(
    double & result
)
```

g-2 likelihood 

Option profile_systematics<bool>: Use likelihood version that has been profiled over systematic errors (default false)


### function GM2C_SUSY

```
void GM2C_SUSY(
    triplet< double > & result
)
```

Calculate a_mu_SUSY using the gm2calc backend. 

fill pole masses. note: that the indices start from 0 in gm2calc, gambit indices start from 1, hence the offsets here

alpha_MZ := alpha(0) (1 - \Delta^{OS}(M_Z) ) where \Delta^{OS}(M_Z) = quark and lepton contributions to

convert DR-bar parameters to on-shell

need to hook up errors properly check for problems

check for warnings


### function SuperIso_muon_gm2

```
void SuperIso_muon_gm2(
    triplet< double > & result
)
```

Calculation of g-2 with SuperIso. 

### function SP_PrecisionObs

```
void SP_PrecisionObs(
    double & result
)
```


Precision observables from SUSY-POPE This function is unfinished because SUSY-POPE is buggy. 


### function RHN_sinW2_eff

```
void RHN_sinW2_eff(
    triplet< double > & result
)
```


### function RHN_mw

```
void RHN_mw(
    triplet< double > & result
)
```


### function lnL_neutron_lifetime_beam_Yue

```
void lnL_neutron_lifetime_beam_Yue(
    double & result
)
```

Beam method: Phys. Rev. Lett. 111, 222501 (2013) [https://arxiv.org/abs/1309.2623](https://arxiv.org/abs/1309.2623). 

Option profile_systematics<bool>: Use likelihood version that has been profiled over systematic errors (default false)


### function lnL_neutron_lifetime_bottle_PDG19

```
void lnL_neutron_lifetime_bottle_PDG19(
    double & result
)
```

Bottle method: average recommended by PDG 2019 [http://pdg.lbl.gov/2019/listings/rpp2019-list-n.pdf](http://pdg.lbl.gov/2019/listings/rpp2019-list-n.pdf). 

Option profile_systematics<bool>: Use likelihood version that has been profiled over systematic errors (default false)






-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000