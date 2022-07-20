---
title: 'namespace Gambit::FlavBit'

description: "[No description available]"

---






[No description available]

## Namespaces

| Name           |
| -------------- |
| **[Gambit::FlavBit::Boxes](/documentation/code/namespaces/namespacegambit_1_1flavbit_1_1boxes/)**  |
| **[Gambit::FlavBit::FormFactors](/documentation/code/namespaces/namespacegambit_1_1flavbit_1_1formfactors/)**  |
| **[Gambit::FlavBit::LoopFunctions](/documentation/code/namespaces/namespacegambit_1_1flavbit_1_1loopfunctions/)**  |
| **[Gambit::FlavBit::Penguins](/documentation/code/namespaces/namespacegambit_1_1flavbit_1_1penguins/)**  |
| **[Gambit::FlavBit::Vertices](/documentation/code/namespaces/namespacegambit_1_1flavbit_1_1vertices/)**  |

## Classes

|                | Name           |
| -------------- | -------------- |
| struct | **[Gambit::FlavBit::Correlation](/documentation/code/classes/structgambit_1_1flavbit_1_1correlation/)** <br>Simple structure for holding a correlation value and name of the correlated observable.  |
| class | **[Gambit::FlavBit::Flav_reader](/documentation/code/classes/classgambit_1_1flavbit_1_1flav__reader/)** <br>Reader class for FlavBit YAML database.  |
| struct | **[Gambit::FlavBit::Measurement](/documentation/code/classes/structgambit_1_1flavbit_1_1measurement/)** <br>Representation of a single entry in the FlavBit YAML database.  |
| struct | **[Gambit::FlavBit::predictions_measurements_covariances](/documentation/code/classes/structgambit_1_1flavbit_1_1predictions__measurements__covariances/)**  |

## Functions

