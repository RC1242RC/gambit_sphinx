---
title: 'namespace Gambit::CosmoBit'

description: "[No description available]"

---






[No description available]

## Namespaces

| Name           |
| -------------- |
| **[Gambit::CosmoBit::CosmoBit_utils](/documentation/code/namespaces/namespacegambit_1_1cosmobit_1_1cosmobit__utils/)**  |

## Classes

|                | Name           |
| -------------- | -------------- |
| class | **[Gambit::CosmoBit::Parametrised_ps](/documentation/code/classes/classgambit_1_1cosmobit_1_1parametrised__ps/)**  |
| class | **[Gambit::CosmoBit::Primordial_ps](/documentation/code/classes/classgambit_1_1cosmobit_1_1primordial__ps/)**  |
| class | **[Gambit::CosmoBit::SM_time_evo](/documentation/code/classes/classgambit_1_1cosmobit_1_1sm__time__evo/)**  |

## Functions

|                | Name           |
| -------------- | -------------- |
| error & | **[CosmoBit_error](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-cosmobit-error)**() |
| warning & | **[CosmoBit_warning](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-cosmobit-warning)**() |
| void | **[AlterBBN_Input](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-alterbbn-input)**(map_str_dbl & result) |
| void | **[populate_correlation_matrix](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-populate-correlation-matrix)**(const std::map< std::string, int > & abund_map, std::vector< std::vector< double >> & corr, std::vector< double > & errors, bool has_errors, const Options & runOptions)<br>Check the validity of a correlation matrix for AlterBBN likelihood calculations given in the YAML file, and use it to populate a correlation matrix object.  |
| void | **[compute_primordial_abundances_BBN](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-compute-primordial-abundances-bbn)**([BBN_container](/documentation/code/classes/classgambit_1_1bbn__container/) & result)<br>Compute elemental abundances from BBN.  |
| void | **[primordial_abundances](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-primordial-abundances)**([BBN_container](/documentation/code/classes/classgambit_1_1bbn__container/) & result) |
| void | **[primordial_abundances_decayingDM](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-primordial-abundances-decayingdm)**([BBN_container](/documentation/code/classes/classgambit_1_1bbn__container/) & result) |
| void | **[extract_helium_abundance](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-extract-helium-abundance)**(double & result)<br>Extract helium-4 abundance from BBN abundance container.  |
| void | **[compute_BBN_LogLike](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-compute-bbn-loglike)**(double & result)<br>Compute the overall log-likelihood from BBN.  |
| void | **[class_get_unlensed_Cl_TT](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-class-get-unlensed-cl-tt)**(std::vector< double > & result)<br>Getter functions for CL spectra from classy.  |
| void | **[class_get_unlensed_Cl_TE](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-class-get-unlensed-cl-te)**(std::vector< double > & result)<br>Temperature & E-mode cross-correlation.  |
| void | **[class_get_unlensed_Cl_EE](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-class-get-unlensed-cl-ee)**(std::vector< double > & result)<br>E-mode autocorrelation.  |
| void | **[class_get_unlensed_Cl_BB](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-class-get-unlensed-cl-bb)**(std::vector< double > & result)<br>B-mode autocorrelation.  |
| void | **[class_get_unlensed_Cl_PhiPhi](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-class-get-unlensed-cl-phiphi)**(std::vector< double > & result)<br>Lensing (Phi) autocorrelation.  |
| void | **[class_get_lensed_Cl_TT](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-class-get-lensed-cl-tt)**(std::vector< double > & result)<br>Temperature autocorrelation.  |
| void | **[class_get_lensed_Cl_TE](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-class-get-lensed-cl-te)**(std::vector< double > & result)<br>Temperature & E-mode cross-correlation.  |
| void | **[class_get_lensed_Cl_EE](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-class-get-lensed-cl-ee)**(std::vector< double > & result)<br>E-mode autocorrelation.  |
| void | **[class_get_lensed_Cl_BB](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-class-get-lensed-cl-bb)**(std::vector< double > & result)<br>B-mode autocorrelation.  |
| void | **[class_get_lensed_Cl_PhiPhi](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-class-get-lensed-cl-phiphi)**(std::vector< double > & result)<br>Lensing (Phi) autocorrelation.  |
| void | **[energy_injection_efficiency_func](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-energy-injection-efficiency-func)**([DarkAges::Energy_injection_efficiency_table](/documentation/code/classes/structgambit_1_1darkages_1_1energy__injection__efficiency__table/) & result)<br>DarkAges ///.  |
| void | **[f_eff_weighted](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-f-eff-weighted)**(double & result) |
| void | **[f_eff_at_z](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-f-eff-at-z)**(double & result) |
| void | **[f_eff_constant](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-f-eff-constant)**(double & result)<br>Manually set the effective energy injection efficiency.  |
| void | **[p_ann](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-p-ann)**(double & result) |
| void | **[lnL_p_ann_P18_TTTEEE_lowE_lensing_BAO](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-lnl-p-ann-p18-ttteee-lowe-lensing-bao)**(double & result) |
| void | **[energy_injection_spectrum_AnnihilatingDM_mixture](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-energy-injection-spectrum-annihilatingdm-mixture)**([DarkAges::Energy_injection_spectrum](/documentation/code/classes/structgambit_1_1darkages_1_1energy__injection__spectrum/) & spectrum)<br>The energy injection spectrum from the AnnihilatingDM model hierarchy.  |
| void | **[energy_injection_spectrum_DecayingDM_mixture](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-energy-injection-spectrum-decayingdm-mixture)**([DarkAges::Energy_injection_spectrum](/documentation/code/classes/structgambit_1_1darkages_1_1energy__injection__spectrum/) & spectrum)<br>The energy injection spectrum from the DecayingDM model hierarchy.  |
| void | **[lifetime_ALP_agg](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-lifetime-alp-agg)**(double & result)<br>Lifetime (in s) of an ALP if only the decay a -> g g is open.  |
| void | **[minimum_abundance_ALP_analytical](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-minimum-abundance-alp-analytical)**(double & result)<br>Compute the abundance of ALPs expected from thermal production via Primakoff processes.  |
| void | **[minimum_abundance_ALP_numerical](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-minimum-abundance-alp-numerical)**(double & result)<br>Abundance of ALPs expected from thermal production via Primakoff processes as calculated by micrOMEGAs.  |
| void | **[minimum_fraction_ALP](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-minimum-fraction-alp)**(double & result)<br>Compute the minimal fraction of dark matter in ALPs expected from thermal production via Primakoff processes.  |
| void | **[DM_fraction_ALP](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-dm-fraction-alp)**(double & result)<br>The fraction of dark matter in decaying ALPs at the time of production.  |
| void | **[total_DM_abundance_ALP](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-total-dm-abundance-alp)**(double & result) |
| void | **[compute_dNeff_etaBBN_ALP](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-compute-dneff-etabbn-alp)**(map_str_dbl & result)<br>@TODO function definition needed  |
| void | **[eta_ratio_ALP](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-eta-ratio-alp)**(double & result) |
| void | **[Neff_evolution_ALP](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-neff-evolution-alp)**(map_str_dbl & result) |
| void | **[set_k_pivot](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-set-k-pivot)**(double & result) |
| void | **[get_Neff_SM](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-get-neff-sm)**(double & result) |
| void | **[get_mNu_tot](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-get-mnu-tot)**(double & result) |
| void | **[get_N_ur](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-get-n-ur)**(double & result) |
| void | **[T_ncdm_SM](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-t-ncdm-sm)**(double & result)<br>Temperature of non-CDM in the (cosmological) SM.  |
| void | **[T_ncdm](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-t-ncdm)**(double & result)<br>Temperature of non-CDM in non-standard theories.  |
| void | **[eta0_LCDM](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-eta0-lcdm)**(double & result)<br>Baryon-to-photon ratio (today) in LCDM.  |
| void | **[compute_Omega0_b](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-compute-omega0-b)**(double & result)<br>The total baryon content today.  |
| void | **[compute_Omega0_cdm](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-compute-omega0-cdm)**(double & result)<br>The total cold dark matter content today.  |
| void | **[compute_Omega0_g](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-compute-omega0-g)**(double & result)<br>The total photon content today.  |
| void | **[compute_n0_g](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-compute-n0-g)**(double & result)<br>Number density of photons today.  |
| void | **[compute_Omega0_ur](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-compute-omega0-ur)**(double & result)<br>The total ultrarelativistic content today.  |
| void | **[get_H0_classy](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-get-h0-classy)**(double & result)<br>Hubble.  |
| void | **[get_H_at_z_classy](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-get-h-at-z-classy)**(daFunk::Funk & result)<br>Functor that calculates Hubble rate at redshift z [km/s/Mpc].  |
| void | **[get_time_at_z_classy](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-get-time-at-z-classy)**(daFunk::Funk & result)<br>Functor that calculates time since big bang at redshift z [s].  |
| void | **[get_age_universe_from_time_at_z](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-get-age-universe-from-time-at-z)**(double & result)<br>Age of the universe (time since big bang at z=0) [s].  |
| void | **[get_Omega0_m_classy](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-get-omega0-m-classy)**(double & result)<br>Energy densities _today_ (Omega0)  |
| void | **[get_Omega0_r_classy](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-get-omega0-r-classy)**(double & result)<br>Radiation.  |
| void | **[get_Omega0_ur_classy](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-get-omega0-ur-classy)**(double & result)<br>Ultra-relativistic.  |
| void | **[get_Omega0_ncdm_classy](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-get-omega0-ncdm-classy)**(double & result)<br>Non-cold dark matter.  |
| void | **[get_S8_classy](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-get-s8-classy)**(double & result) |
| void | **[get_Neff_classy](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-get-neff-classy)**(double & result) |
| void | **[get_tau_reio_classy](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-get-tau-reio-classy)**(double & result)<br>Optical depth at reionisation.  |
| void | **[get_z_reio_classy](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-get-z-reio-classy)**(double & result)<br>redshift of reionisation  |
| void | **[get_rs_drag_classy](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-get-rs-drag-classy)**(double & result)<br>Comoving sound horizon at baryon drag epoch.  |
| std::string | **[multimode_error_handling](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-multimode-error-handling)**(int & err)<br>Helper function for diagnosing MultiModeCode errors.  |
| void | **[set_multimode_inputs](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-set-multimode-inputs)**([Multimode_inputs](/documentation/code/classes/classgambit_1_1multimode__inputs/) & result) |
| void | **[get_multimode_primordial_ps](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-get-multimode-primordial-ps)**([Primordial_ps](/documentation/code/classes/classgambit_1_1cosmobit_1_1primordial__ps/) & result) |
| void | **[get_multimode_parametrised_ps](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-get-multimode-parametrised-ps)**(ModelParameters & result) |
| void | **[compute_Planck_nuisance_prior_loglike](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-compute-planck-nuisance-prior-loglike)**(double & result) |
| void | **[compute_Planck_sz_prior](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-compute-planck-sz-prior)**(double & result) |
| void | **[function_Planck_lowl_TT_2018_loglike](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-function-planck-lowl-tt-2018-loglike)**(double & result)<br>Low-l TT likelihood (PR3 - 2018)  |
| void | **[function_Planck_lowl_EE_2018_loglike](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-function-planck-lowl-ee-2018-loglike)**(double & result)<br>Low-l E-mode polarisation likelihood (PR3 - 2018)  |
| void | **[function_Planck_lowl_TTEE_2018_loglike](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-function-planck-lowl-ttee-2018-loglike)**(double & result)<br>Combined low-l TT and and E-mode polarisation likelihood (PR3 - 2018)  |
| void | **[function_Planck_highl_TT_2018_loglike](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-function-planck-highl-tt-2018-loglike)**(double & result)<br>High-l TT likelihood (PR3 - 2018)  |
| void | **[function_Planck_highl_TT_lite_2018_loglike](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-function-planck-highl-tt-lite-2018-loglike)**(double & result)<br>Marginalised version of the high-l TT likelihood (PR3 - 2018)  |
| void | **[function_Planck_highl_TTTEEE_2018_loglike](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-function-planck-highl-ttteee-2018-loglike)**(double & result)<br>High-l TT and polarisation likelihood (PR3 - 2018)  |
| void | **[function_Planck_highl_TTTEEE_lite_2018_loglike](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-function-planck-highl-ttteee-lite-2018-loglike)**(double & result)<br>Marginalised version of the high-l TT and polarisation likelihood (PR3 - 2018)  |
| void | **[function_Planck_lensing_2018_loglike](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-function-planck-lensing-2018-loglike)**(double & result)<br>Lensing likelihood (PR3 - 2018)  |
| void | **[function_Planck_lensing_marged_2018_loglike](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-function-planck-lensing-marged-2018-loglike)**(double & result)<br>Lensing Likelihood (marginalised over reference spectra for TT,EE, etc.) (PR3 - 2018)  |
| void | **[function_Planck_lowl_TT_2015_loglike](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-function-planck-lowl-tt-2015-loglike)**(double & result)<br>Low-l TT likelihood (PR2 - 2015)  |
| void | **[function_Planck_lowl_TEB_2015_loglike](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-function-planck-lowl-teb-2015-loglike)**(double & result)<br>Low-l polarisation likelihood (PR2 - 2015)  |
| void | **[function_Planck_highl_TT_2015_loglike](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-function-planck-highl-tt-2015-loglike)**(double & result)<br>High-l TT likelihood (PR2 - 2015)  |
| void | **[function_Planck_highl_TT_lite_2015_loglike](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-function-planck-highl-tt-lite-2015-loglike)**(double & result)<br>Marginalised version of high-l TT likelihood (PR2 - 2015)  |
| void | **[function_Planck_highl_TTTEEE_2015_loglike](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-function-planck-highl-ttteee-2015-loglike)**(double & result)<br>High-l TT and polarisation likelihood (PR2 - 2015)  |
| void | **[function_Planck_highl_TTTEEE_lite_2015_loglike](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-function-planck-highl-ttteee-lite-2015-loglike)**(double & result)<br>Marginalised version of high-l TT and polarisation likelihood (PR2 - 2015)  |
| void | **[function_Planck_lensing_2015_loglike](/documentation/code/namespaces/namespacegambit_1_1cosmobit/#function-function-planck-lensing-2015-loglike)**(double & result)<br>Lensing likelihood (PR2 - 2015)  |


## Functions Documentation

### function CosmoBit_error

```
error & CosmoBit_error()
```


### function CosmoBit_warning

```
warning & CosmoBit_warning()
```


### function AlterBBN_Input

```
void AlterBBN_Input(
    map_str_dbl & result
)
```


Add parameters of relicparam structure that should be set to non-default values to the AlterBBN_input map. If you want to modify a parameter which has not been used in CosmoBit before, simply add it to the function 'fill_cosmomodel' in 'AlterBBN_<version>.cpp' and to the set of 'known' parameters 'known_relicparam_options'. 


### function populate_correlation_matrix

```
void populate_correlation_matrix(
    const std::map< std::string, int > & abund_map,
    std::vector< std::vector< double >> & corr,
    std::vector< double > & errors,
    bool has_errors,
    const Options & runOptions
)
```

Check the validity of a correlation matrix for AlterBBN likelihood calculations given in the YAML file, and use it to populate a correlation matrix object. 

### function compute_primordial_abundances_BBN

```
void compute_primordial_abundances_BBN(
    BBN_container & result
)
```

Compute elemental abundances from BBN. 

### function primordial_abundances

```
void primordial_abundances(
    BBN_container & result
)
```


### function primordial_abundances_decayingDM

```
void primordial_abundances_decayingDM(
    BBN_container & result
)
```


### function extract_helium_abundance

```
void extract_helium_abundance(
    double & result
)
```

Extract helium-4 abundance from BBN abundance container. 

### function compute_BBN_LogLike

```
void compute_BBN_LogLike(
    double & result
)
```

Compute the overall log-likelihood from BBN. 

### function class_get_unlensed_Cl_TT

```
void class_get_unlensed_Cl_TT(
    std::vector< double > & result
)
```

Getter functions for CL spectra from classy. 

Temperature autocorrelation 


### function class_get_unlensed_Cl_TE

```
void class_get_unlensed_Cl_TE(
    std::vector< double > & result
)
```

Temperature & E-mode cross-correlation. 

### function class_get_unlensed_Cl_EE

```
void class_get_unlensed_Cl_EE(
    std::vector< double > & result
)
```

E-mode autocorrelation. 

### function class_get_unlensed_Cl_BB

```
void class_get_unlensed_Cl_BB(
    std::vector< double > & result
)
```

B-mode autocorrelation. 

### function class_get_unlensed_Cl_PhiPhi

```
void class_get_unlensed_Cl_PhiPhi(
    std::vector< double > & result
)
```

Lensing (Phi) autocorrelation. 

### function class_get_lensed_Cl_TT

```
void class_get_lensed_Cl_TT(
    std::vector< double > & result
)
```

Temperature autocorrelation. 

### function class_get_lensed_Cl_TE

```
void class_get_lensed_Cl_TE(
    std::vector< double > & result
)
```

Temperature & E-mode cross-correlation. 

### function class_get_lensed_Cl_EE

```
void class_get_lensed_Cl_EE(
    std::vector< double > & result
)
```

E-mode autocorrelation. 

### function class_get_lensed_Cl_BB

```
void class_get_lensed_Cl_BB(
    std::vector< double > & result
)
```

B-mode autocorrelation. 

### function class_get_lensed_Cl_PhiPhi

```
void class_get_lensed_Cl_PhiPhi(
    std::vector< double > & result
)
```

Lensing (Phi) autocorrelation. 

### function energy_injection_efficiency_func

```
void energy_injection_efficiency_func(
    DarkAges::Energy_injection_efficiency_table & result
)
```

DarkAges ///. 

Get the energy injection efficiency table from DarkAges. 


### function f_eff_weighted

```
void f_eff_weighted(
    double & result
)
```


Calculate the effective energy injection efficiency by convulution of f_eff(z) with a weighting function W(z) that takes the sensitivity of the CMB for energy injection as a function of redshift into account. [cf. [https://arxiv.org/abs/1506.03811](https://arxiv.org/abs/1506.03811)] 


### function f_eff_at_z

```
void f_eff_at_z(
    double & result
)
```


Calculate the effective energy injection efficiency by taking the value of f_eff(z) at given z. 


Set-up, do the interpolation, and claen-up


### function f_eff_constant

```
void f_eff_constant(
    double & result
)
```

Manually set the effective energy injection efficiency. 

### function p_ann

```
void p_ann(
    double & result
)
```


Calculate the annihilation rate p_ann = f_eff * f^2 * <sv>/m (Unit of result is: cm^3 s^-1 GeV^-1) 


### function lnL_p_ann_P18_TTTEEE_lowE_lensing_BAO

```
void lnL_p_ann_P18_TTTEEE_lowE_lensing_BAO(
    double & result
)
```


### function energy_injection_spectrum_AnnihilatingDM_mixture

```
void energy_injection_spectrum_AnnihilatingDM_mixture(
    DarkAges::Energy_injection_spectrum & spectrum
)
```

The energy injection spectrum from the AnnihilatingDM model hierarchy. 

### function energy_injection_spectrum_DecayingDM_mixture

```
void energy_injection_spectrum_DecayingDM_mixture(
    DarkAges::Energy_injection_spectrum & spectrum
)
```

The energy injection spectrum from the DecayingDM model hierarchy. 

### function lifetime_ALP_agg

```
void lifetime_ALP_agg(
    double & result
)
```

Lifetime (in s) of an ALP if only the decay a -> g g is open. 

### function minimum_abundance_ALP_analytical

```
void minimum_abundance_ALP_analytical(
    double & result
)
```

Compute the abundance of ALPs expected from thermal production via Primakoff processes. 

### function minimum_abundance_ALP_numerical

```
void minimum_abundance_ALP_numerical(
    double & result
)
```

Abundance of ALPs expected from thermal production via Primakoff processes as calculated by micrOMEGAs. 

### function minimum_fraction_ALP

```
void minimum_fraction_ALP(
    double & result
)
```

Compute the minimal fraction of dark matter in ALPs expected from thermal production via Primakoff processes. 

### function DM_fraction_ALP

```
void DM_fraction_ALP(
    double & result
)
```

The fraction of dark matter in decaying ALPs at the time of production. 

### function total_DM_abundance_ALP

```
void total_DM_abundance_ALP(
    double & result
)
```


Return the total abundance (Y = n/s) of ALPs We assume non relativistic ALPs such that rho = n * m 


### function compute_dNeff_etaBBN_ALP

```
void compute_dNeff_etaBBN_ALP(
    map_str_dbl & result
)
```

@TODO function definition needed 

### function eta_ratio_ALP

```
void eta_ratio_ALP(
    double & result
)
```


### function Neff_evolution_ALP

```
void Neff_evolution_ALP(
    map_str_dbl & result
)
```


### function set_k_pivot

```
void set_k_pivot(
    double & result
)
```


Function for setting k_pivot in Mpc^-1 for consistent use within CosmoBit (i.e. ensuring a consistent value is used by both CLASS and MultiModeCode) 


### function get_Neff_SM

```
void get_Neff_SM(
    double & result
)
```


### function get_mNu_tot

```
void get_mNu_tot(
    double & result
)
```


### function get_N_ur

```
void get_N_ur(
    double & result
)
```


### function T_ncdm_SM

```
void T_ncdm_SM(
    double & result
)
```

Temperature of non-CDM in the (cosmological) SM. 

### function T_ncdm

```
void T_ncdm(
    double & result
)
```

Temperature of non-CDM in non-standard theories. 

### function eta0_LCDM

```
void eta0_LCDM(
    double & result
)
```

Baryon-to-photon ratio (today) in LCDM. 

### function compute_Omega0_b

```
void compute_Omega0_b(
    double & result
)
```

The total baryon content today. 

### function compute_Omega0_cdm

```
void compute_Omega0_cdm(
    double & result
)
```

The total cold dark matter content today. 

### function compute_Omega0_g

```
void compute_Omega0_g(
    double & result
)
```

The total photon content today. 

### function compute_n0_g

```
void compute_n0_g(
    double & result
)
```

Number density of photons today. 

### function compute_Omega0_ur

```
void compute_Omega0_ur(
    double & result
)
```

The total ultrarelativistic content today. 

### function get_H0_classy

```
void get_H0_classy(
    double & result
)
```

Hubble. 

### function get_H_at_z_classy

```
void get_H_at_z_classy(
    daFunk::Funk & result
)
```

Functor that calculates Hubble rate at redshift z [km/s/Mpc]. 

### function get_time_at_z_classy

```
void get_time_at_z_classy(
    daFunk::Funk & result
)
```

Functor that calculates time since big bang at redshift z [s]. 

### function get_age_universe_from_time_at_z

```
void get_age_universe_from_time_at_z(
    double & result
)
```

Age of the universe (time since big bang at z=0) [s]. 

### function get_Omega0_m_classy

```
void get_Omega0_m_classy(
    double & result
)
```

Energy densities _today_ (Omega0) 

Matter 


### function get_Omega0_r_classy

```
void get_Omega0_r_classy(
    double & result
)
```

Radiation. 

### function get_Omega0_ur_classy

```
void get_Omega0_ur_classy(
    double & result
)
```

Ultra-relativistic. 

### function get_Omega0_ncdm_classy

```
void get_Omega0_ncdm_classy(
    double & result
)
```

Non-cold dark matter. 

### function get_S8_classy

```
void get_S8_classy(
    double & result
)
```


returns S8 = sigma8 (Omega0_m/0.3)^0.5 (sigma8:root mean square fluctuations density fluctuations within spheres of radius 8/h Mpc) 


### function get_Neff_classy

```
void get_Neff_classy(
    double & result
)
```


Effective number of neutrino species (mostly for cross-checking!) 


### function get_tau_reio_classy

```
void get_tau_reio_classy(
    double & result
)
```

Optical depth at reionisation. 

### function get_z_reio_classy

```
void get_z_reio_classy(
    double & result
)
```

redshift of reionisation 

### function get_rs_drag_classy

```
void get_rs_drag_classy(
    double & result
)
```

Comoving sound horizon at baryon drag epoch. 

### function multimode_error_handling

```
std::string multimode_error_handling(
    int & err
)
```

Helper function for diagnosing MultiModeCode errors. 



> 0 = "failure; not fatal" 
> 
> 

< 0 = "fatal"


### function set_multimode_inputs

```
void set_multimode_inputs(
    Multimode_inputs & result
)
```


### function get_multimode_primordial_ps

```
void get_multimode_primordial_ps(
    Primordial_ps & result
)
```


Use the inputs from the MultiModeCode initialisation function to compute a non-parametric primordial power spectrum. 


### function get_multimode_parametrised_ps

```
void get_multimode_parametrised_ps(
    ModelParameters & result
)
```


Use the inputs from the MultiModeCode initialisation function to compute a parametrised primordial power spectrum. 


### function compute_Planck_nuisance_prior_loglike

```
void compute_Planck_nuisance_prior_loglike(
    double & result
)
```


Apply Gaussian priors on some of the Planck nuisance parameters (cf. table 16 of 1907.1287) By default, the 2018 priors are used. If the 2015 priors should be considered, set "version: 2015" in the rules of this function. If needed, a custom file with the priors can be passed via the "prior_file" keyword in the rules. 


Loop over all parameters and apply the prior


### function compute_Planck_sz_prior

```
void compute_Planck_sz_prior(
    double & result
)
```


SZ- prior: Prior on the tSZ and kSZ amplitudes. Correlation is unconstrained by Planck. Use prior based on SPT and ACT data. (cf. [https://arxiv.org/pdf/1507.02704.pdf](https://arxiv.org/pdf/1507.02704.pdf)&ndash; eq. 32) 


### function function_Planck_lowl_TT_2018_loglike

```
void function_Planck_lowl_TT_2018_loglike(
    double & result
)
```

Low-l TT likelihood (PR3 - 2018) 

### function function_Planck_lowl_EE_2018_loglike

```
void function_Planck_lowl_EE_2018_loglike(
    double & result
)
```

Low-l E-mode polarisation likelihood (PR3 - 2018) 

### function function_Planck_lowl_TTEE_2018_loglike

```
void function_Planck_lowl_TTEE_2018_loglike(
    double & result
)
```

Combined low-l TT and and E-mode polarisation likelihood (PR3 - 2018) 

### function function_Planck_highl_TT_2018_loglike

```
void function_Planck_highl_TT_2018_loglike(
    double & result
)
```

High-l TT likelihood (PR3 - 2018) 

### function function_Planck_highl_TT_lite_2018_loglike

```
void function_Planck_highl_TT_lite_2018_loglike(
    double & result
)
```

Marginalised version of the high-l TT likelihood (PR3 - 2018) 

### function function_Planck_highl_TTTEEE_2018_loglike

```
void function_Planck_highl_TTTEEE_2018_loglike(
    double & result
)
```

High-l TT and polarisation likelihood (PR3 - 2018) 

### function function_Planck_highl_TTTEEE_lite_2018_loglike

```
void function_Planck_highl_TTTEEE_lite_2018_loglike(
    double & result
)
```

Marginalised version of the high-l TT and polarisation likelihood (PR3 - 2018) 

### function function_Planck_lensing_2018_loglike

```
void function_Planck_lensing_2018_loglike(
    double & result
)
```

Lensing likelihood (PR3 - 2018) 

### function function_Planck_lensing_marged_2018_loglike

```
void function_Planck_lensing_marged_2018_loglike(
    double & result
)
```

Lensing Likelihood (marginalised over reference spectra for TT,EE, etc.) (PR3 - 2018) 

### function function_Planck_lowl_TT_2015_loglike

```
void function_Planck_lowl_TT_2015_loglike(
    double & result
)
```

Low-l TT likelihood (PR2 - 2015) 

### function function_Planck_lowl_TEB_2015_loglike

```
void function_Planck_lowl_TEB_2015_loglike(
    double & result
)
```

Low-l polarisation likelihood (PR2 - 2015) 

### function function_Planck_highl_TT_2015_loglike

```
void function_Planck_highl_TT_2015_loglike(
    double & result
)
```

High-l TT likelihood (PR2 - 2015) 

### function function_Planck_highl_TT_lite_2015_loglike

```
void function_Planck_highl_TT_lite_2015_loglike(
    double & result
)
```

Marginalised version of high-l TT likelihood (PR2 - 2015) 

### function function_Planck_highl_TTTEEE_2015_loglike

```
void function_Planck_highl_TTTEEE_2015_loglike(
    double & result
)
```

High-l TT and polarisation likelihood (PR2 - 2015) 

### function function_Planck_highl_TTTEEE_lite_2015_loglike

```
void function_Planck_highl_TTTEEE_lite_2015_loglike(
    double & result
)
```

Marginalised version of high-l TT and polarisation likelihood (PR2 - 2015) 

### function function_Planck_lensing_2015_loglike

```
void function_Planck_lensing_2015_loglike(
    double & result
)
```

Lensing likelihood (PR2 - 2015) 





-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000