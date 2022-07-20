---
title: 'namespace Gambit::SpecBit'

description: "[No description available]"

---






[No description available]

## Classes

|                | Name           |
| -------------- | -------------- |
| class | **[Gambit::SpecBit::MDMSpec](/documentation/code/classes/classgambit_1_1specbit_1_1mdmspec/)**  |
| struct | **[Gambit::SpecBit::MSSM_strs](/documentation/code/classes/structgambit_1_1specbit_1_1mssm__strs/)**  |
| class | **[Gambit::SpecBit::MSSMSpec](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/)**  |
| class | **[Gambit::SpecBit::QedQcdWrapper](/documentation/code/classes/classgambit_1_1specbit_1_1qedqcdwrapper/)**  |
| class | **[Gambit::SpecBit::ScalarSingletDM_Z2Spec](/documentation/code/classes/classgambit_1_1specbit_1_1scalarsingletdm__z2spec/)**  |
| class | **[Gambit::SpecBit::ScalarSingletDM_Z3Spec](/documentation/code/classes/classgambit_1_1specbit_1_1scalarsingletdm__z3spec/)**  |
| class | **[Gambit::SpecBit::SpectrumEntriesForVevacious](/documentation/code/classes/classgambit_1_1specbit_1_1spectrumentriesforvevacious/)**  |
| struct | **[Gambit::SpecBit::SpectrumEntry](/documentation/code/classes/structgambit_1_1specbit_1_1spectrumentry/)**  |
| class | **[Gambit::SpecBit::VevaciousResultContainer](/documentation/code/classes/classgambit_1_1specbit_1_1vevaciousresultcontainer/)**  |

## Types

