---
title: 'namespace configs::example_1_234'

description: "[No description available]"

---






[No description available]

## Attributes

|                | Name           |
| -------------- | -------------- |
| string | **[castxml_cc_id](/documentation/code/namespaces/namespaceconfigs_1_1example__1__234/#variable-castxml-cc-id)**  |
| string | **[castxml_cc](/documentation/code/namespaces/namespaceconfigs_1_1example__1__234/#variable-castxml-cc)**  |
| string | **[castxml_cc_opt](/documentation/code/namespaces/namespaceconfigs_1_1example__1__234/#variable-castxml-cc-opt)**  |
| string | **[gambit_backend_name](/documentation/code/namespaces/namespaceconfigs_1_1example__1__234/#variable-gambit-backend-name)**  |
| string | **[gambit_backend_version](/documentation/code/namespaces/namespaceconfigs_1_1example__1__234/#variable-gambit-backend-version)**  |
| string | **[gambit_backend_reference](/documentation/code/namespaces/namespaceconfigs_1_1example__1__234/#variable-gambit-backend-reference)**  |
| string | **[gambit_base_namespace](/documentation/code/namespaces/namespaceconfigs_1_1example__1__234/#variable-gambit-base-namespace)**  |
| list | **[input_files](/documentation/code/namespaces/namespaceconfigs_1_1example__1__234/#variable-input-files)**  |
| list | **[include_paths](/documentation/code/namespaces/namespaceconfigs_1_1example__1__234/#variable-include-paths)**  |
| list | **[base_paths](/documentation/code/namespaces/namespaceconfigs_1_1example__1__234/#variable-base-paths)**  |
| string | **[header_files_to](/documentation/code/namespaces/namespaceconfigs_1_1example__1__234/#variable-header-files-to)**  |
| string | **[src_files_to](/documentation/code/namespaces/namespaceconfigs_1_1example__1__234/#variable-src-files-to)**  |
| list | **[load_classes](/documentation/code/namespaces/namespaceconfigs_1_1example__1__234/#variable-load-classes)**  |
| list | **[load_functions](/documentation/code/namespaces/namespaceconfigs_1_1example__1__234/#variable-load-functions)**  |
| list | **[ditch](/documentation/code/namespaces/namespaceconfigs_1_1example__1__234/#variable-ditch)**  |
| bool | **[auto_detect_stdlib_paths](/documentation/code/namespaces/namespaceconfigs_1_1example__1__234/#variable-auto-detect-stdlib-paths)**  |
| bool | **[load_parent_classes](/documentation/code/namespaces/namespaceconfigs_1_1example__1__234/#variable-load-parent-classes)**  |
| bool | **[wrap_inherited_members](/documentation/code/namespaces/namespaceconfigs_1_1example__1__234/#variable-wrap-inherited-members)**  |
| string | **[header_extension](/documentation/code/namespaces/namespaceconfigs_1_1example__1__234/#variable-header-extension)**  |
| string | **[source_extension](/documentation/code/namespaces/namespaceconfigs_1_1example__1__234/#variable-source-extension)**  |
| int | **[indent](/documentation/code/namespaces/namespaceconfigs_1_1example__1__234/#variable-indent)**  |
| dictionary | **[known_classes](/documentation/code/namespaces/namespaceconfigs_1_1example__1__234/#variable-known-classes)**  |
| list | **[pragmas_begin](/documentation/code/namespaces/namespaceconfigs_1_1example__1__234/#variable-pragmas-begin)**  |
| list | **[pragmas_end](/documentation/code/namespaces/namespaceconfigs_1_1example__1__234/#variable-pragmas-end)**  |



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
string castxml_cc_opt =  '';
```


### variable gambit_backend_name

```
string gambit_backend_name =  'Example';
```


### variable gambit_backend_version

```
string gambit_backend_version =  '1.234';
```


### variable gambit_backend_reference

```
string gambit_backend_reference =  '';
```


### variable gambit_base_namespace

```
string gambit_base_namespace =  '';
```


### variable input_files

```
list input_files =  ['example_path/include/classes.hpp'];
```


### variable include_paths

```
list include_paths =  ['example_path/include'];
```


### variable base_paths

```
list base_paths =  ['example_path'];
```


### variable header_files_to

```
string header_files_to =  'example_path/include';
```


### variable src_files_to

```
string src_files_to =  'example_path/src';
```


### variable load_classes

```
list load_classes =  [
    'ClassOne',
    'SomeNamespace::ClassTwo',
];
```


### variable load_functions

```
list load_functions =  [
    'SomeNamespace::foo(int, SomeNamespace::ClassTwo)'
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
int indent =  4;
```


### variable known_classes

```
dictionary known_classes =  {};
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