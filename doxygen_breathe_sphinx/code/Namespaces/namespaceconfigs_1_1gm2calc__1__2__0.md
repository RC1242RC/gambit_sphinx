---
title: 'namespace configs::gm2calc_1_2_0'

description: "[No description available]"

---






[No description available]

## Attributes

|                | Name           |
| -------------- | -------------- |
| string | **[castxml_cc_id](/documentation/code/namespaces/namespaceconfigs_1_1gm2calc__1__2__0/#variable-castxml-cc-id)**  |
| string | **[castxml_cc](/documentation/code/namespaces/namespaceconfigs_1_1gm2calc__1__2__0/#variable-castxml-cc)**  |
| string | **[castxml_cc_opt](/documentation/code/namespaces/namespaceconfigs_1_1gm2calc__1__2__0/#variable-castxml-cc-opt)**  |
| string | **[gambit_backend_name](/documentation/code/namespaces/namespaceconfigs_1_1gm2calc__1__2__0/#variable-gambit-backend-name)**  |
| string | **[gambit_backend_version](/documentation/code/namespaces/namespaceconfigs_1_1gm2calc__1__2__0/#variable-gambit-backend-version)**  |
| string | **[gambit_backend_reference](/documentation/code/namespaces/namespaceconfigs_1_1gm2calc__1__2__0/#variable-gambit-backend-reference)**  |
| string | **[gambit_base_namespace](/documentation/code/namespaces/namespaceconfigs_1_1gm2calc__1__2__0/#variable-gambit-base-namespace)**  |
| list | **[input_files](/documentation/code/namespaces/namespaceconfigs_1_1gm2calc__1__2__0/#variable-input-files)**  |
| list | **[include_paths](/documentation/code/namespaces/namespaceconfigs_1_1gm2calc__1__2__0/#variable-include-paths)**  |
| list | **[base_paths](/documentation/code/namespaces/namespaceconfigs_1_1gm2calc__1__2__0/#variable-base-paths)**  |
| string | **[header_files_to](/documentation/code/namespaces/namespaceconfigs_1_1gm2calc__1__2__0/#variable-header-files-to)**  |
| string | **[src_files_to](/documentation/code/namespaces/namespaceconfigs_1_1gm2calc__1__2__0/#variable-src-files-to)**  |
| list | **[load_classes](/documentation/code/namespaces/namespaceconfigs_1_1gm2calc__1__2__0/#variable-load-classes)**  |
| list | **[load_functions](/documentation/code/namespaces/namespaceconfigs_1_1gm2calc__1__2__0/#variable-load-functions)**  |
| list | **[ditch](/documentation/code/namespaces/namespaceconfigs_1_1gm2calc__1__2__0/#variable-ditch)**  |
| bool | **[auto_detect_stdlib_paths](/documentation/code/namespaces/namespaceconfigs_1_1gm2calc__1__2__0/#variable-auto-detect-stdlib-paths)**  |
| bool | **[load_parent_classes](/documentation/code/namespaces/namespaceconfigs_1_1gm2calc__1__2__0/#variable-load-parent-classes)**  |
| bool | **[wrap_inherited_members](/documentation/code/namespaces/namespaceconfigs_1_1gm2calc__1__2__0/#variable-wrap-inherited-members)**  |
| string | **[header_extension](/documentation/code/namespaces/namespaceconfigs_1_1gm2calc__1__2__0/#variable-header-extension)**  |
| string | **[source_extension](/documentation/code/namespaces/namespaceconfigs_1_1gm2calc__1__2__0/#variable-source-extension)**  |
| int | **[indent](/documentation/code/namespaces/namespaceconfigs_1_1gm2calc__1__2__0/#variable-indent)**  |
| dictionary | **[known_classes](/documentation/code/namespaces/namespaceconfigs_1_1gm2calc__1__2__0/#variable-known-classes)**  |
| list | **[pragmas_begin](/documentation/code/namespaces/namespaceconfigs_1_1gm2calc__1__2__0/#variable-pragmas-begin)**  |
| list | **[pragmas_end](/documentation/code/namespaces/namespaceconfigs_1_1gm2calc__1__2__0/#variable-pragmas-end)**  |



## Attributes Documentation

### variable castxml_cc_id

```
string castxml_cc_id =  'gnu';
```




```
                           #
```

 Configuration module for BOSS # # 


### variable castxml_cc

```
string castxml_cc =  'g++';
```


### variable castxml_cc_opt

```
string castxml_cc_opt =  '-std=c++11';
```


### variable gambit_backend_name

```
string gambit_backend_name =  'gm2calc';
```


### variable gambit_backend_version

```
string gambit_backend_version =  '1.2.0';
```


### variable gambit_backend_reference

```
string gambit_backend_reference =  'Athron:2015rva';
```


### variable gambit_base_namespace

```
string gambit_base_namespace =  '';
```


### variable input_files

```
list input_files =  [
    '../../../Backends/installed/gm2calc/'+gambit_backend_version+'/src/MSSMNoFV_onshell.hpp',
    '../../../Backends/installed/gm2calc/'+gambit_backend_version+'/src/gm2_1loop.hpp',
    '../../../Backends/installed/gm2calc/'+gambit_backend_version+'/src/gm2_2loop.hpp',
    '../../../Backends/installed/gm2calc/'+gambit_backend_version+'/src/gm2_uncertainty.hpp',
    '../../../Backends/installed/gm2calc/'+gambit_backend_version+'/src/gm2_error.hpp',
];
```


### variable include_paths

```
list include_paths =  [
    '../../../Backends/installed/gm2calc/'+gambit_backend_version+'/src',
    '../../../contrib/eigen3.2.8' # This should be learned from GAMBIT somehow to future-protect against version changes (and if user uses own library!)
];
```


### variable base_paths

```
list base_paths =  ['../../../Backends/installed/gm2calc/'+gambit_backend_version];
```


### variable header_files_to

```
string header_files_to =  '../../../Backends/installed/gm2calc/'+gambit_backend_version+'/src';
```


### variable src_files_to

```
string src_files_to =  '../../../Backends/installed/gm2calc/'+gambit_backend_version+'/src';
```


### variable load_classes

```
list load_classes =  [
    'gm2calc::MSSMNoFV_onshell',
    'gm2calc::MSSMNoFV_onshell_mass_eigenstates',
    'gm2calc::MSSMNoFV_onshell_soft_parameters',
    'gm2calc::MSSMNoFV_onshell_susy_parameters',
    'gm2calc::MSSMNoFV_onshell_physical',
    'gm2calc::MSSMNoFV_onshell_problems',
    'gm2calc::Error',
    'gm2calc::ESetupError',
    'gm2calc::EInvalidInput',
    'gm2calc::EPhysicalProblem',
    'gm2calc::EReadError',
];
```


### variable load_functions

```
list load_functions =  [
  'gm2calc::calculate_amu_1loop(const gm2calc::MSSMNoFV_onshell&)',
  'gm2calc::calculate_amu_1loop_non_tan_beta_resummed(const gm2calc::MSSMNoFV_onshell&)',
  'gm2calc::calculate_amu_2loop(const gm2calc::MSSMNoFV_onshell&)',
  'gm2calc::calculate_amu_2loop_non_tan_beta_resummed(const gm2calc::MSSMNoFV_onshell&)',
  'gm2calc::calculate_uncertainty_amu_2loop(const gm2calc::MSSMNoFV_onshell&)'
];
```


### variable ditch

```
list ditch =  [];
```


### variable auto_detect_stdlib_paths

```
bool auto_detect_stdlib_paths =  False;
```


### variable load_parent_classes

```
bool load_parent_classes =  False;
```


### variable wrap_inherited_members

```
bool wrap_inherited_members =  False;
```


### variable header_extension

```
string header_extension =  '.hpp';
```


### variable source_extension

```
string source_extension =  '.cpp';
```


### variable indent

```
int indent =  3;
```


### variable known_classes

```
dictionary known_classes =  {
    "Eigen::Matrix" : "<Eigen/Core>",
    "Eigen::Array" : "<Eigen/Core>",
};
```


### variable pragmas_begin

```
list pragmas_begin =  [
    '#include "gambit/Utils/begin_ignore_warnings_eigen.hpp"', # Contains pragmas to suppress warnings from Eigen
];
```


### variable pragmas_end

```
list pragmas_end =  [
    '#include "gambit/Utils/end_ignore_warnings.hpp"', # Restores the warning settings
];
```





-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000