|                | Name           |
| -------------- | -------------- |
| typedef std::vector< std::pair< int, double > > | **[vec_pair_int_dbl](/documentation/code/namespaces/namespacegambit_1_1specbit/#typedef-vec-pair-int-dbl)**  |
| typedef struct [SpectrumEntry](/documentation/code/classes/structgambit_1_1specbit_1_1spectrumentry/) | **[SpectrumEntry](/documentation/code/namespaces/namespacegambit_1_1specbit/#typedef-spectrumentry)**  |
| typedef std::map< std::string, [SpectrumEntry](/documentation/code/classes/structgambit_1_1specbit_1_1spectrumentry/) > | **[map_str_SpectrumEntry](/documentation/code/namespaces/namespacegambit_1_1specbit/#typedef-map-str-spectrumentry)**  |

## Functions

|                | Name           |
| -------------- | -------------- |
| void | **[setup_QedQcd](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-setup-qedqcd)**(softsusy::QedQcd & oneset, const SMInputs & sminputs)<br>Non-Gambit helper functions.  |
| bool | **[has_neutralino_LSP](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-has-neutralino-lsp)**(const Spectrum & result)<br>Check that the spectrum has a neutralino LSP.  |
| bool | **[has_neutralino_LSP](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-has-neutralino-lsp)**(const Spectrum * result)<br>Helper to work with pointer.  |
| void | **[get_SMINPUTS](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-sminputs)**(SMInputs & result)<br>[Gambit](/documentation/code/namespaces/namespacegambit/) module functions.  |
| template <class MI \> <br>Spectrum | **[run_FS_spectrum_generator](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-run-fs-spectrum-generator)**(const typename MI::InputParameters & input, const SMInputs & sminputs, const Options & runOptions, const std::map< str, [safe_ptr](/documentation/code/classes/classgambit_1_1safe__ptr/)< const double > > & input_Param)<br>Non-Gambit convenience functions.  |
| Eigen::Matrix< double, 3, 3 > | **[fill_3x3_parameter_matrix](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-fill-3x3-parameter-matrix)**(const std::string & rootname, const std::map< str, [safe_ptr](/documentation/code/classes/classgambit_1_1safe__ptr/)< const double > > & Param)<br>Helper function for setting 3x3 matrix-valued parameters.  |
| Eigen::Matrix< double, 3, 3 > | **[fill_3x3_symmetric_parameter_matrix](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-fill-3x3-symmetric-parameter-matrix)**(const std::string & rootname, const std::map< str, [safe_ptr](/documentation/code/classes/classgambit_1_1safe__ptr/)< const double > > & Param)<br>As above, but for symmetric input (i.e. 6 entries, assumed to be the upper triangle)  |
| template <class T \> <br>void | **[fill_MSSM63_input](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-fill-mssm63-input)**(T & input, const std::map< str, [safe_ptr](/documentation/code/classes/classgambit_1_1safe__ptr/)< const double > > & Param) |
| template <class T \> <br>void | **[fill_MSSM63_input_altnames](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-fill-mssm63-input-altnames)**(T & input, const std::map< str, [safe_ptr](/documentation/code/classes/classgambit_1_1safe__ptr/)< const double > > & Param) |
| void | **[convert_MSSM_to_SM](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-convert-mssm-to-sm)**(Spectrum & result)<br>[Gambit](/documentation/code/namespaces/namespacegambit/) module functions.  |
| void | **[convert_NMSSM_to_SM](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-convert-nmssm-to-sm)**(Spectrum & result) |
| void | **[convert_E6MSSM_to_SM](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-convert-e6mssm-to-sm)**(Spectrum & result) |
| void | **[get_MSSM_spectrum_SPheno](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-mssm-spectrum-spheno)**(Spectrum & spectrum) |
| void | **[get_GUTMSSMB_spectrum](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-gutmssmb-spectrum)**(Spectrum & ) |
| template <class Contents \> <br>void | **[fill_map_from_subspectrum](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-fill-map-from-subspectrum)**(std::map< std::string, double > & specmap, const SubSpectrum & subspec)<br>Convert MSSM type Spectrum object into a map, so it can be printed.  |
| void | **[add_extra_MSSM_parameter_combinations](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-add-extra-mssm-parameter-combinations)**(std::map< std::string, double > & specmap, const SubSpectrum & mssm)<br>Adds additional information from interesting combinations of MSSM parameters.  |
| void | **[get_MSSM_spectrum_as_map](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-mssm-spectrum-as-map)**(std::map< std::string, double > & specmap) |
| void | **[get_unimproved_MSSM_spectrum_as_map](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-unimproved-mssm-spectrum-as-map)**(std::map< std::string, double > & specmap) |
| void | **[add_error](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-add-error)**(std::ostringstream & out, const std::exception & e, const std::string & msg) |
| void | **[exampleRead](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-exampleread)**(bool & result) |
| void | **[make_test_spectrum](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-make-test-spectrum)**(SubSpectrum *& result)<br>Create a spectrum object for testing purposes.  |
| void | **[specbit_test_func1](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-specbit-test-func1)**(double & result)<br>Function to test out SpecBit features.  |
| void | **[specbit_test_func2](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-specbit-test-func2)**(double & result)<br>Function to test out SpecBit features.  |
| void | **[specbit_test_func3](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-specbit-test-func3)**(double & result)<br>Function to test out SpecBit features.  |
| void | **[specbit_test_Spectrum](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-specbit-test-spectrum)**(double & result)<br>Test out consistency of Spectrum object (and pre-extracted SM SubSpectrum*)  |
| void | **[specbit_test_show_SMInputs](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-specbit-test-show-sminputs)**(double & result)<br>Display SMInputs values.  |
| void | **[test_Singlet_spectrum](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-test-singlet-spectrum)**(bool & result)<br>Check that the SingletDM spectrum object is working.  |
| template <class Model \> <br>double | **[get_sinthW2_MSbar](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-sinthw2-msbar)**(const Model & model) |
| template <class Model \> <br>double | **[get_tanbeta](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-tanbeta)**(const Model & model) |
| template <class Model \> <br>double | **[get_DRbar_mA2](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-drbar-ma2)**(const Model & model) |
| template <class Model \> <br>double | **[get_sinthW2_DRbar](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-sinthw2-drbar)**(const Model & model) |
| template <class Model \> <br>double | **[get_MAh1_pole_slha](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-mah1-pole-slha)**(const Model & model) |
| template <class Model \> <br>double | **[get_MHpm1_pole_slha](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-mhpm1-pole-slha)**(const Model & model) |
| template <class Model \> <br>double | **[get_neutral_goldstone_pole_slha](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-neutral-goldstone-pole-slha)**(const Model & model) |
| template <class Model \> <br>double | **[get_charged_goldstone_pole_slha](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-charged-goldstone-pole-slha)**(const Model & model) |
| template <class Model \> <br>void | **[set_MSu_pole_slha](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-set-msu-pole-slha)**(Model & model, double mass, int i) |
| template <class Model \> <br>void | **[set_MSd_pole_slha](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-set-msd-pole-slha)**(Model & model, double mass, int i) |
| template <class Model \> <br>void | **[set_MSe_pole_slha](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-set-mse-pole-slha)**(Model & model, double mass, int i) |
| template <class Model \> <br>void | **[set_MSv_pole_slha](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-set-msv-pole-slha)**(Model & model, double mass, int i) |
| template <class Model \> <br>void | **[set_MCha_pole_slha](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-set-mcha-pole-slha)**(Model & model, double mass, int i) |
| template <class Model \> <br>void | **[set_MChi_pole_slha](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-set-mchi-pole-slha)**(Model & model, double mass, int i) |
| template <class Model \> <br>void | **[set_Mhh_pole_slha](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-set-mhh-pole-slha)**(Model & model, double mass, int i) |
| template <class Model \> <br>void | **[set_ZD_pole_slha](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-set-zd-pole-slha)**(Model & model, double mass, int i, int j) |
| template <class Model \> <br>void | **[set_ZU_pole_slha](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-set-zu-pole-slha)**(Model & model, double mass, int i, int j) |
| template <class Model \> <br>void | **[set_ZE_pole_slha](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-set-ze-pole-slha)**(Model & model, double mass, int i, int j) |
| template <class Model \> <br>void | **[set_ZV_pole_slha](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-set-zv-pole-slha)**(Model & model, double mass, int i, int j) |
| template <class Model \> <br>void | **[set_ZH_pole_slha](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-set-zh-pole-slha)**(Model & model, double mass, int i, int j) |
| template <class Model \> <br>void | **[set_ZA_pole_slha](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-set-za-pole-slha)**(Model & model, double mass, int i, int j) |
| template <class Model \> <br>void | **[set_ZP_pole_slha](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-set-zp-pole-slha)**(Model & model, double mass, int i, int j) |
| template <class Model \> <br>void | **[set_ZN_pole_slha](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-set-zn-pole-slha)**(Model & model, double mass, int i, int j) |
| template <class Model \> <br>void | **[set_UM_pole_slha](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-set-um-pole-slha)**(Model & model, double mass, int i, int j) |
| template <class Model \> <br>void | **[set_UP_pole_slha](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-set-up-pole-slha)**(Model & model, double mass, int i, int j) |
| template <class Model \> <br>void | **[set_MAh1_pole_slha](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-set-mah1-pole-slha)**(Model & model, double mass) |
| template <class Model \> <br>void | **[set_MHpm1_pole_slha](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-set-mhpm1-pole-slha)**(Model & model, double mass) |
| template <class Model \> <br>void | **[set_neutral_goldstone_pole_slha](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-set-neutral-goldstone-pole-slha)**(Model & model, double mass) |
| template <class Model \> <br>void | **[set_charged_goldstone_pole_slha](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-set-charged-goldstone-pole-slha)**(Model & model, double mass) |
| template <class Model \> <br>void | **[set_MGluino_pole_slha](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-set-mgluino-pole-slha)**(Model & model, double mass) |
| template <class Model \> <br>void | **[set_MZ_pole_slha](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-set-mz-pole-slha)**(Model & model, double mass) |
| template <class Model \> <br>void | **[set_MW_pole_slha](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-set-mw-pole-slha)**(Model & model, double mass) |
| template <class Model \> <br>double | **[get_sinthW2_MSbar2](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-sinthw2-msbar2)**(const Model & model) |
| template <class Model \> <br>void | **[set_Mhh_pole_slha](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-set-mhh-pole-slha)**(Model & model, double mass) |
| template <class Model \> <br>void | **[set_Mss_pole_slha](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-set-mss-pole-slha)**(Model & model, double mass) |
| bool | **[print_error](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-print-error)**(bool pass, std::string get_type, std::string data, double sting_get_out, double data_member, int i =-1, int j =-1) |
| void | **[print_error](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-print-error)**(std::string get_type, std::string name, double sting_get_out, double data_member, int i =-1, int j =-1) |
| bool | **[test_getters](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-test-getters)**(std::string get_type, std::string name, double getter_output, double data_member, int i =-1, int j =-1) |
| template <class M \> <br>bool | **[TestMssmParMass2_0](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-testmssmparmass2-0)**(SubSpectrum * spec, M FSmssm, bool immediate_exit =true)<br>Module convenience functions.  |
| template <class MI \> <br>bool | **[TestMssmParMass2_0](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-testmssmparmass2-0)**([MSSMSpec](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/)< MI > & mssm, typename MI::Model & FSmssm, bool immediate_exit =true) |
| template <class M \> <br>bool | **[TestMssmParMass2_2](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-testmssmparmass2-2)**(SubSpectrum * spec, M FSmssm, bool immediate_exit =true) |
| template <class MI \> <br>bool | **[TestMssmParMass2_2](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-testmssmparmass2-2)**([MSSMSpec](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/)< MI > & mssm, typename MI::Model & FSmssm, bool immediate_exit =true) |
| template <class M \> <br>bool | **[TestMssmParMass1_0](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-testmssmparmass1-0)**(SubSpectrum * spec, M FSmssm, bool immediate_exit =true) |
| template <class MI \> <br>bool | **[TestMssmParMass1_0](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-testmssmparmass1-0)**([MSSMSpec](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/)< MI > & mssm, typename MI::Model & FSmssm, bool immediate_exit =true) |
| template <class M \> <br>bool | **[TestMssmParMass1_2](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-testmssmparmass1-2)**(SubSpectrum * spec, M FSmssm, bool immediate_exit =true) |
| template <class MI \> <br>bool | **[TestMssmParMass1_2](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-testmssmparmass1-2)**([MSSMSpec](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/)< MI > & mssm, typename MI::Model & FSmssm, bool immediate_exit =true) |
| template <class M \> <br>bool | **[TestMssmParMass0_0](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-testmssmparmass0-0)**(SubSpectrum * spec, M FSmssm, bool immediate_exit =true) |
| template <class MI \> <br>bool | **[TestMssmParMass0_0](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-testmssmparmass0-0)**([MSSMSpec](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/)< MI > & mssm, typename MI::Model & FSmssm, bool immediate_exit =true) |
| template <class M \> <br>bool | **[TestMssmParMass0_2](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-testmssmparmass0-2)**(SubSpectrum * spec, M FSmssm, bool immediate_exit =true) |
| template <class MI \> <br>bool | **[TestMssmParMass0_2](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-testmssmparmass0-2)**([MSSMSpec](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/)< MI > & mssm, typename MI::Model & FSmssm, bool immediate_exit =true) |
| template <class M \> <br>bool | **[TestMssmPoleGets0](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-testmssmpolegets0)**(SubSpectrum * spec, M FSmssm, bool immediate_exit =true) |
| template <class MI \> <br>bool | **[TestMssmPoleGets0](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-testmssmpolegets0)**([MSSMSpec](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/)< MI > & mssm, typename MI::Model & FSmssm, bool immediate_exit =true) |
| template <class M \> <br>bool | **[TestMssmPoleGets1](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-testmssmpolegets1)**(SubSpectrum * spec, M FSmssm, bool immediate_exit =true) |
| template <class MI \> <br>bool | **[TestMssmPoleGets1](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-testmssmpolegets1)**([MSSMSpec](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/)< MI > & mssm, typename MI::Model & FSmssm, bool immediate_exit =true) |
| template <class M \> <br>bool | **[TestMssmPoleMixingGets2](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-testmssmpolemixinggets2)**(SubSpectrum * spec, M FSmssm, bool immediate_exit =true) |
| template <class MI \> <br>bool | **[TestMssmPoleMixingGets2](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-testmssmpolemixinggets2)**([MSSMSpec](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/)< MI > & mssm, typename MI::Model & FSmssm, bool immediate_exit =true) |
| template <class M \> <br>bool | **[TestMssmPoleGets](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-testmssmpolegets)**(SubSpectrum * spec, M FSmssm) |
| template <class MI \> <br>bool | **[TestMssmPoleGets](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-testmssmpolegets)**([MSSMSpec](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/)< MI > & mssm, typename MI::Model & FSmssm) |
| template <class M \> <br>bool | **[TestMssmParGets](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-testmssmpargets)**(SubSpectrum * spec, M FSmssm) |
| template <class MI \> <br>bool | **[TestMssmParGets](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-testmssmpargets)**([MSSMSpec](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/)< MI > & mssm, typename MI::Model & FSmssm) |
| template <class Model \> <br>void | **[setup](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-setup)**(Model & mssm) |
| template <class MI \> <br>bool | **[test_exact](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-test-exact)**([MSSMSpec](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/)< MI > & mssm, typename MI::Model & FS_model_slha) |
| template <class M \> <br>double | **[test_exact](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-test-exact)**(SubSpectrum * spec, M FS_model_slha) |
| template <class MI \> <br>bool | **[running_test](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-running-test)**([MSSMSpec](/documentation/code/classes/classgambit_1_1specbit_1_1mssmspec/)< MI > & mssm, typename MI::Model & FS_model_slha, double tol) |
| template <class Model \> <br>bool | **[running_test](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-running-test)**(SubSpectrum * spec, Model & FS_model_slha, double tol) |
| bool | **[test_within_tol](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-test-within-tol)**(double a, double b, double tol, std::string label) |
| void | **[Spectrum_test](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-spectrum-test)**(Spectrum matched_spectra, const SubSpectrum * smin, bool SLHAonly =0) |
| double | **[get_mUp](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-mup)**(const softsusy::QedQcd & model)<br>Plain C-function wrappers for QedQcd running mass getters.  |
| double | **[get_mCharm](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-mcharm)**(const softsusy::QedQcd & model) |
| double | **[get_mTop](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-mtop)**(const softsusy::QedQcd & model) |
| double | **[get_mDown](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-mdown)**(const softsusy::QedQcd & model) |
| double | **[get_mStrange](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-mstrange)**(const softsusy::QedQcd & model) |
| double | **[get_mBottom](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-mbottom)**(const softsusy::QedQcd & model) |
| double | **[get_mElectron](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-melectron)**(const softsusy::QedQcd & model) |
| double | **[get_mMuon](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-mmuon)**(const softsusy::QedQcd & model) |
| double | **[get_mTau](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-mtau)**(const softsusy::QedQcd & model) |
| double | **[get_mPhoton](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-mphoton)**(const softsusy::QedQcd & ) |
| double | **[get_mGluon](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-mgluon)**(const softsusy::QedQcd & ) |
| double | **[get_alpha](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-alpha)**(const softsusy::QedQcd & model)<br>Plain C-function wrappers for QedQcd running coupling getters.  |
| double | **[get_alphaS](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-alphas)**(const softsusy::QedQcd & model) |
| double | **[get_a1](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-a1)**(const softsusy::QedQcd & ) |
| double | **[get_Pole_mElectron](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-pole-melectron)**(const SMInputs & inputs)<br>Plain C-function wrappers for extra pole mass getters (manually specified masses)  |
| double | **[get_Pole_mMuon](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-pole-mmuon)**(const SMInputs & inputs) |
| double | **[get_Pole_mNu1](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-pole-mnu1)**(const SMInputs & inputs) |
| double | **[get_Pole_mNu2](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-pole-mnu2)**(const SMInputs & inputs) |
| double | **[get_Pole_mNu3](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-pole-mnu3)**(const SMInputs & inputs) |
| double | **[get_Pole_mPhoton](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-pole-mphoton)**(const SMInputs & ) |
| double | **[get_Pole_mGluon](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-pole-mgluon)**(const SMInputs & ) |
| double | **[get_sinthW2_pole](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-sinthw2-pole)**(const softsusy::QedQcd & qedqcd) |
| void | **[set_Pole_mElectron](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-set-pole-melectron)**(SMInputs & inputs, double set_value)<br>Plain C-function wrappers for extra pole mass setters (manually specified masses)  |
| void | **[get_DiracSingletDM_Z2_spectrum](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-diracsingletdm-z2-spectrum)**(Spectrum & result)<br>Get a (simple) Spectrum object wrapper for the DiracSingletDM_Z2 model.  |
| void | **[fill_map_from_DiracSingletDM_Z2spectrum](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-fill-map-from-diracsingletdm-z2spectrum)**(std::map< std::string, double > & specmap, const Spectrum & diracdmspec) |
| void | **[get_DiracSingletDM_Z2_spectrum_as_map](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-diracsingletdm-z2-spectrum-as-map)**(std::map< std::string, double > & specmap) |
| void | **[get_DMEFT_spectrum](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-dmeft-spectrum)**(Spectrum & result)<br>Get a simple wrapper for Spectrum object.  |
| void | **[fill_map_from_DMEFT_spectrum](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-fill-map-from-dmeft-spectrum)**(std::map< std::string, double > & specmap, const Spectrum & spec) |
| void | **[get_DMEFT_spectrum_as_map](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-dmeft-spectrum-as-map)**(std::map< std::string, double > & specmap) |
| void | **[get_MajoranaSingletDM_Z2_spectrum](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-majoranasingletdm-z2-spectrum)**(Spectrum & result)<br>Get a (simple) Spectrum object wrapper for the MajoranaSingletDM_Z2 model.  |
| void | **[fill_map_from_MajoranaSingletDM_Z2spectrum](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-fill-map-from-majoranasingletdm-z2spectrum)**(std::map< std::string, double > & specmap, const Spectrum & majoranadmspec) |
| void | **[get_MajoranaSingletDM_Z2_spectrum_as_map](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-majoranasingletdm-z2-spectrum-as-map)**(std::map< std::string, double > & specmap) |
| template <class MI ,class SI \> <br>Spectrum | **[run_FS_spectrum_generator](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-run-fs-spectrum-generator)**(const typename MI::InputParameters & input, const SMInputs & sminputs, const Options & runOptions, const std::map< str, [safe_ptr](/documentation/code/classes/classgambit_1_1safe__ptr/)< const double > > & input_Param) |
| template <class T \> <br>void | **[fill_MDM_input](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-fill-mdm-input)**(T & input, const std::map< str, [safe_ptr](/documentation/code/classes/classgambit_1_1safe__ptr/)< const double > > & Param, SMInputs sminputs) |
| bool | **[check_perturb_MDM](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-check-perturb-mdm)**(const Spectrum & spec, double scale, int pts) |
| void | **[find_non_perturb_scale_MDM](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-find-non-perturb-scale-mdm)**(double & result) |
| void | **[fill_map_from_MDMspectrum](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-fill-map-from-mdmspectrum)**(std::map< std::string, double > & specmap, const Spectrum & mdmspec)<br>Print MDM spectrum out. Stripped down copy from MSSM version with variable names changed.  |
| void | **[get_MDM_spectrum_as_map](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-mdm-spectrum-as-map)**(std::map< std::string, double > & specmap) |
| void | **[get_SM_SubSpectrum_from_MSSM_Spectrum](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-sm-subspectrum-from-mssm-spectrum)**(const SubSpectrum *& result) |
| void | **[get_MSSM_spectrum_as_SLHAea_SLHA1](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-mssm-spectrum-as-slhaea-slha1)**(SLHAstruct & result)<br>Extract an SLHAea version of the spectrum contained in a Spectrum object, in SLHA1 format.  |
| void | **[get_MSSM_spectrum_as_SLHAea_SLHA2](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-mssm-spectrum-as-slhaea-slha2)**(SLHAstruct & result)<br>Extract an SLHAea version of the spectrum contained in a Spectrum object, in SLHA2 format.  |
| void | **[get_MSSM_spectrum_from_SLHAfile](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-mssm-spectrum-from-slhafile)**(Spectrum & result) |
| void | **[get_MSSM_spectrum_from_SLHAstruct](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-mssm-spectrum-from-slhastruct)**(Spectrum & result) |
| void | **[get_MSSM_spectrum_from_postprocessor](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-mssm-spectrum-from-postprocessor)**(Spectrum & result) |
| void | **[FeynHiggs_MSSMMasses](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-feynhiggs-mssmmasses)**([fh_MSSMMassObs_container](/documentation/code/classes/structgambit_1_1fh__mssmmassobs__container/) & result)<br>FeynHiggs SUSY masses and mixings.  |
| void | **[FeynHiggs_AllHiggsMasses](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-feynhiggs-allhiggsmasses)**([fh_HiggsMassObs_container](/documentation/code/classes/structgambit_1_1fh__higgsmassobs__container/) & result)<br>Higgs masses and mixings with theoretical uncertainties.  |
| void | **[FeynHiggs_Couplings](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-feynhiggs-couplings)**([fh_Couplings_container](/documentation/code/classes/structgambit_1_1fh__couplings__container/) & result)<br>Call FHCouplings from FeynHiggs and collect the output.  |
| std::vector< std::pair< str, str > > | **[get_invisibles](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-invisibles)**(const SubSpectrum & spec)<br>Helper function to work out if the LSP is invisible, and if so, which particle it is.  |
| void | **[MSSM_higgs_couplings_pwid](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-mssm-higgs-couplings-pwid)**(HiggsCouplingsTable & result)<br>Put together the Higgs couplings for the MSSM, from partial widths only.  |
| void | **[MSSM_higgs_couplings_FeynHiggs](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-mssm-higgs-couplings-feynhiggs)**(HiggsCouplingsTable & result)<br>Put together the Higgs couplings for the MSSM, using FeynHiggs.  |
| void | **[FeynHiggs_HiggsMass](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-feynhiggs-higgsmass)**(triplet< double > & result) |
| void | **[FeynHiggs_HeavyHiggsMasses](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-feynhiggs-heavyhiggsmasses)**(map_int_triplet_dbl & result) |
| void | **[SUSYHD_HiggsMass](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-susyhd-higgsmass)**(triplet< double > & result) |
| void | **[get_ScalarSingletDM_Z2_spectrum](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-scalarsingletdm-z2-spectrum)**(Spectrum & result)<br>Get a (simple) Spectrum object wrapper for the ScalarSingletDM_Z2 model.  |
| void | **[get_ScalarSingletDM_Z3_spectrum](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-scalarsingletdm-z3-spectrum)**(Spectrum & result)<br>Get a (simple) Spectrum object wrapper for the ScalarSingletDM_Z3 model.  |
| template <class T \> <br>void | **[fill_ScalarSingletDM_input](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-fill-scalarsingletdm-input)**(T & input, const std::map< str, [safe_ptr](/documentation/code/classes/classgambit_1_1safe__ptr/)< const double > > & Param, SMInputs sminputs) |
| template <class T \> <br>void | **[fill_extra_input](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-fill-extra-input)**(T & input, const std::map< str, [safe_ptr](/documentation/code/classes/classgambit_1_1safe__ptr/)< const double > > & Param) |
| bool | **[check_perturb](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-check-perturb)**(const Spectrum & spec, const std::vector< SpectrumParameter > & required_parameters, double scale, int pts) |
| void | **[ScalarSingletDM_higgs_couplings_pwid](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-scalarsingletdm-higgs-couplings-pwid)**(HiggsCouplingsTable & result)<br>Put together the Higgs couplings for the ScalarSingletDM models, from partial widths only.  |
| void | **[fill_map_from_ScalarSingletDM_spectrum](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-fill-map-from-scalarsingletdm-spectrum)**(std::map< std::string, double > & specmap, const Spectrum & singletdmspec, const std::vector< SpectrumParameter > & required_parameters)<br>Print ScalarSingletDM spectra out. Stripped down copy of MSSM version with variable names changed.  |
| void | **[get_ScalarSingletDM_Z2_spectrum_as_map](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-scalarsingletdm-z2-spectrum-as-map)**(std::map< std::string, double > & specmap) |
| void | **[get_ScalarSingletDM_Z3_spectrum_as_map](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-scalarsingletdm-z3-spectrum-as-map)**(std::map< std::string, double > & specmap) |
| void | **[get_QedQcd_spectrum](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-qedqcd-spectrum)**(const SubSpectrum *& result)<br>Construct a SubSpectrum object from SMInputs using [QedQcdWrapper]().  |
| void | **[get_SM_spectrum](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-sm-spectrum)**(Spectrum & result)<br>Get a Spectrum object wrapper for Standard-Model-only information.  |
| void | **[SM_higgs_couplings](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-sm-higgs-couplings)**(HiggsCouplingsTable & result)<br>Put together the SM Higgs couplings.  |
| void | **[Math_test](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-math-test)**(bool & result) |
| void | **[SUSYHD_test](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-susyhd-test)**(bool & result) |
| void | **[SPheno_MSSM_test](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-spheno-mssm-test)**(bool & result) |
| void | **[MSSMspectrum_test](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-mssmspectrum-test)**(bool & result) |
| void | **[light_quark_test](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-light-quark-test)**(bool & ) |
| void | **[get_VectorSingletDM_Z2_spectrum](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-vectorsingletdm-z2-spectrum)**(Spectrum & result)<br>Get a (simple) Spectrum object wrapper for the VectorSingletDM_Z2 model.  |
| void | **[fill_map_from_VectorSingletDM_Z2spectrum](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-fill-map-from-vectorsingletdm-z2spectrum)**(std::map< std::string, double > & specmap, const Spectrum & vectordmspec) |
| void | **[get_VectorSingletDM_Z2_spectrum_as_map](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-vectorsingletdm-z2-spectrum-as-map)**(std::map< std::string, double > & specmap) |
| void | **[check_EW_stability_ScalarSingletDM_Z3](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-check-ew-stability-scalarsingletdm-z3)**(double & result) |
| bool | **[check_perturb_to_min_lambda](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-check-perturb-to-min-lambda)**(const Spectrum & spec, double scale, int pts, const std::vector< SpectrumParameter > required_parameters) |
| double | **[run_lambda](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-run-lambda)**(double scale, void * params) |
| void | **[find_min_lambda_Helper](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-find-min-lambda-helper)**(dbl_dbl_bool & vs_tuple, const Spectrum & fullspectrum, double high_energy_limit, int check_perturb_pts, const std::vector< SpectrumParameter > required_parameters) |
| void | **[find_min_lambda_ScalarSingletDM_Z2](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-find-min-lambda-scalarsingletdm-z2)**(dbl_dbl_bool & vs_tuple) |
| void | **[find_min_lambda_ScalarSingletDM_Z3](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-find-min-lambda-scalarsingletdm-z3)**(dbl_dbl_bool & vs_tuple) |
| void | **[find_min_lambda_MDM](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-find-min-lambda-mdm)**(dbl_dbl_bool & vs_tuple) |
| void | **[get_expected_vacuum_lifetime](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-expected-vacuum-lifetime)**(double & lifetime) |
| void | **[lnL_highscale_vacuum_decay_single_field](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-lnl-highscale-vacuum-decay-single-field)**(double & result) |
| void | **[get_lambdaB](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-lambdab)**(double & result) |
| void | **[check_perturb_min_lambda](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-check-perturb-min-lambda)**(double & result) |
| void | **[get_likelihood_VS](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-likelihood-vs)**(double & result) |
| void | **[get_VS_results](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-get-vs-results)**(map_str_dbl & result)<br>get all results from VS as str to dbl map to easily print them  |
| void | **[make_vpp_inputs](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-make-vpp-inputs)**(map_str_str & opts) |
| void | **[set_panic_vacua](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-set-panic-vacua)**(std::set< std::string > & result) |
| void | **[set_tunnelling_strategy](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-set-tunnelling-strategy)**(std::set< std::string > & result) |
| str | **[helper_set_tunnelingStrategy](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-helper-set-tunnelingstrategy)**(std::set< std::string > tunnelling_strategy) |
| void | **[initialize_vevacious](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-initialize-vevacious)**(std::string & inputspath) |
| vevacious_1_0::VevaciousPlusPlus::VevaciousPlusPlus | **[exec_pass_spectrum_to_vevacious](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-exec-pass-spectrum-to-vevacious)**([SpectrumEntriesForVevacious](/documentation/code/classes/classgambit_1_1specbit_1_1spectrumentriesforvevacious/) & pass_spectrum) |
| void | **[helper_run_vevacious](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-helper-run-vevacious)**(vevacious_1_0::VevaciousPlusPlus::VevaciousPlusPlus & vevaciousPlusPlus, [VevaciousResultContainer](/documentation/code/classes/classgambit_1_1specbit_1_1vevaciousresultcontainer/) & result, std::string panic_vacuum, std::string inputPath) |
| void | **[helper_catch_vevacious](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-helper-catch-vevacious)**([VevaciousResultContainer](/documentation/code/classes/classgambit_1_1specbit_1_1vevaciousresultcontainer/) & result, std::string panic_vacuum) |
| void | **[compare_panic_vacua](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-compare-panic-vacua)**(map_str_str & result) |
| void | **[check_vacuum_stability_vevacious](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-check-vacuum-stability-vevacious)**([VevaciousResultContainer](/documentation/code/classes/classgambit_1_1specbit_1_1vevaciousresultcontainer/) & result)<br>Check stability of global vacuum of the potential with vevacious.  |
| void | **[vevacious_file_location_MSSM](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-vevacious-file-location-mssm)**(map_str_str & result)<br>Tell GAMBIT which files to work with for the MSSM.  |
| void | **[prepare_pass_MSSM_spectrum_to_vevacious](/documentation/code/namespaces/namespacegambit_1_1specbit/#function-prepare-pass-mssm-spectrum-to-vevacious)**([SpectrumEntriesForVevacious](/documentation/code/classes/classgambit_1_1specbit_1_1spectrumentriesforvevacious/) & result) |

## Types Documentation

### typedef vec_pair_int_dbl

```
typedef std::vector<std::pair<int,double> > Gambit::SpecBit::vec_pair_int_dbl;
```


### typedef SpectrumEntry

```
typedef struct SpectrumEntry Gambit::SpecBit::SpectrumEntry;
```


### typedef map_str_SpectrumEntry

```
typedef std::map<std::string,SpectrumEntry> Gambit::SpecBit::map_str_SpectrumEntry;
```


map mapping the name of a spectrum entry to the [SpectrumEntry](/documentation/code/classes/structgambit_1_1specbit_1_1spectrumentry/) type. In principle one could just use a vector instead of a map. However, this requires a lot of caution to avoid filling up the vector with more & more entries with the same name but different parameters after one point is run so I thought this was the safer option 



## Functions Documentation

### function setup_QedQcd

```
void setup_QedQcd(
    softsusy::QedQcd & oneset,
    const SMInputs & sminputs
)
```

Non-Gambit helper functions. 

Initialise QedQcd object from SMInputs data 


set running quark masses

set QED and QCD structure constants

NOTE! These assume the input electron and muon pole masses are "close
enough" to MSbar masses at MZ. The object does the same with its default values so I guess it is ok.

set running quark masses

set QED and QCD structure constants

NOTE! These assume the input electron and muon pole masses are "close
enough" to MSbar masses at MZ. The object does the same with its default values so I guess it is ok.


### function has_neutralino_LSP

```
bool has_neutralino_LSP(
    const Spectrum & result
)
```

Check that the spectrum has a neutralino LSP. 

### function has_neutralino_LSP

```
bool has_neutralino_LSP(
    const Spectrum * result
)
```

Helper to work with pointer. 

### function get_SMINPUTS

```
void get_SMINPUTS(
    SMInputs & result
)
```

[Gambit](/documentation/code/namespaces/namespacegambit/) module functions. 

Set SMINPUTS (SLHA2) struct to match StandardModel_SLHA2 parameters. 


### function run_FS_spectrum_generator

```
template <class MI >
Spectrum run_FS_spectrum_generator(
    const typename MI::InputParameters & input,
    const SMInputs & sminputs,
    const Options & runOptions,
    const std::map< str, safe_ptr< const double > > & input_Param
)
```

Non-Gambit convenience functions. 

Compute an MSSM spectrum using flexiblesusy 


TODO: Need to tell gambit that the spectrum is not viable somehow. For now just die.

Check what the problem was see: contrib/MassSpectra/flexiblesusy/src/problems.hpp

Fast way for now:


### function fill_3x3_parameter_matrix

```
Eigen::Matrix< double, 3, 3 > fill_3x3_parameter_matrix(
    const std::string & rootname,
    const std::map< str, safe_ptr< const double > > & Param
)
```

Helper function for setting 3x3 matrix-valued parameters. 

### function fill_3x3_symmetric_parameter_matrix

```
Eigen::Matrix< double, 3, 3 > fill_3x3_symmetric_parameter_matrix(
    const std::string & rootname,
    const std::map< str, safe_ptr< const double > > & Param
)
```

As above, but for symmetric input (i.e. 6 entries, assumed to be the upper triangle) 

### function fill_MSSM63_input

```
template <class T >
void fill_MSSM63_input(
    T & input,
    const std::map< str, safe_ptr< const double > > & Param
)
```


Helper function for filling MSSM63-compatible input parameter objects Leaves out mHu2, mHd2, SignMu, (mA, mu) because we use two different parameterisations of these 


### function fill_MSSM63_input_altnames

```
template <class T >
void fill_MSSM63_input_altnames(
    T & input,
    const std::map< str, safe_ptr< const double > > & Param
)
```


### function convert_MSSM_to_SM

```
void convert_MSSM_to_SM(
    Spectrum & result
)
```

[Gambit](/documentation/code/namespaces/namespacegambit/) module functions. 

### function convert_NMSSM_to_SM

```
void convert_NMSSM_to_SM(
    Spectrum & result
)
```


### function convert_E6MSSM_to_SM

```
void convert_E6MSSM_to_SM(
    Spectrum & result
)
```


### function get_MSSM_spectrum_SPheno

```
void get_MSSM_spectrum_SPheno(
    Spectrum & spectrum
)
```


### function get_GUTMSSMB_spectrum

```
void get_GUTMSSMB_spectrum(
    Spectrum & 
)
```


### function fill_map_from_subspectrum

```
template <class Contents >
void fill_map_from_subspectrum(
    std::map< std::string, double > & specmap,
    const SubSpectrum & subspec
)
```

Convert MSSM type Spectrum object into a map, so it can be printed. 

Extract all parameters from a subspectrum and put them into a map. 


Add everything... use spectrum contents routines to automate task (make sure to use correct template parameter!)

Verification routine should have taken care of invalid shapes etc, so won't check for that here.

Add everything... use spectrum contents routines to automate task (make sure to use correct template parameter!)

Verification routine should have taken care of invalid shapes etc, so won't check for that here.


### function add_extra_MSSM_parameter_combinations

```
void add_extra_MSSM_parameter_combinations(
    std::map< std::string, double > & specmap,
    const SubSpectrum & mssm
)
```

Adds additional information from interesting combinations of MSSM parameters. 

Determine which states are the third gens then add them for printing

Since this is for printing we only want to invalidate the point if this is completely wrong. We can also plot the mixing if we are suspicious.

return mass eigenstate strings that best represent required gauge eigenstate


### function get_MSSM_spectrum_as_map

```
void get_MSSM_spectrum_as_map(
    std::map< std::string, double > & specmap
)
```


### function get_unimproved_MSSM_spectrum_as_map

```
void get_unimproved_MSSM_spectrum_as_map(
    std::map< std::string, double > & specmap
)
```


### function add_error

```
void add_error(
    std::ostringstream & out,
    const std::exception & e,
    const std::string & msg
)
```


### function exampleRead

```
void exampleRead(
    bool & result
)
```


NEW! Tests of override setters

Now add some entry that didn't exist before

Note: if we try to do it like this, it should fail:


### function make_test_spectrum

```
void make_test_spectrum(
    SubSpectrum *& result
)
```

Create a spectrum object for testing purposes. 

### function specbit_test_func1

```
void specbit_test_func1(
    double & result
)
```

Function to test out SpecBit features. 

### function specbit_test_func2

```
void specbit_test_func2(
    double & result
)
```

Function to test out SpecBit features. 

### function specbit_test_func3

```
void specbit_test_func3(
    double & result
)
```

Function to test out SpecBit features. 

### function specbit_test_Spectrum

```
void specbit_test_Spectrum(
    double & result
)
```

Test out consistency of Spectrum object (and pre-extracted SM SubSpectrum*) 

### function specbit_test_show_SMInputs

```
void specbit_test_show_SMInputs(
    double & result
)
```

Display SMInputs values. 

### function test_Singlet_spectrum

```
void test_Singlet_spectrum(
    bool & result
)
```

Check that the SingletDM spectrum object is working. 

### function get_sinthW2_MSbar

```
template <class Model >
double get_sinthW2_MSbar(
    const Model & model
)
```


### function get_tanbeta

```
template <class Model >
double get_tanbeta(
    const Model & model
)
```


### function get_DRbar_mA2

```
template <class Model >
double get_DRbar_mA2(
    const Model & model
)
```


### function get_sinthW2_DRbar

```
template <class Model >
double get_sinthW2_DRbar(
    const Model & model
)
```


### function get_MAh1_pole_slha

```
template <class Model >
double get_MAh1_pole_slha(
    const Model & model
)
```


### function get_MHpm1_pole_slha

```
template <class Model >
double get_MHpm1_pole_slha(
    const Model & model
)
```


### function get_neutral_goldstone_pole_slha

```
template <class Model >
double get_neutral_goldstone_pole_slha(
    const Model & model
)
```


### function get_charged_goldstone_pole_slha

```
template <class Model >
double get_charged_goldstone_pole_slha(
    const Model & model
)
```


### function set_MSu_pole_slha

```
template <class Model >
void set_MSu_pole_slha(
    Model & model,
    double mass,
    int i
)
```


### function set_MSd_pole_slha

```
template <class Model >
void set_MSd_pole_slha(
    Model & model,
    double mass,
    int i
)
```


### function set_MSe_pole_slha

```
template <class Model >
void set_MSe_pole_slha(
    Model & model,
    double mass,
    int i
)
```


### function set_MSv_pole_slha

```
template <class Model >
void set_MSv_pole_slha(
    Model & model,
    double mass,
    int i
)
```


### function set_MCha_pole_slha

```
template <class Model >
void set_MCha_pole_slha(
    Model & model,
    double mass,
    int i
)
```


### function set_MChi_pole_slha

```
template <class Model >
void set_MChi_pole_slha(
    Model & model,
    double mass,
    int i
)
```


### function set_Mhh_pole_slha

```
template <class Model >
void set_Mhh_pole_slha(
    Model & model,
    double mass,
    int i
)
```


### function set_ZD_pole_slha

```
template <class Model >
void set_ZD_pole_slha(
    Model & model,
    double mass,
    int i,
    int j
)
```


### function set_ZU_pole_slha

```
template <class Model >
void set_ZU_pole_slha(
    Model & model,
    double mass,
    int i,
    int j
)
```


### function set_ZE_pole_slha

```
template <class Model >
void set_ZE_pole_slha(
    Model & model,
    double mass,
    int i,
    int j
)
```


### function set_ZV_pole_slha

```
template <class Model >
void set_ZV_pole_slha(
    Model & model,
    double mass,
    int i,
    int j
)
```


### function set_ZH_pole_slha

```
template <class Model >
void set_ZH_pole_slha(
    Model & model,
    double mass,
    int i,
    int j
)
```


### function set_ZA_pole_slha

```
template <class Model >
void set_ZA_pole_slha(
    Model & model,
    double mass,
    int i,
    int j
)
```


### function set_ZP_pole_slha

```
template <class Model >
void set_ZP_pole_slha(
    Model & model,
    double mass,
    int i,
    int j
)
```


### function set_ZN_pole_slha

```
template <class Model >
void set_ZN_pole_slha(
    Model & model,
    double mass,
    int i,
    int j
)
```


### function set_UM_pole_slha

```
template <class Model >
void set_UM_pole_slha(
    Model & model,
    double mass,
    int i,
    int j
)
```


### function set_UP_pole_slha

```
template <class Model >
void set_UP_pole_slha(
    Model & model,
    double mass,
    int i,
    int j
)
```


### function set_MAh1_pole_slha

```
template <class Model >
void set_MAh1_pole_slha(
    Model & model,
    double mass
)
```


### function set_MHpm1_pole_slha

```
template <class Model >
void set_MHpm1_pole_slha(
    Model & model,
    double mass
)
```


### function set_neutral_goldstone_pole_slha

```
template <class Model >
void set_neutral_goldstone_pole_slha(
    Model & model,
    double mass
)
```


### function set_charged_goldstone_pole_slha

```
template <class Model >
void set_charged_goldstone_pole_slha(
    Model & model,
    double mass
)
```


### function set_MGluino_pole_slha

```
template <class Model >
void set_MGluino_pole_slha(
    Model & model,
    double mass
)
```


### function set_MZ_pole_slha

```
template <class Model >
void set_MZ_pole_slha(
    Model & model,
    double mass
)
```


### function set_MW_pole_slha

```
template <class Model >
void set_MW_pole_slha(
    Model & model,
    double mass
)
```


### function get_sinthW2_MSbar2

```
template <class Model >
double get_sinthW2_MSbar2(
    const Model & model
)
```


### function set_Mhh_pole_slha

```
template <class Model >
void set_Mhh_pole_slha(
    Model & model,
    double mass
)
```


### function set_Mss_pole_slha

```
template <class Model >
void set_Mss_pole_slha(
    Model & model,
    double mass
)
```


### function print_error

```
bool print_error(
    bool pass,
    std::string get_type,
    std::string data,
    double sting_get_out,
    double data_member,
    int i =-1,
    int j =-1
)
```


### function print_error

```
void print_error(
    std::string get_type,
    std::string name,
    double sting_get_out,
    double data_member,
    int i =-1,
    int j =-1
)
```


### function test_getters

```
bool test_getters(
    std::string get_type,
    std::string name,
    double getter_output,
    double data_member,
    int i =-1,
    int j =-1
)
```


### function TestMssmParMass2_0

```
template <class M >
bool TestMssmParMass2_0(
    SubSpectrum * spec,
    M FSmssm,
    bool immediate_exit =true
)
```

Module convenience functions. 

### function TestMssmParMass2_0

```
template <class MI >
bool TestMssmParMass2_0(
    MSSMSpec< MI > & mssm,
    typename MI::Model & FSmssm,
    bool immediate_exit =true
)
```


### function TestMssmParMass2_2

```
template <class M >
bool TestMssmParMass2_2(
    SubSpectrum * spec,
    M FSmssm,
    bool immediate_exit =true
)
```


### function TestMssmParMass2_2

```
template <class MI >
bool TestMssmParMass2_2(
    MSSMSpec< MI > & mssm,
    typename MI::Model & FSmssm,
    bool immediate_exit =true
)
```


### function TestMssmParMass1_0

```
template <class M >
bool TestMssmParMass1_0(
    SubSpectrum * spec,
    M FSmssm,
    bool immediate_exit =true
)
```


### function TestMssmParMass1_0

```
template <class MI >
bool TestMssmParMass1_0(
    MSSMSpec< MI > & mssm,
    typename MI::Model & FSmssm,
    bool immediate_exit =true
)
```


### function TestMssmParMass1_2

```
template <class M >
bool TestMssmParMass1_2(
    SubSpectrum * spec,
    M FSmssm,
    bool immediate_exit =true
)
```


### function TestMssmParMass1_2

```
template <class MI >
bool TestMssmParMass1_2(
    MSSMSpec< MI > & mssm,
    typename MI::Model & FSmssm,
    bool immediate_exit =true
)
```


### function TestMssmParMass0_0

```
template <class M >
bool TestMssmParMass0_0(
    SubSpectrum * spec,
    M FSmssm,
    bool immediate_exit =true
)
```


### function TestMssmParMass0_0

```
template <class MI >
bool TestMssmParMass0_0(
    MSSMSpec< MI > & mssm,
    typename MI::Model & FSmssm,
    bool immediate_exit =true
)
```


### function TestMssmParMass0_2

```
template <class M >
bool TestMssmParMass0_2(
    SubSpectrum * spec,
    M FSmssm,
    bool immediate_exit =true
)
```


### function TestMssmParMass0_2

```
template <class MI >
bool TestMssmParMass0_2(
    MSSMSpec< MI > & mssm,
    typename MI::Model & FSmssm,
    bool immediate_exit =true
)
```


### function TestMssmPoleGets0

```
template <class M >
bool TestMssmPoleGets0(
    SubSpectrum * spec,
    M FSmssm,
    bool immediate_exit =true
)
```


### function TestMssmPoleGets0

```
template <class MI >
bool TestMssmPoleGets0(
    MSSMSpec< MI > & mssm,
    typename MI::Model & FSmssm,
    bool immediate_exit =true
)
```


### function TestMssmPoleGets1

```
template <class M >
bool TestMssmPoleGets1(
    SubSpectrum * spec,
    M FSmssm,
    bool immediate_exit =true
)
```


### function TestMssmPoleGets1

```
template <class MI >
bool TestMssmPoleGets1(
    MSSMSpec< MI > & mssm,
    typename MI::Model & FSmssm,
    bool immediate_exit =true
)
```


### function TestMssmPoleMixingGets2

```
template <class M >
bool TestMssmPoleMixingGets2(
    SubSpectrum * spec,
    M FSmssm,
    bool immediate_exit =true
)
```


### function TestMssmPoleMixingGets2

```
template <class MI >
bool TestMssmPoleMixingGets2(
    MSSMSpec< MI > & mssm,
    typename MI::Model & FSmssm,
    bool immediate_exit =true
)
```


### function TestMssmPoleGets

```
template <class M >
bool TestMssmPoleGets(
    SubSpectrum * spec,
    M FSmssm
)
```


### function TestMssmPoleGets

```
template <class MI >
bool TestMssmPoleGets(
    MSSMSpec< MI > & mssm,
    typename MI::Model & FSmssm
)
```


### function TestMssmParGets

```
template <class M >
bool TestMssmParGets(
    SubSpectrum * spec,
    M FSmssm
)
```


### function TestMssmParGets

```
template <class MI >
bool TestMssmParGets(
    MSSMSpec< MI > & mssm,
    typename MI::Model & FSmssm
)
```


### function setup

```
template <class Model >
void setup(
    Model & mssm
)
```


### function test_exact

```
template <class MI >
bool test_exact(
    MSSMSpec< MI > & mssm,
    typename MI::Model & FS_model_slha
)
```


### function test_exact

```
template <class M >
double test_exact(
    SubSpectrum * spec,
    M FS_model_slha
)
```


### function running_test

```
template <class MI >
bool running_test(
    MSSMSpec< MI > & mssm,
    typename MI::Model & FS_model_slha,
    double tol
)
```


### function running_test

```
template <class Model >
bool running_test(
    SubSpectrum * spec,
    Model & FS_model_slha,
    double tol
)
```


### function test_within_tol

```
bool test_within_tol(
    double a,
    double b,
    double tol,
    std::string label
)
```


### function Spectrum_test

```
void Spectrum_test(
    Spectrum matched_spectra,
    const SubSpectrum * smin,
    bool SLHAonly =0
)
```


Generate data for a plot of quark mass

Testing copyability of Spectrum;


### function get_mUp

```
double get_mUp(
    const softsusy::QedQcd & model
)
```

Plain C-function wrappers for QedQcd running mass getters. 

### function get_mCharm

```
double get_mCharm(
    const softsusy::QedQcd & model
)
```


### function get_mTop

```
double get_mTop(
    const softsusy::QedQcd & model
)
```


### function get_mDown

```
double get_mDown(
    const softsusy::QedQcd & model
)
```


### function get_mStrange

```
double get_mStrange(
    const softsusy::QedQcd & model
)
```


### function get_mBottom

```
double get_mBottom(
    const softsusy::QedQcd & model
)
```


### function get_mElectron

```
double get_mElectron(
    const softsusy::QedQcd & model
)
```


### function get_mMuon

```
double get_mMuon(
    const softsusy::QedQcd & model
)
```


### function get_mTau

```
double get_mTau(
    const softsusy::QedQcd & model
)
```


### function get_mPhoton

```
double get_mPhoton(
    const softsusy::QedQcd & 
)
```


### function get_mGluon

```
double get_mGluon(
    const softsusy::QedQcd & 
)
```


### function get_alpha

```
double get_alpha(
    const softsusy::QedQcd & model
)
```

Plain C-function wrappers for QedQcd running coupling getters. 

### function get_alphaS

```
double get_alphaS(
    const softsusy::QedQcd & model
)
```


### function get_a1

```
double get_a1(
    const softsusy::QedQcd & 
)
```


All 3 SM gauge couplings. The QedQcd documenation has the following to say about this calculations: { This will calculate the three gauge couplings of the Standard Model at the scale m2. It's a simple one-loop calculation only and no thresholds are assumed. Range of validity is electroweak to top scale. 


### function get_Pole_mElectron

```
double get_Pole_mElectron(
    const SMInputs & inputs
)
```

Plain C-function wrappers for extra pole mass getters (manually specified masses) 

### function get_Pole_mMuon

```
double get_Pole_mMuon(
    const SMInputs & inputs
)
```


### function get_Pole_mNu1

```
double get_Pole_mNu1(
    const SMInputs & inputs
)
```


### function get_Pole_mNu2

```
double get_Pole_mNu2(
    const SMInputs & inputs
)
```


### function get_Pole_mNu3

```
double get_Pole_mNu3(
    const SMInputs & inputs
)
```


### function get_Pole_mPhoton

```
double get_Pole_mPhoton(
    const SMInputs & 
)
```


### function get_Pole_mGluon

```
double get_Pole_mGluon(
    const SMInputs & 
)
```


### function get_sinthW2_pole

```
double get_sinthW2_pole(
    const softsusy::QedQcd & qedqcd
)
```


### function set_Pole_mElectron

```
void set_Pole_mElectron(
    SMInputs & inputs,
    double set_value
)
```

Plain C-function wrappers for extra pole mass setters (manually specified masses) 

### function get_DiracSingletDM_Z2_spectrum

```
void get_DiracSingletDM_Z2_spectrum(
    Spectrum & result
)
```

Get a (simple) Spectrum object wrapper for the DiracSingletDM_Z2 model. 

### function fill_map_from_DiracSingletDM_Z2spectrum

```
void fill_map_from_DiracSingletDM_Z2spectrum(
    std::map< std::string, double > & specmap,
    const Spectrum & diracdmspec
)
```


Add everything... use spectrum contents routines to automate task

Verification routine should have taken care of invalid shapes etc, so won't check for that here.

Add everything... use spectrum contents routines to automate task

Verification routine should have taken care of invalid shapes etc, so won't check for that here.


### function get_DiracSingletDM_Z2_spectrum_as_map

```
void get_DiracSingletDM_Z2_spectrum_as_map(
    std::map< std::string, double > & specmap
)
```


### function get_DMEFT_spectrum

```
void get_DMEFT_spectrum(
    Spectrum & result
)
```

Get a simple wrapper for Spectrum object. 

### function fill_map_from_DMEFT_spectrum

```
void fill_map_from_DMEFT_spectrum(
    std::map< std::string, double > & specmap,
    const Spectrum & spec
)
```


Use SpectrumContents routines to automate

Use SpectrumContents routines to automate


### function get_DMEFT_spectrum_as_map

```
void get_DMEFT_spectrum_as_map(
    std::map< std::string, double > & specmap
)
```


### function get_MajoranaSingletDM_Z2_spectrum

```
void get_MajoranaSingletDM_Z2_spectrum(
    Spectrum & result
)
```

Get a (simple) Spectrum object wrapper for the MajoranaSingletDM_Z2 model. 

### function fill_map_from_MajoranaSingletDM_Z2spectrum

```
void fill_map_from_MajoranaSingletDM_Z2spectrum(
    std::map< std::string, double > & specmap,
    const Spectrum & majoranadmspec
)
```


Add everything... use spectrum contents routines to automate task

Verification routine should have taken care of invalid shapes etc, so won't check for that here.

Add everything... use spectrum contents routines to automate task

Verification routine should have taken care of invalid shapes etc, so won't check for that here.


### function get_MajoranaSingletDM_Z2_spectrum_as_map

```
void get_MajoranaSingletDM_Z2_spectrum_as_map(
    std::map< std::string, double > & specmap
)
```


### function run_FS_spectrum_generator

```
template <class MI ,
class SI >
Spectrum run_FS_spectrum_generator(
    const typename MI::InputParameters & input,
    const SMInputs & sminputs,
    const Options & runOptions,
    const std::map< str, safe_ptr< const double > > & input_Param
)
```


### function fill_MDM_input

```
template <class T >
void fill_MDM_input(
    T & input,
    const std::map< str, safe_ptr< const double > > & Param,
    SMInputs sminputs
)
```


### function check_perturb_MDM

```
bool check_perturb_MDM(
    const Spectrum & spec,
    double scale,
    int pts
)
```


### function find_non_perturb_scale_MDM

```
void find_non_perturb_scale_MDM(
    double & result
)
```


### function fill_map_from_MDMspectrum

```
void fill_map_from_MDMspectrum(
    std::map< std::string, double > & specmap,
    const Spectrum & mdmspec
)
```

Print MDM spectrum out. Stripped down copy from MSSM version with variable names changed. 

Add everything... use spectrum contents routines to automate task

Verification routine should have taken care of invalid shapes etc, so won't check for that here.

Add everything... use spectrum contents routines to automate task

Verification routine should have taken care of invalid shapes etc, so won't check for that here.


### function get_MDM_spectrum_as_map

```
void get_MDM_spectrum_as_map(
    std::map< std::string, double > & specmap
)
```


### function get_SM_SubSpectrum_from_MSSM_Spectrum

```
void get_SM_SubSpectrum_from_MSSM_Spectrum(
    const SubSpectrum *& result
)
```


Retrieve SubSpectrum* to SM LE model from Spectrum object DEPENDENCY(MSSM_spectrum, Spectrum) 


### function get_MSSM_spectrum_as_SLHAea_SLHA1

```
void get_MSSM_spectrum_as_SLHAea_SLHA1(
    SLHAstruct & result
)
```

Extract an SLHAea version of the spectrum contained in a Spectrum object, in SLHA1 format. 

### function get_MSSM_spectrum_as_SLHAea_SLHA2

```
void get_MSSM_spectrum_as_SLHAea_SLHA2(
    SLHAstruct & result
)
```

Extract an SLHAea version of the spectrum contained in a Spectrum object, in SLHA2 format. 

### function get_MSSM_spectrum_from_SLHAfile

```
void get_MSSM_spectrum_from_SLHAfile(
    Spectrum & result
)
```


Get an MSSMSpectrum object from an SLHA file Wraps it up in MSSMSimpleSpec; i.e. no RGE running possible. This is mainly for testing against benchmark points, but may be a useful last resort for interacting with "difficult" spectrum generators. 


### function get_MSSM_spectrum_from_SLHAstruct

```
void get_MSSM_spectrum_from_SLHAstruct(
    Spectrum & result
)
```


Get an MSSMSpectrum object from an SLHAstruct Wraps it up in MSSMSimpleSpec; i.e. no RGE running possible. This can be used as a poor-man's interface to backend spectrum generators 


TodoFIXME this needs to be fixed &ndash; is it needed any more? Where is this GAMBIT block supposed to be written? 


### function get_MSSM_spectrum_from_postprocessor

```
void get_MSSM_spectrum_from_postprocessor(
    Spectrum & result
)
```


Get pre-computed MSSM spectrum from previous output file This function ONLY works when the scan is driven by the postprocessor! This is because it relies on the global reader object created by the postprocessor to retrieve output. 


### function FeynHiggs_MSSMMasses

```
void FeynHiggs_MSSMMasses(
    fh_MSSMMassObs_container & result
)
```

FeynHiggs SUSY masses and mixings. 

### function FeynHiggs_AllHiggsMasses

```
void FeynHiggs_AllHiggsMasses(
    fh_HiggsMassObs_container & result
)
```

Higgs masses and mixings with theoretical uncertainties. 

### function FeynHiggs_Couplings

```
void FeynHiggs_Couplings(
    fh_Couplings_container & result
)
```

Call FHCouplings from FeynHiggs and collect the output. 

### function get_invisibles

```
std::vector< std::pair< str, str > > get_invisibles(
    const SubSpectrum & spec
)
```

Helper function to work out if the LSP is invisible, and if so, which particle it is. 

### function MSSM_higgs_couplings_pwid

```
void MSSM_higgs_couplings_pwid(
    HiggsCouplingsTable & result
)
```

Put together the Higgs couplings for the MSSM, from partial widths only. 

### function MSSM_higgs_couplings_FeynHiggs

```
void MSSM_higgs_couplings_FeynHiggs(
    HiggsCouplingsTable & result
)
```

Put together the Higgs couplings for the MSSM, using FeynHiggs. 

### function FeynHiggs_HiggsMass

```
void FeynHiggs_HiggsMass(
    triplet< double > & result
)
```


### function FeynHiggs_HeavyHiggsMasses

```
void FeynHiggs_HeavyHiggsMasses(
    map_int_triplet_dbl & result
)
```


### function SUSYHD_HiggsMass

```
void SUSYHD_HiggsMass(
    triplet< double > & result
)
```


### function get_ScalarSingletDM_Z2_spectrum

```
void get_ScalarSingletDM_Z2_spectrum(
    Spectrum & result
)
```

Get a (simple) Spectrum object wrapper for the ScalarSingletDM_Z2 model. 

### function get_ScalarSingletDM_Z3_spectrum

```
void get_ScalarSingletDM_Z3_spectrum(
    Spectrum & result
)
```

Get a (simple) Spectrum object wrapper for the ScalarSingletDM_Z3 model. 

### function fill_ScalarSingletDM_input

```
template <class T >
void fill_ScalarSingletDM_input(
    T & input,
    const std::map< str, safe_ptr< const double > > & Param,
    SMInputs sminputs
)
```


### function fill_extra_input

```
template <class T >
void fill_extra_input(
    T & input,
    const std::map< str, safe_ptr< const double > > & Param
)
```


### function check_perturb

```
bool check_perturb(
    const Spectrum & spec,
    const std::vector< SpectrumParameter > & required_parameters,
    double scale,
    int pts
)
```


### function ScalarSingletDM_higgs_couplings_pwid

```
void ScalarSingletDM_higgs_couplings_pwid(
    HiggsCouplingsTable & result
)
```

Put together the Higgs couplings for the ScalarSingletDM models, from partial widths only. 

### function fill_map_from_ScalarSingletDM_spectrum

```
void fill_map_from_ScalarSingletDM_spectrum(
    std::map< std::string, double > & specmap,
    const Spectrum & singletdmspec,
    const std::vector< SpectrumParameter > & required_parameters
)
```

Print ScalarSingletDM spectra out. Stripped down copy of MSSM version with variable names changed. 

Verification routine should have taken care of invalid shapes etc, so won't check for that here.


### function get_ScalarSingletDM_Z2_spectrum_as_map

```
void get_ScalarSingletDM_Z2_spectrum_as_map(
    std::map< std::string, double > & specmap
)
```


### function get_ScalarSingletDM_Z3_spectrum_as_map

```
void get_ScalarSingletDM_Z3_spectrum_as_map(
    std::map< std::string, double > & specmap
)
```


### function get_QedQcd_spectrum

```
void get_QedQcd_spectrum(
    const SubSpectrum *& result
)
```

Construct a SubSpectrum object from SMInputs using [QedQcdWrapper](). 

### function get_SM_spectrum

```
void get_SM_spectrum(
    Spectrum & result
)
```

Get a Spectrum object wrapper for Standard-Model-only information. 

### function SM_higgs_couplings

```
void SM_higgs_couplings(
    HiggsCouplingsTable & result
)
```

Put together the SM Higgs couplings. 

### function Math_test

```
void Math_test(
    bool & result
)
```


### function SUSYHD_test

```
void SUSYHD_test(
    bool & result
)
```


### function SPheno_MSSM_test

```
void SPheno_MSSM_test(
    bool & result
)
```


### function MSSMspectrum_test

```
void MSSMspectrum_test(
    bool & result
)
```


Verify consistency of the contents of a Spectrum object of capability MSSMspectrum. (derived from old 'exampleRead' function) 


NEW! Tests of override setters These cannot be run on a const spectrum object, so we need to clone it first

Now add some entry that didn't exist before

Note: if we try to do it like this, it should fail:

TODO: Tests of ordinary 'setter' functions (these actually replace data in the wrapped object)

Tests of spectrum/particle database antiparticle getters/setters interaction

Turn SpecBit warnings to 'fatal' in order to trigger stop after this function runs.


### function light_quark_test

```
void light_quark_test(
    bool & 
)
```


Generate data for a plot of quark mass


### function get_VectorSingletDM_Z2_spectrum

```
void get_VectorSingletDM_Z2_spectrum(
    Spectrum & result
)
```

Get a (simple) Spectrum object wrapper for the VectorSingletDM_Z2 model. 

### function fill_map_from_VectorSingletDM_Z2spectrum

```
void fill_map_from_VectorSingletDM_Z2spectrum(
    std::map< std::string, double > & specmap,
    const Spectrum & vectordmspec
)
```


Add everything... use spectrum contents routines to automate task

Verification routine should have taken care of invalid shapes etc, so won't check for that here.

Add everything... use spectrum contents routines to automate task

Verification routine should have taken care of invalid shapes etc, so won't check for that here.


### function get_VectorSingletDM_Z2_spectrum_as_map

```
void get_VectorSingletDM_Z2_spectrum_as_map(
    std::map< std::string, double > & specmap
)
```


### function check_EW_stability_ScalarSingletDM_Z3

```
void check_EW_stability_ScalarSingletDM_Z3(
    double & result
)
```


### function check_perturb_to_min_lambda

```
bool check_perturb_to_min_lambda(
    const Spectrum & spec,
    double scale,
    int pts,
    const std::vector< SpectrumParameter > required_parameters
)
```


### function run_lambda

```
double run_lambda(
    double scale,
    void * params
)
```


### function find_min_lambda_Helper

```
void find_min_lambda_Helper(
    dbl_dbl_bool & vs_tuple,
    const Spectrum & fullspectrum,
    double high_energy_limit,
    int check_perturb_pts,
    const std::vector< SpectrumParameter > required_parameters
)
```


### function find_min_lambda_ScalarSingletDM_Z2

```
void find_min_lambda_ScalarSingletDM_Z2(
    dbl_dbl_bool & vs_tuple
)
```


### function find_min_lambda_ScalarSingletDM_Z3

```
void find_min_lambda_ScalarSingletDM_Z3(
    dbl_dbl_bool & vs_tuple
)
```


### function find_min_lambda_MDM

```
void find_min_lambda_MDM(
    dbl_dbl_bool & vs_tuple
)
```


### function get_expected_vacuum_lifetime

```
void get_expected_vacuum_lifetime(
    double & lifetime
)
```


### function lnL_highscale_vacuum_decay_single_field

```
void lnL_highscale_vacuum_decay_single_field(
    double & result
)
```


### function get_lambdaB

```
void get_lambdaB(
    double & result
)
```


### function check_perturb_min_lambda

```
void check_perturb_min_lambda(
    double & result
)
```


### function get_likelihood_VS

```
void get_likelihood_VS(
    double & result
)
```


Vacuum stability likelihood from a Vevacious run calculating the lifetime of & tunneling probability to the vacuua 


### function get_VS_results

```
void get_VS_results(
    map_str_dbl & result
)
```

get all results from VS as str to dbl map to easily print them 

### function make_vpp_inputs

```
void make_vpp_inputs(
    map_str_str & opts
)
```


Helper function that takes any YAML options and makes the vevacious input, in the form of .xml files. 


### function set_panic_vacua

```
void set_panic_vacua(
    std::set< std::string > & result
)
```


Create a string set containing a list with all likelihoods that vevacious should calculate. The options are tunneling to

* the global minimum -> "global"
* the nearest minimum -> "nearest" Default behaviour (if no sub-capabilities are set): calculate both 


### function set_tunnelling_strategy

```
void set_tunnelling_strategy(
    std::set< std::string > & result
)
```


Create a string set containing a list of the tunnelling strategies that vevacious should use. This could be

* quantum (zero-T) tunnelling to new minimum -> "quantum"
* thermal (finiite-T) tunnelling to new minimum -> "thermal" Default behaviour is both 


### function helper_set_tunnelingStrategy

```
str helper_set_tunnelingStrategy(
    std::set< std::string > tunnelling_strategy
)
```


Set tunnelling strategy for the different minima, either

* JustQuantum -> only quantum
* JustThermal -> only thermal or
* QuantumThenThermal -> both depending on the strategy provided from the sub-capabilities 


### function initialize_vevacious

```
void initialize_vevacious(
    std::string & inputspath
)
```


Parses the YAML file for any settings, then passes to make_vpp_inputs to create .xml files for vevacious to run with. 


### function exec_pass_spectrum_to_vevacious

```
vevacious_1_0::VevaciousPlusPlus::VevaciousPlusPlus exec_pass_spectrum_to_vevacious(
    SpectrumEntriesForVevacious & pass_spectrum
)
```


Execute the passing of the spectrum object (as SLHAea) to vevacious. It is a helper function and not a capability since this has to be executed before every single vevacious run. vevacious can run multiple times for a single point in parameter space depending on settings: -> global and/or nearest minimum for tunneling requested? -> multiple attempts for one vevacious run allowed? 


### function helper_run_vevacious

```
void helper_run_vevacious(
    vevacious_1_0::VevaciousPlusPlus::VevaciousPlusPlus & vevaciousPlusPlus,
    VevaciousResultContainer & result,
    std::string panic_vacuum,
    std::string inputPath
)
```


Call vevacious, the result is either "Stable", "Metastable" or "Inconclusive" in case a vevacious run failed for some reason 


### function helper_catch_vevacious

```
void helper_catch_vevacious(
    VevaciousResultContainer & result,
    std::string panic_vacuum
)
```


Decide how to deal with a failed vevacious run --> set lifetime and thermalProbability conservatively to a value easy to identify in analysis 


### function compare_panic_vacua

```
void compare_panic_vacua(
    map_str_str & result
)
```


If tunnelling to global and nearest vacuum are requested, this capability compares if the two vacua are the same. Return true if they coincide, false if not. 


### function check_vacuum_stability_vevacious

```
void check_vacuum_stability_vevacious(
    VevaciousResultContainer & result
)
```

Check stability of global vacuum of the potential with vevacious. 

### function vevacious_file_location_MSSM

```
void vevacious_file_location_MSSM(
    map_str_str & result
)
```

Tell GAMBIT which files to work with for the MSSM. 

### function prepare_pass_MSSM_spectrum_to_vevacious

```
void prepare_pass_MSSM_spectrum_to_vevacious(
    SpectrumEntriesForVevacious & result
)
```


This function adds all entries of the spectrum object (as SLHAea) that need to be passed to vevacious to an instance of type [SpectrumEntriesForVevacious](/documentation/code/classes/classgambit_1_1specbit_1_1spectrumentriesforvevacious/). The actual passing happens in the helper function exec_pass_spectrum_to_vevacious which gets executed every time before a vevacious call. Model dependent. 






-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000