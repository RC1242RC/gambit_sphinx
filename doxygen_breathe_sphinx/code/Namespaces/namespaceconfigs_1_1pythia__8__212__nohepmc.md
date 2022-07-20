---
title: 'namespace configs::pythia_8_212_nohepmc'

description: "[No description available]"

---






[No description available]

## Attributes

|                | Name           |
| -------------- | -------------- |
| string | **[castxml_cc_id](/documentation/code/namespaces/namespaceconfigs_1_1pythia__8__212__nohepmc/#variable-castxml-cc-id)**  |
| string | **[castxml_cc](/documentation/code/namespaces/namespaceconfigs_1_1pythia__8__212__nohepmc/#variable-castxml-cc)**  |
| string | **[castxml_cc_opt](/documentation/code/namespaces/namespaceconfigs_1_1pythia__8__212__nohepmc/#variable-castxml-cc-opt)**  |
| string | **[gambit_backend_name](/documentation/code/namespaces/namespaceconfigs_1_1pythia__8__212__nohepmc/#variable-gambit-backend-name)**  |
| string | **[gambit_backend_version](/documentation/code/namespaces/namespaceconfigs_1_1pythia__8__212__nohepmc/#variable-gambit-backend-version)**  |
| string | **[gambit_backend_reference](/documentation/code/namespaces/namespaceconfigs_1_1pythia__8__212__nohepmc/#variable-gambit-backend-reference)**  |
| string | **[gambit_base_namespace](/documentation/code/namespaces/namespaceconfigs_1_1pythia__8__212__nohepmc/#variable-gambit-base-namespace)**  |
| list | **[input_files](/documentation/code/namespaces/namespaceconfigs_1_1pythia__8__212__nohepmc/#variable-input-files)**  |
| list | **[include_paths](/documentation/code/namespaces/namespaceconfigs_1_1pythia__8__212__nohepmc/#variable-include-paths)**  |
| list | **[base_paths](/documentation/code/namespaces/namespaceconfigs_1_1pythia__8__212__nohepmc/#variable-base-paths)**  |
| string | **[header_files_to](/documentation/code/namespaces/namespaceconfigs_1_1pythia__8__212__nohepmc/#variable-header-files-to)**  |
| string | **[src_files_to](/documentation/code/namespaces/namespaceconfigs_1_1pythia__8__212__nohepmc/#variable-src-files-to)**  |
| list | **[load_classes](/documentation/code/namespaces/namespaceconfigs_1_1pythia__8__212__nohepmc/#variable-load-classes)**  |
| list | **[load_functions](/documentation/code/namespaces/namespaceconfigs_1_1pythia__8__212__nohepmc/#variable-load-functions)**  |
| list | **[ditch](/documentation/code/namespaces/namespaceconfigs_1_1pythia__8__212__nohepmc/#variable-ditch)**  |
| bool | **[auto_detect_stdlib_paths](/documentation/code/namespaces/namespaceconfigs_1_1pythia__8__212__nohepmc/#variable-auto-detect-stdlib-paths)**  |
| bool | **[load_parent_classes](/documentation/code/namespaces/namespaceconfigs_1_1pythia__8__212__nohepmc/#variable-load-parent-classes)**  |
| bool | **[wrap_inherited_members](/documentation/code/namespaces/namespaceconfigs_1_1pythia__8__212__nohepmc/#variable-wrap-inherited-members)**  |
| string | **[header_extension](/documentation/code/namespaces/namespaceconfigs_1_1pythia__8__212__nohepmc/#variable-header-extension)**  |
| string | **[source_extension](/documentation/code/namespaces/namespaceconfigs_1_1pythia__8__212__nohepmc/#variable-source-extension)**  |
| int | **[indent](/documentation/code/namespaces/namespaceconfigs_1_1pythia__8__212__nohepmc/#variable-indent)**  |
| dictionary | **[known_classes](/documentation/code/namespaces/namespaceconfigs_1_1pythia__8__212__nohepmc/#variable-known-classes)**  |
| list | **[pragmas_begin](/documentation/code/namespaces/namespaceconfigs_1_1pythia__8__212__nohepmc/#variable-pragmas-begin)**  |
| list | **[pragmas_end](/documentation/code/namespaces/namespaceconfigs_1_1pythia__8__212__nohepmc/#variable-pragmas-end)**  |



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
string gambit_backend_name =  'Pythia';
```


### variable gambit_backend_version

```
string gambit_backend_version =  '8.212';
```


### variable gambit_backend_reference

```
string gambit_backend_reference =  'Sjostrand:2014zea';
```


### variable gambit_base_namespace

```
string gambit_base_namespace =  '';
```


### variable input_files

```
list input_files =  [
                  '../../../Backends/installed/'+gambit_backend_name.lower()+'/'+gambit_backend_version+'/include/Pythia8/Pythia.h'
                ];
```


### variable include_paths

```
list include_paths =  [
                  '../../../Backends/installed/'+gambit_backend_name.lower()+'/'+gambit_backend_version+'/include',
                  '../../../contrib/slhaea/include'
                ];
```


### variable base_paths

```
list base_paths =  ['../../../Backends/installed/'+gambit_backend_name.lower()+'/'+gambit_backend_version+'/'];
```


### variable header_files_to

```
string header_files_to =  '../../../Backends/installed/'+gambit_backend_name.lower()+'/'+gambit_backend_version+'/include';
```


### variable src_files_to

```
string src_files_to =  '../../../Backends/installed/'+gambit_backend_name.lower()+'/'+gambit_backend_version+'/src';
```


### variable load_classes

```
list load_classes;
```


### variable load_functions

```
list load_functions =  [
    # 'Pythia8::m2(Pythia8::Wave4, Pythia8::Wave4)',
    # 'Pythia8::m2(const Pythia8::Particle&, const Pythia8::Particle&)',
];
```


### variable ditch

```
list ditch =  ['Pythia8::Pythia::initSLHA'];
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
int indent =  4;
```


### variable known_classes

```
dictionary known_classes =  {"SLHAea::Coll" : "SLHAea/slhaea.h"};
```


### variable pragmas_begin

```
list pragmas_begin =  [];
```


### variable pragmas_end

```
list pragmas_end =  [];
```





-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000