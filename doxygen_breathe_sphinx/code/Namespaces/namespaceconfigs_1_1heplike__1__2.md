---
title: 'namespace configs::heplike_1_2'

description: "[No description available]"

---






[No description available]

## Attributes

|                | Name           |
| -------------- | -------------- |
| string | **[castxml_cc_id](/documentation/code/namespaces/namespaceconfigs_1_1heplike__1__2/#variable-castxml-cc-id)**  |
| string | **[castxml_cc](/documentation/code/namespaces/namespaceconfigs_1_1heplike__1__2/#variable-castxml-cc)**  |
| string | **[castxml_cc_opt](/documentation/code/namespaces/namespaceconfigs_1_1heplike__1__2/#variable-castxml-cc-opt)**  |
| string | **[gambit_backend_name](/documentation/code/namespaces/namespaceconfigs_1_1heplike__1__2/#variable-gambit-backend-name)**  |
| string | **[gambit_backend_version](/documentation/code/namespaces/namespaceconfigs_1_1heplike__1__2/#variable-gambit-backend-version)**  |
| string | **[gambit_backend_reference](/documentation/code/namespaces/namespaceconfigs_1_1heplike__1__2/#variable-gambit-backend-reference)**  |
| string | **[gambit_base_namespace](/documentation/code/namespaces/namespaceconfigs_1_1heplike__1__2/#variable-gambit-base-namespace)**  |
| string | **[install_path](/documentation/code/namespaces/namespaceconfigs_1_1heplike__1__2/#variable-install-path)**  |
| list | **[input_files](/documentation/code/namespaces/namespaceconfigs_1_1heplike__1__2/#variable-input-files)**  |
| list | **[include_paths](/documentation/code/namespaces/namespaceconfigs_1_1heplike__1__2/#variable-include-paths)**  |
| list | **[base_paths](/documentation/code/namespaces/namespaceconfigs_1_1heplike__1__2/#variable-base-paths)**  |
| string | **[header_files_to](/documentation/code/namespaces/namespaceconfigs_1_1heplike__1__2/#variable-header-files-to)**  |
| string | **[src_files_to](/documentation/code/namespaces/namespaceconfigs_1_1heplike__1__2/#variable-src-files-to)**  |
| list | **[load_classes](/documentation/code/namespaces/namespaceconfigs_1_1heplike__1__2/#variable-load-classes)**  |
| list | **[load_functions](/documentation/code/namespaces/namespaceconfigs_1_1heplike__1__2/#variable-load-functions)**  |
| list | **[ditch](/documentation/code/namespaces/namespaceconfigs_1_1heplike__1__2/#variable-ditch)**  |
| bool | **[auto_detect_stdlib_paths](/documentation/code/namespaces/namespaceconfigs_1_1heplike__1__2/#variable-auto-detect-stdlib-paths)**  |
| bool | **[load_parent_classes](/documentation/code/namespaces/namespaceconfigs_1_1heplike__1__2/#variable-load-parent-classes)**  |
| bool | **[wrap_inherited_members](/documentation/code/namespaces/namespaceconfigs_1_1heplike__1__2/#variable-wrap-inherited-members)**  |
| string | **[header_extension](/documentation/code/namespaces/namespaceconfigs_1_1heplike__1__2/#variable-header-extension)**  |
| string | **[source_extension](/documentation/code/namespaces/namespaceconfigs_1_1heplike__1__2/#variable-source-extension)**  |
| int | **[indent](/documentation/code/namespaces/namespaceconfigs_1_1heplike__1__2/#variable-indent)**  |
| dictionary | **[known_classes](/documentation/code/namespaces/namespaceconfigs_1_1heplike__1__2/#variable-known-classes)**  |
| list | **[pragmas_begin](/documentation/code/namespaces/namespaceconfigs_1_1heplike__1__2/#variable-pragmas-begin)**  |
| list | **[pragmas_end](/documentation/code/namespaces/namespaceconfigs_1_1heplike__1__2/#variable-pragmas-end)**  |



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
string castxml_cc_opt =  '-std=c++14 -D __builtin_sincos=::sincos';
```


### variable gambit_backend_name

```
string gambit_backend_name =  'HepLike';
```


### variable gambit_backend_version

```
string gambit_backend_version =  '1.2';
```


### variable gambit_backend_reference

```
string gambit_backend_reference =  'Bhom:2020bfe';
```


### variable gambit_base_namespace

```
string gambit_base_namespace =  '';
```


### variable install_path

```
string install_path =  '../../../Backends/installed/'+gambit_backend_name.lower()+'/'+gambit_backend_version;
```


### variable input_files

```
list input_files =  [
    install_path+'/include/HL_BifurGaussian.h',
    install_path+'/include/HL_Constants.h',
    install_path+'/include/HL_Data.h',
    install_path+'/include/HL_ExpPoints.h',
    install_path+'/include/HL_Gaussian.h',
    install_path+'/include/HL_Limit.h',
    install_path+'/include/HL_nDimBifurGaussian.h',
    install_path+'/include/HL_nDimGaussian.h',
    install_path+'/include/HL_nDimLikelihood.h',
    install_path+'/include/HL_ProfLikelihood.h',
    install_path+'/include/HL_Stats.h'
];
```


### variable include_paths

```
list include_paths =  [install_path+'/include/', '../../../contrib/yaml-cpp-0.6.2/include'];
```


### variable base_paths

```
list base_paths =  [install_path];
```


### variable header_files_to

```
string header_files_to =  install_path+'/include';
```


### variable src_files_to

```
string src_files_to =  install_path+'/src';
```


### variable load_classes

```
list load_classes =  [
    'HL_BifurGaussian',
    'HL_Data',
    'HL_ExpPoints',
    'HL_Gaussian',
    'HL_Limit',
    'HL_nDimBifurGaussian',
    'HL_nDimGaussian',
    'HL_ProfLikelihood',
    'HL_nDimLikelihood',
];
```


### variable load_functions

```
list load_functions =  [
    'HL_Data()',
    'HL_Data(std::string)',
    'read()',
    'set_debug_yaml( bool )',
    'Read()',
    'GetChi2(double, double )',
    'GetLikelihood(double, double )',
    'GetLogLikelihood(double, double )',
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
string header_extension =  '.h';
```


### variable source_extension

```
string source_extension =  '.cc';
```


### variable indent

```
int indent =  3;
```


### variable known_classes

```
dictionary known_classes =  {
    "boost::numeric::ublas::matrix" : "<boost/numeric/ublas/matrix.hpp>",
    "YAML::Node" : "yaml-cpp/yaml.h"
};
```


### variable pragmas_begin

```
list pragmas_begin =  [
    '#pragma GCC diagnostic push',
    '#pragma GCC diagnostic ignored "-Wdeprecated-declarations"',
];
```


### variable pragmas_end

```
list pragmas_end =  [
    '#pragma GCC diagnostic pop'
];
```





-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000