|                | Name           |
| -------------- | -------------- |
| void | **[FeynHiggs_prediction_bsgamma](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-feynhiggs-prediction-bsgamma)**(double & result) |
| void | **[FeynHiggs_prediction_Bsmumu](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-feynhiggs-prediction-bsmumu)**(double & result) |
| void | **[FeynHiggs_prediction_DeltaMs](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-feynhiggs-prediction-deltams)**(double & result) |
| template <class T \> <br>bool | **[InvertMatrix](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-invertmatrix)**(const ublas::matrix< T > & input, ublas::matrix< T > & inverse)<br>Matrix inversion routine using Boost.  |
| void | **[operator>>](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-operator>>)**(const YAML::Node & node, [Correlation](/documentation/code/classes/structgambit_1_1flavbit_1_1correlation/) & c)<br>Extraction operator for correlation.  |
| void | **[operator>>](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-operator>>)**(const YAML::Node & node, [Measurement](/documentation/code/classes/structgambit_1_1flavbit_1_1measurement/) & v)<br>Extraction operator for measurement.  |
| Utils::translator | **[translate_flav_obs](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-translate-flav-obs)**(GAMBIT_DIR "/FlavBit/data/observables_key.yaml" )<br>FlavBit observable name translator.  |
| const [nuiscorr](/documentation/code/classes/structgambit_1_1nuiscorr/)(& | **[nuiscorr_help](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-nuiscorr-help)**([nuiscorr](/documentation/code/classes/structgambit_1_1nuiscorr/)(&) arr[ncorrnuis], const std::vector< [nuiscorr](/documentation/code/classes/structgambit_1_1nuiscorr/) > & v) |
| void | **[print](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-print)**(flav_prediction prediction, vector< std::string > names)<br>Print function for FlavBit predictions.  |
| void | **[Kstarll_Theory2Experiment_translation](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-kstarll-theory2experiment-translation)**(flav_observable_map & prediction, int generation)<br>Translate B->K*ll observables from theory to LHCb convention.  |
| void | **[Kstarll_Theory2Experiment_translation](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-kstarll-theory2experiment-translation)**(flav_covariance_map & prediction, int generation)<br>Translate B->K*ll covariances from theory to LHCb convention.  |
| str | **[path_to_latest_heplike_data](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-path-to-latest-heplike-data)**()<br>Find the path to the latest installed version of the HepLike data.  |
| void | **[SuperIso_fill](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-superiso-fill)**([parameters](/documentation/code/classes/structgambit_1_1parameters/) & result)<br>Fill SuperIso model info structure.  |
| void | **[SuperIso_nuisance_fill](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-superiso-nuisance-fill)**([nuisance](/documentation/code/classes/structgambit_1_1nuisance/) & nuislist)<br>Fill SuperIso nuisance structure.  |
| void | **[update_obs_list](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-update-obs-list)**(std::vector< str > & obs_list, const std::vector< str > & HL_obs_list)<br>Reorder a FlavBit observables list to match ordering expected by HEPLike.  |
| std::vector< double > | **[get_obs_theory](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-get-obs-theory)**(const flav_prediction & prediction, const std::vector< std::string > & observables)<br>Extract central values of the given observables from the central value map.  |
| boost::numeric::ublas::matrix< double > | **[get_obs_covariance](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-get-obs-covariance)**(const flav_prediction & prediction, const std::vector< std::string > & observables)<br>Extract covariance matrix of the given observables from the covariance map.  |
| void | **[SuperIso_prediction_helper](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-superiso-prediction-helper)**(const std::vector< std::string > & FB_obslist, const std::vector< std::string > & SI_obslist, flav_prediction & result, const [parameters](/documentation/code/classes/structgambit_1_1parameters/) & param, const [nuisance](/documentation/code/classes/structgambit_1_1nuisance/) & nuislist, void(*)(char **, int *, double **, const [parameters](/documentation/code/classes/structgambit_1_1parameters/) *, const [nuisance](/documentation/code/classes/structgambit_1_1nuisance/) *) get_predictions_nuisance, void(*)(int, [obsname](/documentation/code/classes/structgambit_1_1obsname/) *, int, double *, double *, const [nuisance](/documentation/code/classes/structgambit_1_1nuisance/) *, char **, const [parameters](/documentation/code/classes/structgambit_1_1parameters/) *) observables, void(*)([nuiscorr](/documentation/code/classes/structgambit_1_1nuiscorr/) *, int, double **, char **, int) convert_correlation, void(*)(double ***, char **, int *, const [parameters](/documentation/code/classes/structgambit_1_1parameters/) *, const [nuisance](/documentation/code/classes/structgambit_1_1nuisance/) *, double **) get_th_covariance_nuisance, bool useSMCovariance, bool SMCovarianceCached)<br>Helper function to avoid code duplication.  |
| | **[SI_MULTI_PREDICTION_FUNCTION](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-si-multi-prediction-function)**(B2mumu ) |
| _Atlas | **[SI_MULTI_PREDICTION_FUNCTION_BINS](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-si-multi-prediction-function-bins)**(B2KstarmumuAng , _2_4 , _Atlas ) |
| _Atlas _Atlas | **[SI_MULTI_PREDICTION_FUNCTION_BINS](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-si-multi-prediction-function-bins)**(B2KstarmumuAng , _1_2 , _CMS ) |
| _Atlas _Atlas _CMS | **[SI_MULTI_PREDICTION_FUNCTION_BINS](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-si-multi-prediction-function-bins)**(B2KstarmumuAng , _4p3_6 , _CMS ) |
| _Atlas _Atlas _CMS _CMS | **[SI_MULTI_PREDICTION_FUNCTION_BINS](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-si-multi-prediction-function-bins)**(B2KstarmumuAng , _10p09_12p86 , _CMS ) |
| _Atlas _Atlas _CMS _CMS _CMS | **[SI_MULTI_PREDICTION_FUNCTION_BINS](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-si-multi-prediction-function-bins)**(B2KstarmumuAng , _16_19 , _CMS ) |
| _Atlas _Atlas _CMS _CMS _CMS _Belle | **[SI_MULTI_PREDICTION_FUNCTION_BINS](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-si-multi-prediction-function-bins)**(B2KstarmumuAng , _4_8 , _Belle ) |
| _Atlas _Atlas _CMS _CMS _CMS _Belle _Belle | **[SI_MULTI_PREDICTION_FUNCTION_BINS](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-si-multi-prediction-function-bins)**(B2KstarmumuAng , _14p18_19 , _Belle ) |
| _Atlas _Atlas _CMS _CMS _CMS _Belle _Belle _LHCb | **[SI_MULTI_PREDICTION_FUNCTION_BINS](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-si-multi-prediction-function-bins)**(B2KstarmumuAng , _1p1_2p5 , _LHCb ) |
| _Atlas _Atlas _CMS _CMS _CMS _Belle _Belle _LHCb _LHCb | **[SI_MULTI_PREDICTION_FUNCTION_BINS](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-si-multi-prediction-function-bins)**(B2KstarmumuAng , _4_6 , _LHCb ) |
| _Atlas _Atlas _CMS _CMS _CMS _Belle _Belle _LHCb _LHCb _LHCb | **[SI_MULTI_PREDICTION_FUNCTION_BINS](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-si-multi-prediction-function-bins)**(B2KstarmumuAng , _15_19 , _LHCb ) |
| _Atlas _Atlas _CMS _CMS _CMS _Belle _Belle _LHCb _LHCb _LHCb _LHCb void | **[SuperIso_prediction_Btaunu](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-superiso-prediction-btaunu)**(double & result)<br>Br B->tau nu_tau decays.  |
| void | **[SuperIso_prediction_Dstaunu](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-superiso-prediction-dstaunu)**(double & result)<br>Br B->D_s tau nu.  |
| void | **[SuperIso_prediction_Dsmunu](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-superiso-prediction-dsmunu)**(double & result)<br>Br B->D_s mu nu.  |
| void | **[SuperIso_prediction_Dmunu](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-superiso-prediction-dmunu)**(double & result)<br>Br D -> mu nu.  |
| void | **[SuperIso_prediction_BDtaunu](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-superiso-prediction-bdtaunu)**(double & result)<br>Br B -> D tau nu.  |
| void | **[SuperIso_prediction_BDmunu](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-superiso-prediction-bdmunu)**(double & result)<br>Br B -> D mu nu.  |
| void | **[SuperIso_prediction_BDstartaunu](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-superiso-prediction-bdstartaunu)**(double & result)<br>Br B -> D* tau nu.  |
| void | **[SuperIso_prediction_BDstarmunu](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-superiso-prediction-bdstarmunu)**(double & result)<br>Br B -> D* mu nu.  |
| void | **[SuperIso_prediction_RD](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-superiso-prediction-rd)**(double & result)<br>B-> D tau nu / B-> D e nu decays.  |
| void | **[SuperIso_prediction_RDstar](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-superiso-prediction-rdstar)**(double & result)<br>B->D* tau nu / B-> D* e nu decays.  |
| void | **[SuperIso_prediction_Rmu](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-superiso-prediction-rmu)**(double & result)<br>B->K mu nu / B-> pi mu nu.  |
| void | **[SuperIso_prediction_Rmu23](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-superiso-prediction-rmu23)**(double & result)<br>2-to-3-body decay ratio for semileptonic K and pi decays  |
| void | **[SuperIso_prediction_delta0](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-superiso-prediction-delta0)**(double & result)<br>Delta_0 (CP-averaged isospin asymmetry of B -> K* gamma)  |
| void | **[SuperIso_prediction_A_BXsmumu_zero](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-superiso-prediction-a-bxsmumu-zero)**(double & result)<br>Zero crossing of the forward-backward asymmetry of B -> X_s mu mu.  |
| void | **[SuperIso_prediction_BRBXstautau_highq2](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-superiso-prediction-brbxstautau-highq2)**(double & result)<br>Inclusive branching fraction B -> X_s tau tau at high q^2.  |
| void | **[SuperIso_prediction_A_BXstautau_highq2](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-superiso-prediction-a-bxstautau-highq2)**(double & result)<br>Forward-backward asymmetry of B -> X_s tau tau at high q^2.  |
| void | **[RHN_RKstar_0045_11](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-rhn-rkstar-0045-11)**(double & result) |
| void | **[RHN_RKstar_11_60](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-rhn-rkstar-11-60)**(double & result) |
| void | **[RHN_RK](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-rhn-rk)**(double & result)<br>RK for RHN.  |
| void | **[SuperIso_prediction_AI_BKstarmumu](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-superiso-prediction-ai-bkstarmumu)**(double & result)<br>Isospin asymmetry of B-> K* mu mu.  |
| void | **[SuperIso_prediction_AI_BKstarmumu_zero](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-superiso-prediction-ai-bkstarmumu-zero)**(double & result)<br>Zero crossing of isospin asymmetry of B-> K* mu mu.  |
| void | **[FeynHiggs_FlavourObs](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-feynhiggs-flavourobs)**([fh_FlavourObs_container](/documentation/code/classes/structgambit_1_1fh__flavourobs__container/) & result)<br>Flavour observables from FeynHiggs: B_s mass asymmetry, Br B_s -> mu mu, Br B -> X_s gamma.  |
| void | **[deltaMB_likelihood](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-deltamb-likelihood)**(double & result)<br>Likelihood for Delta Ms.  |
| void | **[SL_measurements](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-sl-measurements)**([predictions_measurements_covariances](/documentation/code/classes/structgambit_1_1flavbit_1_1predictions__measurements__covariances/) & pmc)<br>Measurements for tree-level leptonic and semileptonic B decays.  |
| void | **[SL_likelihood](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-sl-likelihood)**(double & result)<br>Likelihood for tree-level leptonic and semileptonic B decays.  |
| double | **[G](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-g)**(const double x) |
| void | **[RHN_muegamma](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-rhn-muegamma)**(double & result) |
| void | **[RHN_tauegamma](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-rhn-tauegamma)**(double & result) |
| void | **[RHN_taumugamma](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-rhn-taumugamma)**(double & result) |
| double | **[RHN_l2lll](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-rhn-l2lll)**(int alpha, int beta, int gamma, int delta, SMInputs sminputs, Eigen::Matrix3cd Vnu, Eigen::Matrix3cd Theta, Eigen::Matrix3cd m_nu, double M1, double M2, double M3, double mH) |
| void | **[RHN_mueee](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-rhn-mueee)**(double & result) |
| void | **[RHN_taueee](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-rhn-taueee)**(double & result) |
| void | **[RHN_taumumumu](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-rhn-taumumumu)**(double & result) |
| void | **[RHN_taumuee](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-rhn-taumuee)**(double & result) |
| void | **[RHN_taueemu](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-rhn-taueemu)**(double & result) |
| void | **[RHN_tauemumu](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-rhn-tauemumu)**(double & result) |
| void | **[RHN_taumumue](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-rhn-taumumue)**(double & result) |
| void | **[RHN_mue_FF](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-rhn-mue-ff)**(const SMInputs sminputs, std::vector< double > & mnu, Eigen::Matrix< complex< double >, 3, 6 > & U, const double mH, complex< double > & g0SL, complex< double > & g0SR, complex< double > & g0VL, complex< double > & g0VR, complex< double > & g1SL, complex< double > & g1SR, complex< double > & g1VL, complex< double > & g1VR) |
| void | **[RHN_mueTi](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-rhn-mueti)**(double & result) |
| void | **[RHN_mueAu](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-rhn-mueau)**(double & result) |
| void | **[RHN_muePb](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-rhn-muepb)**(double & result) |
| void | **[l2lgamma_likelihood](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-l2lgamma-likelihood)**(double & result)<br>Likelihood for l -> l gamma processes.  |
| void | **[l2lll_likelihood](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-l2lll-likelihood)**(double & result)<br>Likelihood for l -> l l l processes.  |
| void | **[mu2e_likelihood](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-mu2e-likelihood)**(double & result)<br>Likelihood for mu - e conversion in nuclei.  |
| void | **[HEPLike_RDRDstar_LogLikelihood](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-heplike-rdrdstar-loglikelihood)**(double & result)<br>HEPLike LogLikelihood RD RDstar.  |
| void | **[HEPLike_B2mumu_LogLikelihood_CMS](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-heplike-b2mumu-loglikelihood-cms)**(double & result) |
| void | **[HEPLike_B2mumu_LogLikelihood_Atlas](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-heplike-b2mumu-loglikelihood-atlas)**(double & result) |
| void | **[HEPLike_B2mumu_LogLikelihood_LHCb](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-heplike-b2mumu-loglikelihood-lhcb)**(double & result) |
| void | **[HEPLike_B2KstarmumuAng_LogLikelihood_Atlas](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-heplike-b2kstarmumuang-loglikelihood-atlas)**(double & result) |
| void | **[HEPLike_B2KstarmumuAng_LogLikelihood_CMS](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-heplike-b2kstarmumuang-loglikelihood-cms)**(double & result) |
| void | **[HEPLike_B2KstarmumuAng_LogLikelihood_Belle](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-heplike-b2kstarmumuang-loglikelihood-belle)**(double & result) |
| void | **[HEPLike_B2KstarellellAng_LogLikelihood_Belle](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-heplike-b2kstarellellang-loglikelihood-belle)**(double & result) |
| void | **[HEPLike_B2KstarmumuAng_LogLikelihood_LHCb](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-heplike-b2kstarmumuang-loglikelihood-lhcb)**(double & result) |
| void | **[HEPLike_B2KstarmumuAng_LogLikelihood_LHCb_2020](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-heplike-b2kstarmumuang-loglikelihood-lhcb-2020)**(double & result) |
| void | **[HEPLike_B2KstareeAng_Lowq2_LogLikelihood_LHCb_2020](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-heplike-b2kstareeang-lowq2-loglikelihood-lhcb-2020)**(double & result) |
| void | **[HEPLike_Bu2KstarmumuAng_LogLikelihood_LHCb_2020](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-heplike-bu2kstarmumuang-loglikelihood-lhcb-2020)**(double & result) |
| void | **[HEPLike_B2KstarmumuBr_LogLikelihood_LHCb](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-heplike-b2kstarmumubr-loglikelihood-lhcb)**(double & result)<br>HEPLike LogLikelihood B -> K* mu mu Br (LHCb)  |
| void | **[HEPLike_B2KmumuBr_LogLikelihood_LHCb](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-heplike-b2kmumubr-loglikelihood-lhcb)**(double & result)<br>HEPLike LogLikelihood B -> K+ mu mu Br (LHCb)  |
| void | **[HEPLike_Bs2phimumuBr_LogLikelihood](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-heplike-bs2phimumubr-loglikelihood)**(double & result) |
| void | **[HEPLike_RK_LogLikelihood](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-heplike-rk-loglikelihood)**(double & result) |
| void | **[HEPLike_RKstar_LogLikelihood_LHCb](/documentation/code/namespaces/namespacegambit_1_1flavbit/#function-heplike-rkstar-loglikelihood-lhcb)**(double & result) |

## Attributes

|                | Name           |
| -------------- | -------------- |
| const bool | **[flav_debug](/documentation/code/namespaces/namespacegambit_1_1flavbit/#variable-flav-debug)**  |
| const bool | **[flav_debug_LL](/documentation/code/namespaces/namespacegambit_1_1flavbit/#variable-flav-debug-ll)**  |
| const int | **[ncorrnuis](/documentation/code/namespaces/namespacegambit_1_1flavbit/#variable-ncorrnuis)** <br>Some constants used in SuperIso likelihoods.  |
| [nuiscorr](/documentation/code/classes/structgambit_1_1nuiscorr/) | **[arr](/documentation/code/namespaces/namespacegambit_1_1flavbit/#variable-arr)**  |
| const [nuiscorr](/documentation/code/classes/structgambit_1_1nuiscorr/)(& | **[corrnuis](/documentation/code/namespaces/namespacegambit_1_1flavbit/#variable-corrnuis)**  |
| | **[_0p1_2](/documentation/code/namespaces/namespacegambit_1_1flavbit/#variable--0p1-2)**  |
| _Atlas | **[_4_8](/documentation/code/namespaces/namespacegambit_1_1flavbit/#variable--4-8)**  |
| _Atlas _Atlas | **[_2_4p3](/documentation/code/namespaces/namespacegambit_1_1flavbit/#variable--2-4p3)**  |
| _Atlas _Atlas _CMS | **[_6_8p68](/documentation/code/namespaces/namespacegambit_1_1flavbit/#variable--6-8p68)**  |
| _Atlas _Atlas _CMS _CMS | **[_14p18_16](/documentation/code/namespaces/namespacegambit_1_1flavbit/#variable--14p18-16)**  |
| _Atlas _Atlas _CMS _CMS _CMS | **[_0p1_4](/documentation/code/namespaces/namespacegambit_1_1flavbit/#variable--0p1-4)**  |
| _Atlas _Atlas _CMS _CMS _CMS _Belle | **[_10p9_12p9](/documentation/code/namespaces/namespacegambit_1_1flavbit/#variable--10p9-12p9)**  |
| _Atlas _Atlas _CMS _CMS _CMS _Belle _Belle | **[_0p1_0p98](/documentation/code/namespaces/namespacegambit_1_1flavbit/#variable--0p1-0p98)**  |
| _Atlas _Atlas _CMS _CMS _CMS _Belle _Belle _LHCb | **[_2p5_4](/documentation/code/namespaces/namespacegambit_1_1flavbit/#variable--2p5-4)**  |
| _Atlas _Atlas _CMS _CMS _CMS _Belle _Belle _LHCb _LHCb | **[_6_8](/documentation/code/namespaces/namespacegambit_1_1flavbit/#variable--6-8)**  |
| _Atlas _Atlas _CMS _CMS _CMS _Belle _Belle _LHCb _LHCb _LHCb | **[_0p0008_0p257](/documentation/code/namespaces/namespacegambit_1_1flavbit/#variable--0p0008-0p257)**  |


## Functions Documentation

### function FeynHiggs_prediction_bsgamma

```
void FeynHiggs_prediction_bsgamma(
    double & result
)
```


These functions extract observables from a FeynHiggs flavour result 


### function FeynHiggs_prediction_Bsmumu

```
void FeynHiggs_prediction_Bsmumu(
    double & result
)
```


### function FeynHiggs_prediction_DeltaMs

```
void FeynHiggs_prediction_DeltaMs(
    double & result
)
```


### function InvertMatrix

```
template <class T >
bool InvertMatrix(
    const ublas::matrix< T > & input,
    ublas::matrix< T > & inverse
)
```

Matrix inversion routine using Boost. 

### function operator>>

```
void operator>>(
    const YAML::Node & node,
    Correlation & c
)
```

Extraction operator for correlation. 

### function operator>>

```
void operator>>(
    const YAML::Node & node,
    Measurement & v
)
```

Extraction operator for measurement. 

### function translate_flav_obs

```
Utils::translator translate_flav_obs(
    GAMBIT_DIR "/FlavBit/data/observables_key.yaml" 
)
```

FlavBit observable name translator. 

### function nuiscorr_help

```
const nuiscorr(& nuiscorr_help(
    nuiscorr(&) arr[ncorrnuis],
    const std::vector< nuiscorr > & v
)
```


### function print

```
void print(
    flav_prediction prediction,
    vector< std::string > names
)
```

Print function for FlavBit predictions. 

### function Kstarll_Theory2Experiment_translation

```
void Kstarll_Theory2Experiment_translation(
    flav_observable_map & prediction,
    int generation
)
```

Translate B->K*ll observables from theory to LHCb convention. 

### function Kstarll_Theory2Experiment_translation

```
void Kstarll_Theory2Experiment_translation(
    flav_covariance_map & prediction,
    int generation
)
```

Translate B->K*ll covariances from theory to LHCb convention. 

### function path_to_latest_heplike_data

```
str path_to_latest_heplike_data()
```

Find the path to the latest installed version of the HepLike data. 

### function SuperIso_fill

```
void SuperIso_fill(
    parameters & result
)
```

Fill SuperIso model info structure. 

### function SuperIso_nuisance_fill

```
void SuperIso_nuisance_fill(
    nuisance & nuislist
)
```

Fill SuperIso nuisance structure. 

### function update_obs_list

```
void update_obs_list(
    std::vector< str > & obs_list,
    const std::vector< str > & HL_obs_list
)
```

Reorder a FlavBit observables list to match ordering expected by HEPLike. 

### function get_obs_theory

```
std::vector< double > get_obs_theory(
    const flav_prediction & prediction,
    const std::vector< std::string > & observables
)
```

Extract central values of the given observables from the central value map. 

### function get_obs_covariance

```
boost::numeric::ublas::matrix< double > get_obs_covariance(
    const flav_prediction & prediction,
    const std::vector< std::string > & observables
)
```

Extract covariance matrix of the given observables from the covariance map. 

### function SuperIso_prediction_helper

```
void SuperIso_prediction_helper(
    const std::vector< std::string > & FB_obslist,
    const std::vector< std::string > & SI_obslist,
    flav_prediction & result,
    const parameters & param,
    const nuisance & nuislist,
    void(*)(char **, int *, double **, const parameters *, const nuisance *) get_predictions_nuisance,
    void(*)(int, obsname *, int, double *, double *, const nuisance *, char **, const parameters *) observables,
    void(*)(nuiscorr *, int, double **, char **, int) convert_correlation,
    void(*)(double ***, char **, int *, const parameters *, const nuisance *, double **) get_th_covariance_nuisance,
    bool useSMCovariance,
    bool SMCovarianceCached
)
```

Helper function to avoid code duplication. 

### function SI_MULTI_PREDICTION_FUNCTION

```
SI_MULTI_PREDICTION_FUNCTION(
    B2mumu 
)
```


### function SI_MULTI_PREDICTION_FUNCTION_BINS

```
_Atlas SI_MULTI_PREDICTION_FUNCTION_BINS(
    B2KstarmumuAng ,
    _2_4 ,
    _Atlas 
)
```


### function SI_MULTI_PREDICTION_FUNCTION_BINS

```
_Atlas _Atlas SI_MULTI_PREDICTION_FUNCTION_BINS(
    B2KstarmumuAng ,
    _1_2 ,
    _CMS 
)
```


### function SI_MULTI_PREDICTION_FUNCTION_BINS

```
_Atlas _Atlas _CMS SI_MULTI_PREDICTION_FUNCTION_BINS(
    B2KstarmumuAng ,
    _4p3_6 ,
    _CMS 
)
```


### function SI_MULTI_PREDICTION_FUNCTION_BINS

```
_Atlas _Atlas _CMS _CMS SI_MULTI_PREDICTION_FUNCTION_BINS(
    B2KstarmumuAng ,
    _10p09_12p86 ,
    _CMS 
)
```


### function SI_MULTI_PREDICTION_FUNCTION_BINS

```
_Atlas _Atlas _CMS _CMS _CMS SI_MULTI_PREDICTION_FUNCTION_BINS(
    B2KstarmumuAng ,
    _16_19 ,
    _CMS 
)
```


### function SI_MULTI_PREDICTION_FUNCTION_BINS

```
_Atlas _Atlas _CMS _CMS _CMS _Belle SI_MULTI_PREDICTION_FUNCTION_BINS(
    B2KstarmumuAng ,
    _4_8 ,
    _Belle 
)
```


### function SI_MULTI_PREDICTION_FUNCTION_BINS

```
_Atlas _Atlas _CMS _CMS _CMS _Belle _Belle SI_MULTI_PREDICTION_FUNCTION_BINS(
    B2KstarmumuAng ,
    _14p18_19 ,
    _Belle 
)
```


### function SI_MULTI_PREDICTION_FUNCTION_BINS

```
_Atlas _Atlas _CMS _CMS _CMS _Belle _Belle _LHCb SI_MULTI_PREDICTION_FUNCTION_BINS(
    B2KstarmumuAng ,
    _1p1_2p5 ,
    _LHCb 
)
```


### function SI_MULTI_PREDICTION_FUNCTION_BINS

```
_Atlas _Atlas _CMS _CMS _CMS _Belle _Belle _LHCb _LHCb SI_MULTI_PREDICTION_FUNCTION_BINS(
    B2KstarmumuAng ,
    _4_6 ,
    _LHCb 
)
```


### function SI_MULTI_PREDICTION_FUNCTION_BINS

```
_Atlas _Atlas _CMS _CMS _CMS _Belle _Belle _LHCb _LHCb _LHCb SI_MULTI_PREDICTION_FUNCTION_BINS(
    B2KstarmumuAng ,
    _15_19 ,
    _LHCb 
)
```


### function SuperIso_prediction_Btaunu

```
_Atlas _Atlas _CMS _CMS _CMS _Belle _Belle _LHCb _LHCb _LHCb _LHCb void SuperIso_prediction_Btaunu(
    double & result
)
```

Br B->tau nu_tau decays. 

### function SuperIso_prediction_Dstaunu

```
void SuperIso_prediction_Dstaunu(
    double & result
)
```

Br B->D_s tau nu. 

### function SuperIso_prediction_Dsmunu

```
void SuperIso_prediction_Dsmunu(
    double & result
)
```

Br B->D_s mu nu. 

### function SuperIso_prediction_Dmunu

```
void SuperIso_prediction_Dmunu(
    double & result
)
```

Br D -> mu nu. 

### function SuperIso_prediction_BDtaunu

```
void SuperIso_prediction_BDtaunu(
    double & result
)
```

Br B -> D tau nu. 

### function SuperIso_prediction_BDmunu

```
void SuperIso_prediction_BDmunu(
    double & result
)
```

Br B -> D mu nu. 

### function SuperIso_prediction_BDstartaunu

```
void SuperIso_prediction_BDstartaunu(
    double & result
)
```

Br B -> D* tau nu. 

### function SuperIso_prediction_BDstarmunu

```
void SuperIso_prediction_BDstarmunu(
    double & result
)
```

Br B -> D* mu nu. 

### function SuperIso_prediction_RD

```
void SuperIso_prediction_RD(
    double & result
)
```

B-> D tau nu / B-> D e nu decays. 

### function SuperIso_prediction_RDstar

```
void SuperIso_prediction_RDstar(
    double & result
)
```

B->D* tau nu / B-> D* e nu decays. 

### function SuperIso_prediction_Rmu

```
void SuperIso_prediction_Rmu(
    double & result
)
```

B->K mu nu / B-> pi mu nu. 

### function SuperIso_prediction_Rmu23

```
void SuperIso_prediction_Rmu23(
    double & result
)
```

2-to-3-body decay ratio for semileptonic K and pi decays 

### function SuperIso_prediction_delta0

```
void SuperIso_prediction_delta0(
    double & result
)
```

Delta_0 (CP-averaged isospin asymmetry of B -> K* gamma) 

### function SuperIso_prediction_A_BXsmumu_zero

```
void SuperIso_prediction_A_BXsmumu_zero(
    double & result
)
```

Zero crossing of the forward-backward asymmetry of B -> X_s mu mu. 

### function SuperIso_prediction_BRBXstautau_highq2

```
void SuperIso_prediction_BRBXstautau_highq2(
    double & result
)
```

Inclusive branching fraction B -> X_s tau tau at high q^2. 

### function SuperIso_prediction_A_BXstautau_highq2

```
void SuperIso_prediction_A_BXstautau_highq2(
    double & result
)
```

Forward-backward asymmetry of B -> X_s tau tau at high q^2. 

### function RHN_RKstar_0045_11

```
void RHN_RKstar_0045_11(
    double & result
)
```


### function RHN_RKstar_11_60

```
void RHN_RKstar_11_60(
    double & result
)
```


### function RHN_RK

```
void RHN_RK(
    double & result
)
```

RK for RHN. 

### function SuperIso_prediction_AI_BKstarmumu

```
void SuperIso_prediction_AI_BKstarmumu(
    double & result
)
```

Isospin asymmetry of B-> K* mu mu. 

### function SuperIso_prediction_AI_BKstarmumu_zero

```
void SuperIso_prediction_AI_BKstarmumu_zero(
    double & result
)
```

Zero crossing of isospin asymmetry of B-> K* mu mu. 

### function FeynHiggs_FlavourObs

```
void FeynHiggs_FlavourObs(
    fh_FlavourObs_container & result
)
```

Flavour observables from FeynHiggs: B_s mass asymmetry, Br B_s -> mu mu, Br B -> X_s gamma. 

### function deltaMB_likelihood

```
void deltaMB_likelihood(
    double & result
)
```

Likelihood for Delta Ms. 

Option profile_systematics<bool>: Use likelihood version that has been profiled over systematic errors (default false)


### function SL_measurements

```
void SL_measurements(
    predictions_measurements_covariances & pmc
)
```

Measurements for tree-level leptonic and semileptonic B decays. 

### function SL_likelihood

```
void SL_likelihood(
    double & result
)
```

Likelihood for tree-level leptonic and semileptonic B decays. 

### function G

```
double G(
    const double x
)
```


### function RHN_muegamma

```
void RHN_muegamma(
    double & result
)
```


### function RHN_tauegamma

```
void RHN_tauegamma(
    double & result
)
```


### function RHN_taumugamma

```
void RHN_taumugamma(
    double & result
)
```


### function RHN_l2lll

```
double RHN_l2lll(
    int alpha,
    int beta,
    int gamma,
    int delta,
    SMInputs sminputs,
    Eigen::Matrix3cd Vnu,
    Eigen::Matrix3cd Theta,
    Eigen::Matrix3cd m_nu,
    double M1,
    double M2,
    double M3,
    double mH
)
```


### function RHN_mueee

```
void RHN_mueee(
    double & result
)
```


### function RHN_taueee

```
void RHN_taueee(
    double & result
)
```


### function RHN_taumumumu

```
void RHN_taumumumu(
    double & result
)
```


### function RHN_taumuee

```
void RHN_taumuee(
    double & result
)
```


### function RHN_taueemu

```
void RHN_taueemu(
    double & result
)
```


### function RHN_tauemumu

```
void RHN_tauemumu(
    double & result
)
```


### function RHN_taumumue

```
void RHN_taumumue(
    double & result
)
```


### function RHN_mue_FF

```
void RHN_mue_FF(
    const SMInputs sminputs,
    std::vector< double > & mnu,
    Eigen::Matrix< complex< double >, 3, 6 > & U,
    const double mH,
    complex< double > & g0SL,
    complex< double > & g0SR,
    complex< double > & g0VL,
    complex< double > & g0VR,
    complex< double > & g1SL,
    complex< double > & g1SR,
    complex< double > & g1VL,
    complex< double > & g1VR
)
```


### function RHN_mueTi

```
void RHN_mueTi(
    double & result
)
```


### function RHN_mueAu

```
void RHN_mueAu(
    double & result
)
```


### function RHN_muePb

```
void RHN_muePb(
    double & result
)
```


### function l2lgamma_likelihood

```
void l2lgamma_likelihood(
    double & result
)
```

Likelihood for l -> l gamma processes. 

### function l2lll_likelihood

```
void l2lll_likelihood(
    double & result
)
```

Likelihood for l -> l l l processes. 

### function mu2e_likelihood

```
void mu2e_likelihood(
    double & result
)
```

Likelihood for mu - e conversion in nuclei. 

### function HEPLike_RDRDstar_LogLikelihood

```
void HEPLike_RDRDstar_LogLikelihood(
    double & result
)
```

HEPLike LogLikelihood RD RDstar. 

### function HEPLike_B2mumu_LogLikelihood_CMS

```
void HEPLike_B2mumu_LogLikelihood_CMS(
    double & result
)
```


HEPLike LogLikelihood B -> ll (CMS) Recognised sub-capabilities: BRuntag_Bsmumu BR_Bdmumu 


### function HEPLike_B2mumu_LogLikelihood_Atlas

```
void HEPLike_B2mumu_LogLikelihood_Atlas(
    double & result
)
```


HEPLike LogLikelihood B -> ll (ATLAS) Recognised sub-capabilities: BRuntag_Bsmumu BR_Bdmumu 


### function HEPLike_B2mumu_LogLikelihood_LHCb

```
void HEPLike_B2mumu_LogLikelihood_LHCb(
    double & result
)
```


HEPLike LogLikelihood B -> ll (LHCb) Recognised sub-capabilities: BRuntag_Bsmumu BR_Bdmumu 


### function HEPLike_B2KstarmumuAng_LogLikelihood_Atlas

```
void HEPLike_B2KstarmumuAng_LogLikelihood_Atlas(
    double & result
)
```


HEPLike LogLikelihood B -> K* mu mu Angluar (ATLAS) Recognised sub-capabilities: FL S3 S4 S5 S7 S8 


### function HEPLike_B2KstarmumuAng_LogLikelihood_CMS

```
void HEPLike_B2KstarmumuAng_LogLikelihood_CMS(
    double & result
)
```


HEPLike LogLikelihood B -> K* mu mu Angular (CMS) Recognised sub-capabilities: P1 P5prime 


### function HEPLike_B2KstarmumuAng_LogLikelihood_Belle

```
void HEPLike_B2KstarmumuAng_LogLikelihood_Belle(
    double & result
)
```


HEPLike LogLikelihood B -> K* mu mu Angular (Belle) Recognised sub-capabilities: P4prime P5prime 


### function HEPLike_B2KstarellellAng_LogLikelihood_Belle

```
void HEPLike_B2KstarellellAng_LogLikelihood_Belle(
    double & result
)
```


HEPLike LogLikelihood B -> K* ell ell Angular (Belle) Recognised sub-capabilities: P4prime P5prime 


### function HEPLike_B2KstarmumuAng_LogLikelihood_LHCb

```
void HEPLike_B2KstarmumuAng_LogLikelihood_LHCb(
    double & result
)
```


HEPLike LogLikelihood B -> K* mu mu Angular (LHCb) Recognised sub-capabilities: FL AFB S3 S4 S5 S7 S8 S9 


### function HEPLike_B2KstarmumuAng_LogLikelihood_LHCb_2020

```
void HEPLike_B2KstarmumuAng_LogLikelihood_LHCb_2020(
    double & result
)
```


HEPLike LogLikelihood B -> K* mu mu Angular (LHCb) Recognised sub-capabilities: FL AFB S3 S4 S5 S7 S8 S9 


### function HEPLike_B2KstareeAng_Lowq2_LogLikelihood_LHCb_2020

```
void HEPLike_B2KstareeAng_Lowq2_LogLikelihood_LHCb_2020(
    double & result
)
```


HEPLike LogLikelihood B -> K* e e Angular low q2 (LHCb) Recognised sub-capabilities: FLee AT_Re AT_2 AT_Im 


### function HEPLike_Bu2KstarmumuAng_LogLikelihood_LHCb_2020

```
void HEPLike_Bu2KstarmumuAng_LogLikelihood_LHCb_2020(
    double & result
)
```


HEPLike LogLikelihood Bu -> K*+ mu mu Angular (LHCb) Recognised sub-capabilities: FL AFB S3 S4 S5 S7 S8 S9 


### function HEPLike_B2KstarmumuBr_LogLikelihood_LHCb

```
void HEPLike_B2KstarmumuBr_LogLikelihood_LHCb(
    double & result
)
```

HEPLike LogLikelihood B -> K* mu mu Br (LHCb) 

### function HEPLike_B2KmumuBr_LogLikelihood_LHCb

```
void HEPLike_B2KmumuBr_LogLikelihood_LHCb(
    double & result
)
```

HEPLike LogLikelihood B -> K+ mu mu Br (LHCb) 

### function HEPLike_Bs2phimumuBr_LogLikelihood

```
void HEPLike_Bs2phimumuBr_LogLikelihood(
    double & result
)
```


### function HEPLike_RK_LogLikelihood

```
void HEPLike_RK_LogLikelihood(
    double & result
)
```


### function HEPLike_RKstar_LogLikelihood_LHCb

```
void HEPLike_RKstar_LogLikelihood_LHCb(
    double & result
)
```



## Attributes Documentation

### variable flav_debug

```
const bool flav_debug =



      false;
```


### variable flav_debug_LL

```
const bool flav_debug_LL =



      false;
```


### variable ncorrnuis

```
const int ncorrnuis = 463;
```

Some constants used in SuperIso likelihoods. 

### variable arr

```
nuiscorr arr;
```


### variable corrnuis

```
const nuiscorr(& corrnuis = nuiscorr_help(arr, YAML::LoadFile(GAMBIT_DIR "/FlavBit/data/SM_nuisance_correlations.yaml")["correlation_matrix"].as<std::vector<nuiscorr>>());
```


### variable _0p1_2

```
_0p1_2;
```


### variable _4_8

```
_Atlas _4_8;
```


### variable _2_4p3

```
_Atlas _Atlas _2_4p3;
```


### variable _6_8p68

```
_Atlas _Atlas _CMS _6_8p68;
```


### variable _14p18_16

```
_Atlas _Atlas _CMS _CMS _14p18_16;
```


### variable _0p1_4

```
_Atlas _Atlas _CMS _CMS _CMS _0p1_4;
```


### variable _10p9_12p9

```
_Atlas _Atlas _CMS _CMS _CMS _Belle _10p9_12p9;
```


### variable _0p1_0p98

```
_Atlas _Atlas _CMS _CMS _CMS _Belle _Belle _0p1_0p98;
```


### variable _2p5_4

```
_Atlas _Atlas _CMS _CMS _CMS _Belle _Belle _LHCb _2p5_4;
```


### variable _6_8

```
_Atlas _Atlas _CMS _CMS _CMS _Belle _Belle _LHCb _LHCb _6_8;
```


### variable _0p0008_0p257

```
_Atlas _Atlas _CMS _CMS _CMS _Belle _Belle _LHCb _LHCb _LHCb _0p0008_0p257;
```





-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000