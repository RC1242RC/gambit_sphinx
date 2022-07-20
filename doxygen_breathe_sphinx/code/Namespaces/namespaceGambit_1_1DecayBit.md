---
title: 'namespace Gambit::DecayBit'

description: "[No description available]"

---






[No description available]

## Namespaces

| Name           |
| -------------- |
| **[Gambit::DecayBit::MSSM_H](/documentation/code/namespaces/namespacegambit_1_1decaybit_1_1mssm__h/)**  |
| **[Gambit::DecayBit::MSSM_Z](/documentation/code/namespaces/namespacegambit_1_1decaybit_1_1mssm__z/)**  |
| **[Gambit::DecayBit::SM_Z](/documentation/code/namespaces/namespacegambit_1_1decaybit_1_1sm__z/)**  |

## Functions

|                | Name           |
| -------------- | -------------- |
| double | **[sqrt_lambda](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-sqrt-lambda)**(double a, double b, double c)<br>Square root of the standard kinematic function lambda(a,b,c)  |
| std::complex< double > | **[BW](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-bw)**(double q2, double m2, double imag_term)<br>Breit-Wigner pole (complex)  |
| void | **[check_width](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-check-width)**(const str & info, double & w, bool raise_invalid_pt_negative_width =false, bool raise_invalid_pt_large_width =false)<br>Check if a width is negative or suspiciously large and raise an error.  |
| void | **[compute_SM_higgs_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-compute-sm-higgs-decays)**(DecayTable::Entry & result, double mh)<br>Populate SM Higgs decay channels for a higgs mass of m_h.  |
| void | **[set_FH_neutral_h_decay](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-set-fh-neutral-h-decay)**(DecayTable::Entry & result, int iH, const [fh_Couplings_container](/documentation/code/classes/structgambit_1_1fh__couplings__container/) & FH_input, const mass_es_pseudonyms & psn, bool invalidate, bool SM)<br>Set neutral h decays computed by FeynHiggs.  |
| void | **[W_plus_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-w-plus-decays)**(DecayTable::Entry & result) |
| void | **[Z_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-z-decays)**(DecayTable::Entry & result) |
| void | **[t_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-t-decays)**(DecayTable::Entry & result) |
| void | **[mu_plus_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-mu-plus-decays)**(DecayTable::Entry & result) |
| void | **[tau_plus_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-tau-plus-decays)**(DecayTable::Entry & result) |
| void | **[pi_0_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-pi-0-decays)**(DecayTable::Entry & result) |
| void | **[pi_plus_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-pi-plus-decays)**(DecayTable::Entry & result) |
| void | **[eta_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-eta-decays)**(DecayTable::Entry & result) |
| void | **[rho_0_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-rho-0-decays)**(DecayTable::Entry & result) |
| void | **[rho_plus_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-rho-plus-decays)**(DecayTable::Entry & result) |
| void | **[omega_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-omega-decays)**(DecayTable::Entry & result) |
| void | **[rho1450_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-rho1450-decays)**(DecayTable::Entry & result) |
| void | **[W_minus_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-w-minus-decays)**(DecayTable::Entry & result) |
| void | **[tbar_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-tbar-decays)**(DecayTable::Entry & result) |
| void | **[mu_minus_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-mu-minus-decays)**(DecayTable::Entry & result) |
| void | **[tau_minus_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-tau-minus-decays)**(DecayTable::Entry & result) |
| void | **[pi_minus_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-pi-minus-decays)**(DecayTable::Entry & result) |
| void | **[rho_minus_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-rho-minus-decays)**(DecayTable::Entry & result) |
| void | **[Ref_SM_Higgs_decays_table](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-ref-sm-higgs-decays-table)**(DecayTable::Entry & result)<br>Reference SM Higgs decays.  |
| void | **[Ref_SM_other_Higgs_decays_table](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-ref-sm-other-higgs-decays-table)**(DecayTable::Entry & result)<br>Reference SM Higgs decays from LHCHiggsXSWG: least SM-like Higgs.  |
| void | **[Ref_SM_A0_decays_table](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-ref-sm-a0-decays-table)**(DecayTable::Entry & result)<br>Reference SM Higgs decays from LHCHiggsXSWG: A0.  |
| void | **[Ref_SM_Higgs_decays_FeynHiggs](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-ref-sm-higgs-decays-feynhiggs)**(DecayTable::Entry & result)<br>Reference SM Higgs decays from FeynHiggs: h0_1.  |
| void | **[Ref_SM_other_Higgs_decays_FH](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-ref-sm-other-higgs-decays-fh)**(DecayTable::Entry & result)<br>Reference SM Higgs decays from FeynHiggs: h0_2.  |
| void | **[Ref_SM_A0_decays_FH](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-ref-sm-a0-decays-fh)**(DecayTable::Entry & result)<br>Reference SM Higgs decays from FeynHiggs: A0.  |
| void | **[H_minus_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-h-minus-decays)**(DecayTable::Entry & result) |
| void | **[stopbar_1_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-stopbar-1-decays)**(DecayTable::Entry & result) |
| void | **[stopbar_2_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-stopbar-2-decays)**(DecayTable::Entry & result) |
| void | **[sbottombar_1_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-sbottombar-1-decays)**(DecayTable::Entry & result) |
| void | **[sbottombar_2_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-sbottombar-2-decays)**(DecayTable::Entry & result) |
| void | **[supbar_l_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-supbar-l-decays)**(DecayTable::Entry & result) |
| void | **[supbar_r_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-supbar-r-decays)**(DecayTable::Entry & result) |
| void | **[sdownbar_l_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-sdownbar-l-decays)**(DecayTable::Entry & result) |
| void | **[sdownbar_r_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-sdownbar-r-decays)**(DecayTable::Entry & result) |
| void | **[scharmbar_l_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-scharmbar-l-decays)**(DecayTable::Entry & result) |
| void | **[scharmbar_r_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-scharmbar-r-decays)**(DecayTable::Entry & result) |
| void | **[sstrangebar_l_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-sstrangebar-l-decays)**(DecayTable::Entry & result) |
| void | **[sstrangebar_r_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-sstrangebar-r-decays)**(DecayTable::Entry & result) |
| void | **[selectronbar_l_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-selectronbar-l-decays)**(DecayTable::Entry & result) |
| void | **[selectronbar_r_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-selectronbar-r-decays)**(DecayTable::Entry & result) |
| void | **[smuonbar_l_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-smuonbar-l-decays)**(DecayTable::Entry & result) |
| void | **[smuonbar_r_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-smuonbar-r-decays)**(DecayTable::Entry & result) |
| void | **[staubar_1_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-staubar-1-decays)**(DecayTable::Entry & result) |
| void | **[staubar_2_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-staubar-2-decays)**(DecayTable::Entry & result) |
| void | **[snubar_electronl_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-snubar-electronl-decays)**(DecayTable::Entry & result) |
| void | **[snubar_muonl_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-snubar-muonl-decays)**(DecayTable::Entry & result) |
| void | **[snubar_taul_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-snubar-taul-decays)**(DecayTable::Entry & result) |
| void | **[chargino_minus_1_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-chargino-minus-1-decays)**(DecayTable::Entry & result) |
| void | **[chargino_minus_2_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-chargino-minus-2-decays)**(DecayTable::Entry & result) |
| DecayTable::Entry | **[CP_conjugate](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-cp-conjugate)**(const DecayTable::Entry & in)<br>Construct a decay table entry for a particle from the entry for its antiparticle.  |
| void | **[SM_Higgs_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-sm-higgs-decays)**(DecayTable::Entry & result)<br>SM decays: Higgs.  |
| void | **[FeynHiggs_t_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-feynhiggs-t-decays)**(DecayTable::Entry & result) |
| void | **[FeynHiggs_MSSM_h0_1_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-feynhiggs-mssm-h0-1-decays)**(DecayTable::Entry & result)<br>FeynHiggs MSSM decays: h0_1.  |
| void | **[FeynHiggs_h0_2_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-feynhiggs-h0-2-decays)**(DecayTable::Entry & result)<br>FeynHiggs MSSM decays: h0_2.  |
| void | **[FeynHiggs_A0_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-feynhiggs-a0-decays)**(DecayTable::Entry & result)<br>FeynHiggs MSSM decays: A0.  |
| void | **[FeynHiggs_H_plus_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-feynhiggs-h-plus-decays)**(DecayTable::Entry & result)<br>FeynHiggs MSSM decays: H+.  |
| void | **[MSSM_h0_1_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-mssm-h0-1-decays)**(DecayTable::Entry & result)<br>SUSY-HIT MSSM decays: h0_1.  |
| void | **[h0_2_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-h0-2-decays)**(DecayTable::Entry & result)<br>SUSY-HIT MSSM decays: h0_2.  |
| void | **[A0_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-a0-decays)**(DecayTable::Entry & result)<br>SUSY-HIT MSSM decays: A0.  |
| void | **[H_plus_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-h-plus-decays)**(DecayTable::Entry & result)<br>SUSY-HIT MSSM decays: H_plus.  |
| void | **[gluino_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-gluino-decays)**(DecayTable::Entry & result)<br>SUSY-HIT MSSM decays: gluino.  |
| void | **[stop_1_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-stop-1-decays)**(DecayTable::Entry & result)<br>SUSY-HIT MSSM decays: stop_1.  |
| void | **[stop_2_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-stop-2-decays)**(DecayTable::Entry & result)<br>SUSY-HIT MSSM decays: stop_2.  |
| void | **[sbottom_1_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-sbottom-1-decays)**(DecayTable::Entry & result)<br>SUSY-HIT MSSM decays: sbottom_1.  |
| void | **[sbottom_2_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-sbottom-2-decays)**(DecayTable::Entry & result)<br>SUSY-HIT MSSM decays: sbottom_2.  |
| void | **[sup_l_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-sup-l-decays)**(DecayTable::Entry & result)<br>SUSY-HIT MSSM decays: sup_l.  |
| void | **[sup_r_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-sup-r-decays)**(DecayTable::Entry & result)<br>SUSY-HIT MSSM decays: sup_r.  |
| void | **[sdown_l_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-sdown-l-decays)**(DecayTable::Entry & result)<br>SUSY-HIT MSSM decays: sdown_l.  |
| void | **[sdown_r_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-sdown-r-decays)**(DecayTable::Entry & result)<br>SUSY-HIT MSSM decays: sdown_r.  |
| void | **[scharm_l_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-scharm-l-decays)**(DecayTable::Entry & result)<br>SUSY-HIT MSSM decays: scharm_l.  |
| void | **[scharm_r_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-scharm-r-decays)**(DecayTable::Entry & result)<br>SUSY-HIT MSSM decays: scharm_r.  |
| void | **[sstrange_l_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-sstrange-l-decays)**(DecayTable::Entry & result)<br>SUSY-HIT MSSM decays: sstrange_l.  |
| void | **[sstrange_r_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-sstrange-r-decays)**(DecayTable::Entry & result)<br>SUSY-HIT MSSM decays: sstrange_r.  |
| void | **[selectron_l_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-selectron-l-decays)**(DecayTable::Entry & result)<br>SUSY-HIT MSSM decays: selectron_l.  |
| void | **[selectron_r_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-selectron-r-decays)**(DecayTable::Entry & result)<br>SUSY-HIT MSSM decays: selectron_r.  |
| void | **[smuon_l_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-smuon-l-decays)**(DecayTable::Entry & result)<br>SUSY-HIT MSSM decays: smuon_l.  |
| void | **[smuon_r_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-smuon-r-decays)**(DecayTable::Entry & result)<br>SUSY-HIT MSSM decays: smuon_r.  |
| void | **[stau_1_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-stau-1-decays)**(DecayTable::Entry & result)<br>MSSM decays: stau_1 (Uses SUSY-HIT results or dedicated DecayBit calculation for small mass splittings)  |
| void | **[stau_1_decays_SH](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-stau-1-decays-sh)**(DecayTable::Entry & result)<br>SUSY-HIT MSSM decays: stau_1.  |
| void | **[stau_2_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-stau-2-decays)**(DecayTable::Entry & result)<br>SUSY-HIT MSSM decays: stau_2.  |
| void | **[snu_electronl_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-snu-electronl-decays)**(DecayTable::Entry & result)<br>SUSY-HIT MSSM decays: snu_electronl.  |
| void | **[snu_muonl_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-snu-muonl-decays)**(DecayTable::Entry & result)<br>SUSY-HIT MSSM decays: snu_muonl.  |
| void | **[snu_taul_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-snu-taul-decays)**(DecayTable::Entry & result) |
| void | **[chargino_plus_1_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-chargino-plus-1-decays)**(DecayTable::Entry & result)<br>MSSM decays: chargino_plus_1 (Uses SUSY-HIT results or dedicated DecayBit calculation for small mass splittings)  |
| void | **[chargino_plus_1_decays_SH](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-chargino-plus-1-decays-sh)**(DecayTable::Entry & result)<br>SUSY-HIT MSSM decays: chargino_plus_1.  |
| void | **[chargino_plus_2_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-chargino-plus-2-decays)**(DecayTable::Entry & result)<br>SUSY-HIT MSSM decays: chargino_plus_2.  |
| void | **[neutralino_1_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-neutralino-1-decays)**(DecayTable::Entry & result)<br>SUSY-HIT MSSM decays: neutralino_1.  |
| void | **[neutralino_2_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-neutralino-2-decays)**(DecayTable::Entry & result)<br>SUSY-HIT MSSM decays: neutralino_2.  |
| void | **[neutralino_3_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-neutralino-3-decays)**(DecayTable::Entry & result)<br>SUSY-HIT MSSM decays: neutralino_3.  |
| void | **[neutralino_4_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-neutralino-4-decays)**(DecayTable::Entry & result)<br>SUSY-HIT MSSM decays: neutralino_4.  |
| void | **[chargino_plus_1_decays_smallsplit](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-chargino-plus-1-decays-smallsplit)**(DecayTable::Entry & result) |
| void | **[stau_1_decays_smallsplit](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-stau-1-decays-smallsplit)**(DecayTable::Entry & result) |
| void | **[ScalarSingletDM_Higgs_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-scalarsingletdm-higgs-decays)**(DecayTable::Entry & result)<br>Add the decay of Higgs to singlets for the ScalarSingletDM models.  |
| void | **[VectorSingletDM_Higgs_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-vectorsingletdm-higgs-decays)**(DecayTable::Entry & result)<br>Add the decay of Higgs to vectors for the VectorSingletDM models (see arXiv:1512.06458v4)  |
| void | **[MajoranaSingletDM_Higgs_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-majoranasingletdm-higgs-decays)**(DecayTable::Entry & result)<br>Add the decay of Higgs to Majorana fermions for the MajoranaSingletDM models (see arXiv:1512.06458v4)  |
| void | **[DiracSingletDM_Higgs_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-diracsingletdm-higgs-decays)**(DecayTable::Entry & result)<br>Add the decay of Higgs to Dirac fermions for the DiracSingletDM models (see arXiv:1512.06458v4)  |
| void | **[all_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-all-decays)**(DecayTable & decays)<br>Collect all the DecayTable entries into an actual DecayTable.  |
| void | **[all_decays_from_SLHA](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-all-decays-from-slha)**(DecayTable & decays) |
| void | **[get_decaytable_as_map](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-get-decaytable-as-map)**(map_str_dbl & map)<br>Convert the DecayTable to a format where we can print each individual channel's BF.  |
| void | **[get_mass_es_pseudonyms](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-get-mass-es-pseudonyms)**(mass_es_pseudonyms & result)<br>Get MSSM mass eigenstate pseudonyms for the gauge eigenstates.  |
| void | **[check_first_sec_gen_mixing](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-check-first-sec-gen-mixing)**(int & result) |
| daFunk::Funk | **[get_Higgs_invWidth_chi2](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-get-higgs-invwidth-chi2)**(std::string filename) |
| void | **[MSSM_inv_Higgs_BF](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-mssm-inv-higgs-bf)**(double & BF) |
| void | **[ScalarSingletDM_inv_Higgs_BF](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-scalarsingletdm-inv-higgs-bf)**(double & BF) |
| void | **[VectorSingletDM_inv_Higgs_BF](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-vectorsingletdm-inv-higgs-bf)**(double & BF) |
| void | **[MajoranaSingletDM_inv_Higgs_BF](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-majoranasingletdm-inv-higgs-bf)**(double & BF) |
| void | **[DiracSingletDM_inv_Higgs_BF](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-diracsingletdm-inv-higgs-bf)**(double & BF) |
| void | **[lnL_Higgs_invWidth_SMlike](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-lnl-higgs-invwidth-smlike)**(double & lnL) |
| void | **[lnL_Z_inv](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-lnl-z-inv)**(double & lnL) |
| void | **[Z_gamma_nu_2l](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-z-gamma-nu-2l)**(triplet< double > & gamma) |
| void | **[Z_gamma_chi_0_MSSM_tree](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-z-gamma-chi-0-mssm-tree)**(triplet< double > & gamma) |
| void | **[RHN_W_to_l_decays](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-rhn-w-to-l-decays)**(std::vector< double > & result) |
| void | **[lnL_W_decays_chi2](/documentation/code/namespaces/namespacegambit_1_1decaybit/#function-lnl-w-decays-chi2)**(double & result) |


## Functions Documentation

### function sqrt_lambda

```
double sqrt_lambda(
    double a,
    double b,
    double c
)
```

Square root of the standard kinematic function lambda(a,b,c) 

### function BW

```
std::complex< double > BW(
    double q2,
    double m2,
    double imag_term
)
```

Breit-Wigner pole (complex) 

### function check_width

```
void check_width(
    const str & info,
    double & w,
    bool raise_invalid_pt_negative_width =false,
    bool raise_invalid_pt_large_width =false
)
```

Check if a width is negative or suspiciously large and raise an error. 

### function compute_SM_higgs_decays

```
void compute_SM_higgs_decays(
    DecayTable::Entry & result,
    double mh
)
```

Populate SM Higgs decay channels for a higgs mass of m_h. 

### function set_FH_neutral_h_decay

```
void set_FH_neutral_h_decay(
    DecayTable::Entry & result,
    int iH,
    const fh_Couplings_container & FH_input,
    const mass_es_pseudonyms & psn,
    bool invalidate,
    bool SM
)
```

Set neutral h decays computed by FeynHiggs. 

### function W_plus_decays

```
void W_plus_decays(
    DecayTable::Entry & result
)
```


SM decays: W+ Reference: 2017 PDG 


### function Z_decays

```
void Z_decays(
    DecayTable::Entry & result
)
```


SM decays: Z Reference: 2017 PDG 


### function t_decays

```
void t_decays(
    DecayTable::Entry & result
)
```


SM decays: t Reference: 2017 PDG 


### function mu_plus_decays

```
void mu_plus_decays(
    DecayTable::Entry & result
)
```


SM decays: mu+ Reference: 2017 PDG 


### function tau_plus_decays

```
void tau_plus_decays(
    DecayTable::Entry & result
)
```


SM decays: tau+ Reference: 2017 PDG 


### function pi_0_decays

```
void pi_0_decays(
    DecayTable::Entry & result
)
```


SM decays: pi0 Reference: 2017 PDG 


### function pi_plus_decays

```
void pi_plus_decays(
    DecayTable::Entry & result
)
```


SM decays: pi+ Reference: 2017 PDG 


### function eta_decays

```
void eta_decays(
    DecayTable::Entry & result
)
```


SM decays: eta Reference: 2017 PDG 


### function rho_0_decays

```
void rho_0_decays(
    DecayTable::Entry & result
)
```


SM decays: rho0 Reference: 2017 PDG 


### function rho_plus_decays

```
void rho_plus_decays(
    DecayTable::Entry & result
)
```


SM decays: rho+ Reference: 2017 PDG 


### function omega_decays

```
void omega_decays(
    DecayTable::Entry & result
)
```


SM decays: omega Reference: 2017 PDG 


### function rho1450_decays

```
void rho1450_decays(
    DecayTable::Entry & result
)
```


SM decays: rho1450 Reference: 2017 PDG 


### function W_minus_decays

```
void W_minus_decays(
    DecayTable::Entry & result
)
```


SM decays: conjugates 


### function tbar_decays

```
void tbar_decays(
    DecayTable::Entry & result
)
```


### function mu_minus_decays

```
void mu_minus_decays(
    DecayTable::Entry & result
)
```


### function tau_minus_decays

```
void tau_minus_decays(
    DecayTable::Entry & result
)
```


### function pi_minus_decays

```
void pi_minus_decays(
    DecayTable::Entry & result
)
```


### function rho_minus_decays

```
void rho_minus_decays(
    DecayTable::Entry & result
)
```


### function Ref_SM_Higgs_decays_table

```
void Ref_SM_Higgs_decays_table(
    DecayTable::Entry & result
)
```

Reference SM Higgs decays. 

These functions are given a different capability to regular decay functions, to allow other module functions to specifically depend on the SM values for reference, even when scanning another model. Reference SM Higgs decays from LHCHiggsXSWG: most SM-like Higgs 


### function Ref_SM_other_Higgs_decays_table

```
void Ref_SM_other_Higgs_decays_table(
    DecayTable::Entry & result
)
```

Reference SM Higgs decays from LHCHiggsXSWG: least SM-like Higgs. 

### function Ref_SM_A0_decays_table

```
void Ref_SM_A0_decays_table(
    DecayTable::Entry & result
)
```

Reference SM Higgs decays from LHCHiggsXSWG: A0. 

### function Ref_SM_Higgs_decays_FeynHiggs

```
void Ref_SM_Higgs_decays_FeynHiggs(
    DecayTable::Entry & result
)
```

Reference SM Higgs decays from FeynHiggs: h0_1. 

### function Ref_SM_other_Higgs_decays_FH

```
void Ref_SM_other_Higgs_decays_FH(
    DecayTable::Entry & result
)
```

Reference SM Higgs decays from FeynHiggs: h0_2. 

### function Ref_SM_A0_decays_FH

```
void Ref_SM_A0_decays_FH(
    DecayTable::Entry & result
)
```

Reference SM Higgs decays from FeynHiggs: A0. 

### function H_minus_decays

```
void H_minus_decays(
    DecayTable::Entry & result
)
```


MSSM decays: conjugates 


### function stopbar_1_decays

```
void stopbar_1_decays(
    DecayTable::Entry & result
)
```


### function stopbar_2_decays

```
void stopbar_2_decays(
    DecayTable::Entry & result
)
```


### function sbottombar_1_decays

```
void sbottombar_1_decays(
    DecayTable::Entry & result
)
```


### function sbottombar_2_decays

```
void sbottombar_2_decays(
    DecayTable::Entry & result
)
```


### function supbar_l_decays

```
void supbar_l_decays(
    DecayTable::Entry & result
)
```


### function supbar_r_decays

```
void supbar_r_decays(
    DecayTable::Entry & result
)
```


### function sdownbar_l_decays

```
void sdownbar_l_decays(
    DecayTable::Entry & result
)
```


### function sdownbar_r_decays

```
void sdownbar_r_decays(
    DecayTable::Entry & result
)
```


### function scharmbar_l_decays

```
void scharmbar_l_decays(
    DecayTable::Entry & result
)
```


### function scharmbar_r_decays

```
void scharmbar_r_decays(
    DecayTable::Entry & result
)
```


### function sstrangebar_l_decays

```
void sstrangebar_l_decays(
    DecayTable::Entry & result
)
```


### function sstrangebar_r_decays

```
void sstrangebar_r_decays(
    DecayTable::Entry & result
)
```


### function selectronbar_l_decays

```
void selectronbar_l_decays(
    DecayTable::Entry & result
)
```


### function selectronbar_r_decays

```
void selectronbar_r_decays(
    DecayTable::Entry & result
)
```


### function smuonbar_l_decays

```
void smuonbar_l_decays(
    DecayTable::Entry & result
)
```


### function smuonbar_r_decays

```
void smuonbar_r_decays(
    DecayTable::Entry & result
)
```


### function staubar_1_decays

```
void staubar_1_decays(
    DecayTable::Entry & result
)
```


### function staubar_2_decays

```
void staubar_2_decays(
    DecayTable::Entry & result
)
```


### function snubar_electronl_decays

```
void snubar_electronl_decays(
    DecayTable::Entry & result
)
```


### function snubar_muonl_decays

```
void snubar_muonl_decays(
    DecayTable::Entry & result
)
```


### function snubar_taul_decays

```
void snubar_taul_decays(
    DecayTable::Entry & result
)
```


### function chargino_minus_1_decays

```
void chargino_minus_1_decays(
    DecayTable::Entry & result
)
```


### function chargino_minus_2_decays

```
void chargino_minus_2_decays(
    DecayTable::Entry & result
)
```


### function CP_conjugate

```
DecayTable::Entry CP_conjugate(
    const DecayTable::Entry & in
)
```

Construct a decay table entry for a particle from the entry for its antiparticle. 

Construct a decay table entry for a particle, from the entry for its antiparticle. 


### function SM_Higgs_decays

```
void SM_Higgs_decays(
    DecayTable::Entry & result
)
```

SM decays: Higgs. 

### function FeynHiggs_t_decays

```
void FeynHiggs_t_decays(
    DecayTable::Entry & result
)
```


FeynHiggs MSSM decays: t Reference for total width: 2017 PDG 


### function FeynHiggs_MSSM_h0_1_decays

```
void FeynHiggs_MSSM_h0_1_decays(
    DecayTable::Entry & result
)
```

FeynHiggs MSSM decays: h0_1. 

### function FeynHiggs_h0_2_decays

```
void FeynHiggs_h0_2_decays(
    DecayTable::Entry & result
)
```

FeynHiggs MSSM decays: h0_2. 

### function FeynHiggs_A0_decays

```
void FeynHiggs_A0_decays(
    DecayTable::Entry & result
)
```

FeynHiggs MSSM decays: A0. 

### function FeynHiggs_H_plus_decays

```
void FeynHiggs_H_plus_decays(
    DecayTable::Entry & result
)
```

FeynHiggs MSSM decays: H+. 

### function MSSM_h0_1_decays

```
void MSSM_h0_1_decays(
    DecayTable::Entry & result
)
```

SUSY-HIT MSSM decays: h0_1. 

### function h0_2_decays

```
void h0_2_decays(
    DecayTable::Entry & result
)
```

SUSY-HIT MSSM decays: h0_2. 

### function A0_decays

```
void A0_decays(
    DecayTable::Entry & result
)
```

SUSY-HIT MSSM decays: A0. 

### function H_plus_decays

```
void H_plus_decays(
    DecayTable::Entry & result
)
```

SUSY-HIT MSSM decays: H_plus. 

### function gluino_decays

```
void gluino_decays(
    DecayTable::Entry & result
)
```

SUSY-HIT MSSM decays: gluino. 

### function stop_1_decays

```
void stop_1_decays(
    DecayTable::Entry & result
)
```

SUSY-HIT MSSM decays: stop_1. 

### function stop_2_decays

```
void stop_2_decays(
    DecayTable::Entry & result
)
```

SUSY-HIT MSSM decays: stop_2. 

### function sbottom_1_decays

```
void sbottom_1_decays(
    DecayTable::Entry & result
)
```

SUSY-HIT MSSM decays: sbottom_1. 

### function sbottom_2_decays

```
void sbottom_2_decays(
    DecayTable::Entry & result
)
```

SUSY-HIT MSSM decays: sbottom_2. 

### function sup_l_decays

```
void sup_l_decays(
    DecayTable::Entry & result
)
```

SUSY-HIT MSSM decays: sup_l. 

### function sup_r_decays

```
void sup_r_decays(
    DecayTable::Entry & result
)
```

SUSY-HIT MSSM decays: sup_r. 

### function sdown_l_decays

```
void sdown_l_decays(
    DecayTable::Entry & result
)
```

SUSY-HIT MSSM decays: sdown_l. 

### function sdown_r_decays

```
void sdown_r_decays(
    DecayTable::Entry & result
)
```

SUSY-HIT MSSM decays: sdown_r. 

### function scharm_l_decays

```
void scharm_l_decays(
    DecayTable::Entry & result
)
```

SUSY-HIT MSSM decays: scharm_l. 

### function scharm_r_decays

```
void scharm_r_decays(
    DecayTable::Entry & result
)
```

SUSY-HIT MSSM decays: scharm_r. 

### function sstrange_l_decays

```
void sstrange_l_decays(
    DecayTable::Entry & result
)
```

SUSY-HIT MSSM decays: sstrange_l. 

### function sstrange_r_decays

```
void sstrange_r_decays(
    DecayTable::Entry & result
)
```

SUSY-HIT MSSM decays: sstrange_r. 

### function selectron_l_decays

```
void selectron_l_decays(
    DecayTable::Entry & result
)
```

SUSY-HIT MSSM decays: selectron_l. 

### function selectron_r_decays

```
void selectron_r_decays(
    DecayTable::Entry & result
)
```

SUSY-HIT MSSM decays: selectron_r. 

### function smuon_l_decays

```
void smuon_l_decays(
    DecayTable::Entry & result
)
```

SUSY-HIT MSSM decays: smuon_l. 

### function smuon_r_decays

```
void smuon_r_decays(
    DecayTable::Entry & result
)
```

SUSY-HIT MSSM decays: smuon_r. 

### function stau_1_decays

```
void stau_1_decays(
    DecayTable::Entry & result
)
```

MSSM decays: stau_1 (Uses SUSY-HIT results or dedicated DecayBit calculation for small mass splittings) 

### function stau_1_decays_SH

```
void stau_1_decays_SH(
    DecayTable::Entry & result
)
```

SUSY-HIT MSSM decays: stau_1. 

### function stau_2_decays

```
void stau_2_decays(
    DecayTable::Entry & result
)
```

SUSY-HIT MSSM decays: stau_2. 

### function snu_electronl_decays

```
void snu_electronl_decays(
    DecayTable::Entry & result
)
```

SUSY-HIT MSSM decays: snu_electronl. 

### function snu_muonl_decays

```
void snu_muonl_decays(
    DecayTable::Entry & result
)
```

SUSY-HIT MSSM decays: snu_muonl. 

### function snu_taul_decays

```
void snu_taul_decays(
    DecayTable::Entry & result
)
```


SUSY-HIT MSSM decays: snu_taul Note that SUSY-HIT calls ~nu_tau_L "snutau1" even though it has no RH (~)nus. 


### function chargino_plus_1_decays

```
void chargino_plus_1_decays(
    DecayTable::Entry & result
)
```

MSSM decays: chargino_plus_1 (Uses SUSY-HIT results or dedicated DecayBit calculation for small mass splittings) 

### function chargino_plus_1_decays_SH

```
void chargino_plus_1_decays_SH(
    DecayTable::Entry & result
)
```

SUSY-HIT MSSM decays: chargino_plus_1. 

### function chargino_plus_2_decays

```
void chargino_plus_2_decays(
    DecayTable::Entry & result
)
```

SUSY-HIT MSSM decays: chargino_plus_2. 

### function neutralino_1_decays

```
void neutralino_1_decays(
    DecayTable::Entry & result
)
```

SUSY-HIT MSSM decays: neutralino_1. 

### function neutralino_2_decays

```
void neutralino_2_decays(
    DecayTable::Entry & result
)
```

SUSY-HIT MSSM decays: neutralino_2. 

### function neutralino_3_decays

```
void neutralino_3_decays(
    DecayTable::Entry & result
)
```

SUSY-HIT MSSM decays: neutralino_3. 

### function neutralino_4_decays

```
void neutralino_4_decays(
    DecayTable::Entry & result
)
```

SUSY-HIT MSSM decays: neutralino_4. 

### function chargino_plus_1_decays_smallsplit

```
void chargino_plus_1_decays_smallsplit(
    DecayTable::Entry & result
)
```


MSSM decays: chargino decays for small chargino&ndash;neutralino mass splitting. Using results from hep-ph/9607421. 


### function stau_1_decays_smallsplit

```
void stau_1_decays_smallsplit(
    DecayTable::Entry & result
)
```


MSSM decays: stau decays for small stau&ndash;neutralino mass splitting. Using results from T. Jittoh, J. Sato, T. Shimomura, M. Yamanaka, Phys. Rev. D73 (2006), hep-ph/0512197 


### function ScalarSingletDM_Higgs_decays

```
void ScalarSingletDM_Higgs_decays(
    DecayTable::Entry & result
)
```

Add the decay of Higgs to singlets for the ScalarSingletDM models. 

### function VectorSingletDM_Higgs_decays

```
void VectorSingletDM_Higgs_decays(
    DecayTable::Entry & result
)
```

Add the decay of Higgs to vectors for the VectorSingletDM models (see arXiv:1512.06458v4) 

### function MajoranaSingletDM_Higgs_decays

```
void MajoranaSingletDM_Higgs_decays(
    DecayTable::Entry & result
)
```

Add the decay of Higgs to Majorana fermions for the MajoranaSingletDM models (see arXiv:1512.06458v4) 

### function DiracSingletDM_Higgs_decays

```
void DiracSingletDM_Higgs_decays(
    DecayTable::Entry & result
)
```

Add the decay of Higgs to Dirac fermions for the DiracSingletDM models (see arXiv:1512.06458v4) 

### function all_decays

```
void all_decays(
    DecayTable & decays
)
```

Collect all the DecayTable entries into an actual DecayTable. 

Spit out the full decay table as SLHA1 and SLHA2 files.

Invalidate MSSM points that have a stable charged particle?

Check all particles for negative decay width

Spit out the full decay table as an SLHA file.


### function all_decays_from_SLHA

```
void all_decays_from_SLHA(
    DecayTable & decays
)
```


Read an SLHA2 file in and use it to create a GAMBIT DecayTable. Note that creating a DecayTable from an SLHA1 file is not possible at present. 


### function get_decaytable_as_map

```
void get_decaytable_as_map(
    map_str_dbl & map
)
```

Convert the DecayTable to a format where we can print each individual channel's BF. 

Otherwise just print the specific, named channels


### function get_mass_es_pseudonyms

```
void get_mass_es_pseudonyms(
    mass_es_pseudonyms & result
)
```

Get MSSM mass eigenstate pseudonyms for the gauge eigenstates. 

### function check_first_sec_gen_mixing

```
void check_first_sec_gen_mixing(
    int & result
)
```


SLHA1 mixing check flag This gets set non-zero if first or second generation left-right mixing exceeds the specified tolerance (which means that SLHA1 is an invalid format for this model point). 1 = u, 2 = d, 3 = c, 4 = s, 5 = e, 6 = mu 


### function get_Higgs_invWidth_chi2

```
daFunk::Funk get_Higgs_invWidth_chi2(
    std::string filename
)
```


### function MSSM_inv_Higgs_BF

```
void MSSM_inv_Higgs_BF(
    double & BF
)
```


Branching fraction for Higgs into pair of lightest neutralinos

Tree-level formulas 

Assumes decoupling limit for Higgs mixing angle \[ \alpha = \beta - \frac12 \pi \]

Only includes neutralinos, charginos and SM-like width in total width

BF\(\textrm{BR}(h\to\chi^0_1\chi^0_1)\)


### function ScalarSingletDM_inv_Higgs_BF

```
void ScalarSingletDM_inv_Higgs_BF(
    double & BF
)
```


Branching fraction for Higgs into scalar singlet DM BF\(\textrm{BR}(h\to S S)\)


### function VectorSingletDM_inv_Higgs_BF

```
void VectorSingletDM_inv_Higgs_BF(
    double & BF
)
```


Branching fraction for Higgs into vector singlet DM BF\(\textrm{BR}(h\to V V)\)


### function MajoranaSingletDM_inv_Higgs_BF

```
void MajoranaSingletDM_inv_Higgs_BF(
    double & BF
)
```


Branching fraction for Higgs into Majorana singlet DM BF\(\textrm{BR}(h\to X X)\)


### function DiracSingletDM_inv_Higgs_BF

```
void DiracSingletDM_inv_Higgs_BF(
    double & BF
)
```


Branching fraction for Higgs into Dirac singlet DM BF\(\textrm{BR}(h\to F F)\)


### function lnL_Higgs_invWidth_SMlike

```
void lnL_Higgs_invWidth_SMlike(
    double & lnL
)
```


Log-likelihood for Higgs invisible branching ratio

We use log-likelihoods extracted from e.g., [CMS-PAS-HIG-17-023](http://cms-results.web.cern.ch/cms-results/public-results/
preliminary-results/HIG-17-023/CMS-PAS-HIG-17-023_Figure_007-b.png)

There are scripts 

```cpp
python ./DecayBit/data/convolve_with_theory.py <file> <frac_error> <min> <max>
```

 for convolving a data file with a fractional theory error, and 

```cpp
python ./DecayBit/data/profile_theory.py <file> <frac_error> <min> <max>
```

 for profiling a fractional theory error.

There are a few data files, e.g., 

```cpp
./DecayBit/data/arXiv_1306.2941_Figure_8.dat
./DecayBit/data/CMS-PAS-HIG-17-023_Figure_7-b.dat
./DecayBit/data/CMS-PAS-HIG-17-023_Figure_7-b_10_convolved.dat
./DecayBit/data/CMS-PAS-HIG-17-023_Figure_7-b_10_profiled.dat
```

 The first one is the default. The third and fourth ones include a 10% theory uncertainty in the branching fraction by convolving it and profiling it, respectively. The data file is specified in the YAML by the `BR_h_inv_chi2_data_file` option. The path is relative to the GAMBIT directory, `GAMBIT_DIR`.

This typically assumes that the Higgs is otherwise SM-like, i.e., no changes to production cross sections or any other decays.

lnLLog-likelihood for Higgs invisible branching ratio


### function lnL_Z_inv

```
void lnL_Z_inv(
    double & lnL
)
```


Log-likelihood from LEP measurements of \(Z\)-boson invisible width

This is valid for SM, RHN models and for MSSM-like models with Z-boson invisible decays to neutralinos and neutrinos

lnLLog-likelihood


### function Z_gamma_nu_2l

```
void Z_gamma_nu_2l(
    triplet< double > & gamma
)
```


Calculate width of \(Z\) decays to neutrinos (with RHN correction if present), \(\Gamma(Z\to\nu\nu)\) at two-loop in GeV

This uses input \(\alpha(M_Z)\) - does not include input light-quark thresholds.

gamma\(\Gamma(Z\to\chi\chi)\)


### function Z_gamma_chi_0_MSSM_tree

```
void Z_gamma_chi_0_MSSM_tree(
    triplet< double > & gamma
)
```


Calculate width of \(Z\) decays to the lightest neutralinos, \(\Gamma(Z\to\chi^0_1\chi^0_1)\) in GeV

Tree-level formula with 10% error

gamma\(\Gamma(Z\to\chi^0_1\chi^0_1)\)


### function RHN_W_to_l_decays

```
void RHN_W_to_l_decays(
    std::vector< double > & result
)
```


### function lnL_W_decays_chi2

```
void lnL_W_decays_chi2(
    double & result
)
```






-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000