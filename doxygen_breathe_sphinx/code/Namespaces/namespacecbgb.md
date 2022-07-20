---
title: 'namespace cbgb'

description: "[No description available]"

---






[No description available]

## Attributes

|                | Name           |
| -------------- | -------------- |
| | **[input_cfg_path](/documentation/code/namespaces/namespacecbgb/#variable-input-cfg-path)**  |
| | **[input_cfg_dir](/documentation/code/namespaces/namespacecbgb/#variable-input-cfg-dir)**  |
| | **[input_cfg_filename](/documentation/code/namespaces/namespacecbgb/#variable-input-cfg-filename)**  |
| | **[input_cfg_modulename](/documentation/code/namespaces/namespacecbgb/#variable-input-cfg-modulename)**  |
| | **[ext](/documentation/code/namespaces/namespacecbgb/#variable-ext)**  |
| | **[module_name](/documentation/code/namespaces/namespacecbgb/#variable-module-name)**  |
| | **[cfg](/documentation/code/namespaces/namespacecbgb/#variable-cfg)**  |
| string | **[f_listing](/documentation/code/namespaces/namespacecbgb/#variable-f-listing)**  |
| list | **[f_duplicates](/documentation/code/namespaces/namespacecbgb/#variable-f-duplicates)**  |
| string | **[cb_listing](/documentation/code/namespaces/namespacecbgb/#variable-cb-listing)**  |
| list | **[cb_duplicates](/documentation/code/namespaces/namespacecbgb/#variable-cb-duplicates)**  |
| string | **[src_content](/documentation/code/namespaces/namespacecbgb/#variable-src-content)**  |
| string | **[src_lines](/documentation/code/namespaces/namespacecbgb/#variable-src-lines)**  |
| | **[code_parts_dict](/documentation/code/namespaces/namespacecbgb/#variable-code-parts-dict)**  |
| string | **[be_types_file_content](/documentation/code/namespaces/namespacecbgb/#variable-be-types-file-content)**  |
| string | **[frontend_file_content](/documentation/code/namespaces/namespacecbgb/#variable-frontend-file-content)**  |
| | **[functions_left](/documentation/code/namespaces/namespacecbgb/#variable-functions-left)**  |
| | **[code_lines](/documentation/code/namespaces/namespacecbgb/#variable-code-lines)**  |
| | **[code_category](/documentation/code/namespaces/namespacecbgb/#variable-code-category)**  |
| | **[f_name](/documentation/code/namespaces/namespacecbgb/#variable-f-name)**  |
| | **[f_name_short](/documentation/code/namespaces/namespacecbgb/#variable-f-name-short)**  |
| list | **[other_f_list](/documentation/code/namespaces/namespacecbgb/#variable-other-f-list)**  |
| bool | **[found_other_f](/documentation/code/namespaces/namespacecbgb/#variable-found-other-f)**  |
| | **[other_f_name_short](/documentation/code/namespaces/namespacecbgb/#variable-other-f-name-short)**  |
| bool | **[is_requested](/documentation/code/namespaces/namespacecbgb/#variable-is-requested)**  |
| | **[use_f_name](/documentation/code/namespaces/namespacecbgb/#variable-use-f-name)**  |
| | **[return_type_info](/documentation/code/namespaces/namespacecbgb/#variable-return-type-info)**  |
| | **[parameter_defs](/documentation/code/namespaces/namespacecbgb/#variable-parameter-defs)**  |
| | **[arg_names](/documentation/code/namespaces/namespacecbgb/#variable-arg-names)**  |
| | **[arg_info_dict](/documentation/code/namespaces/namespacecbgb/#variable-arg-info-dict)**  |
| | **[f_dict](/documentation/code/namespaces/namespacecbgb/#variable-f-dict)**  |
| | **[common_blocks_left](/documentation/code/namespaces/namespacecbgb/#variable-common-blocks-left)**  |
| | **[cb_dicts](/documentation/code/namespaces/namespacecbgb/#variable-cb-dicts)**  |
| | **[var_info_dict](/documentation/code/namespaces/namespacecbgb/#variable-var-info-dict)**  |



## Attributes Documentation

### variable input_cfg_path

```
input_cfg_path =  sys.argv[1];
```


### variable input_cfg_dir

```
input_cfg_dir;
```


### variable input_cfg_filename

```
input_cfg_filename;
```


### variable input_cfg_modulename

```
input_cfg_modulename;
```


### variable ext

```
ext;
```


### variable module_name

```
module_name =  code_dict['module'];
```


### variable cfg

```
cfg =  importlib.import_module("configs." + modules.active_cfg.module_name);
```


### variable f_listing

```
string f_listing =  '    ';
```


### variable f_duplicates

```
list f_duplicates =  [item for item,count in Counter(cfg.load_functions).items() if count > 1];
```


### variable cb_listing

```
string cb_listing =  '    ';
```


### variable cb_duplicates

```
list cb_duplicates =  [item for item,count in Counter(cfg.load_common_blocks).items() if count > 1];
```


### variable src_content

```
string src_content =  '';
```


### variable src_lines

```
string src_lines =  src_content.splitlines();
```


### variable code_parts_dict

```
code_parts_dict =  utils.getCodeParts(src_lines, prepend_module_name=True);
```


### variable be_types_file_content

```
string be_types_file_content =  '';
```


### variable frontend_file_content

```
string frontend_file_content =  '';
```


### variable functions_left

```
functions_left =  list(cfg.load_functions);
```


### variable code_lines

```
code_lines =  code_dict['code_lines'];
```


### variable code_category

```
code_category =  code_dict['category'];
```


### variable f_name

```
f_name =  code_part_name;
```


### variable f_name_short

```
f_name_short =  f_name.split('::')[-1];
```


### variable other_f_list

```
list other_f_list =  [];
```


### variable found_other_f

```
bool found_other_f =  False;
```


### variable other_f_name_short

```
other_f_name_short =  other_f_name.split('::')[-1];
```


### variable is_requested

```
bool is_requested =  True;
```


### variable use_f_name

```
use_f_name =  f_name;
```


### variable return_type_info

```
return_type_info =  utils.getFunctionReturnType(code_lines);
```


### variable parameter_defs

```
parameter_defs =  utils.getParameterDefs(code_lines);
```


### variable arg_names

```
arg_names =  utils.getFunctionArgumentNames(code_lines[0]);
```


### variable arg_info_dict

```
arg_info_dict =  utils.getVariablesDict(code_lines[1:], arg_names);
```


### variable f_dict

```
f_dict =  OrderedDict();
```


### variable common_blocks_left

```
common_blocks_left =  list(cfg.load_common_blocks);
```


### variable cb_dicts

```
cb_dicts =  utils.getCommonBlockDicts(code_lines);
```


### variable var_info_dict

```
var_info_dict =  utils.getVariablesDict(code_lines, cb_dict['member_names']);
```





-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000