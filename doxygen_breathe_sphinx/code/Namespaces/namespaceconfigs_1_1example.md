---
title: 'namespace configs::example'

description: "[No description available]"

---






[No description available]

## Attributes

|                | Name           |
| -------------- | -------------- |
| list | **[input_files](/documentation/code/namespaces/namespaceconfigs_1_1example/#variable-input-files)**  |
| list | **[load_functions](/documentation/code/namespaces/namespaceconfigs_1_1example/#variable-load-functions)**  |
| list | **[load_common_blocks](/documentation/code/namespaces/namespaceconfigs_1_1example/#variable-load-common-blocks)**  |
| string | **[name_mangling](/documentation/code/namespaces/namespaceconfigs_1_1example/#variable-name-mangling)**  |
| string | **[format](/documentation/code/namespaces/namespaceconfigs_1_1example/#variable-format)**  |
| int | **[tabs_to_n_spaces](/documentation/code/namespaces/namespaceconfigs_1_1example/#variable-tabs-to-n-spaces)**  |
| string | **[f_capability_prefix](/documentation/code/namespaces/namespaceconfigs_1_1example/#variable-f-capability-prefix)**  |
| string | **[f_capability_suffix](/documentation/code/namespaces/namespaceconfigs_1_1example/#variable-f-capability-suffix)**  |
| bool | **[module_name_in_capability](/documentation/code/namespaces/namespaceconfigs_1_1example/#variable-module-name-in-capability)**  |
| string | **[cb_capability_prefix](/documentation/code/namespaces/namespaceconfigs_1_1example/#variable-cb-capability-prefix)**  |
| string | **[cb_capability_suffix](/documentation/code/namespaces/namespaceconfigs_1_1example/#variable-cb-capability-suffix)**  |



## Attributes Documentation

### variable input_files

```
list input_files =  ['example/example.f90'];
```


### variable load_functions

```
list load_functions =  ['one', 'two', 'text', 'MA::text', 'non_existing_function'];
```


### variable load_common_blocks

```
list load_common_blocks =  ['dummy_block', 'non_existing_block'];
```


### variable name_mangling

```
string name_mangling =  'gfortran';
```


### variable format

```
string format =  'free';
```


### variable tabs_to_n_spaces

```
int tabs_to_n_spaces =  6;
```


### variable f_capability_prefix

```
string f_capability_prefix =  '';
```


### variable f_capability_suffix

```
string f_capability_suffix =  '';
```


### variable module_name_in_capability

```
bool module_name_in_capability =  True;
```


### variable cb_capability_prefix

```
string cb_capability_prefix =  'cb_';
```


### variable cb_capability_suffix

```
string cb_capability_suffix =  '';
```





-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000