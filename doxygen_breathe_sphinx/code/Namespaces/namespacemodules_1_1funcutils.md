---
title: 'namespace modules::funcutils'

description: "[No description available]"

---






[No description available]

## Functions

|                | Name           |
| -------------- | -------------- |
| def | **[getArgs](/documentation/code/namespaces/namespacemodules_1_1funcutils/#function-getargs)**(func_el func_el) |
| def | **[constrArgsBracket](/documentation/code/namespaces/namespacemodules_1_1funcutils/#function-constrargsbracket)**(args args, include_arg_name include_arg_name =True, include_arg_type include_arg_type =True, include_namespace include_namespace =False, cast_to_original cast_to_original =False, use_wrapper_class use_wrapper_class =False, wrapper_to_pointer wrapper_to_pointer =False, add_namespace_to_loaded add_namespace_to_loaded ='') |
| def | **[constrWrapperName](/documentation/code/namespaces/namespacemodules_1_1funcutils/#function-constrwrappername)**(func_el func_el, include_full_namespace include_full_namespace =True) |
| def | **[constrWrapperArgs](/documentation/code/namespaces/namespacemodules_1_1funcutils/#function-constrwrapperargs)**(args args, add_ref add_ref =False, convert_loaded_to_abstract convert_loaded_to_abstract =True) |
| def | **[constrDeclLine](/documentation/code/namespaces/namespacemodules_1_1funcutils/#function-constrdeclline)**(return_type return_type, func_name func_name, args_bracket args_bracket, keywords keywords =[], is_const is_const =False) |
| def | **[constrWrapperBody](/documentation/code/namespaces/namespacemodules_1_1funcutils/#function-constrwrapperbody)**(return_type return_type, func_name func_name, args args, return_is_loaded_class return_is_loaded_class, keywords keywords =[]) |
| def | **[ignoreFunction](/documentation/code/namespaces/namespacemodules_1_1funcutils/#function-ignorefunction)**(func_el func_el, limit_pointerness limit_pointerness =False, remove_n_args remove_n_args =0, print_warning print_warning =True) |
| def | **[usesNativeType](/documentation/code/namespaces/namespacemodules_1_1funcutils/#function-usesnativetype)**(func_el func_el) |
| def | **[usesLoadedType](/documentation/code/namespaces/namespacemodules_1_1funcutils/#function-usesloadedtype)**(func_el func_el) |
| def | **[numberOfDefaultArgs](/documentation/code/namespaces/namespacemodules_1_1funcutils/#function-numberofdefaultargs)**(func_el func_el) |
| def | **[constrExternFuncDecl](/documentation/code/namespaces/namespacemodules_1_1funcutils/#function-constrexternfuncdecl)**(func_el func_el) |
| def | **[getFunctionNameDict](/documentation/code/namespaces/namespacemodules_1_1funcutils/#function-getfunctionnamedict)**(func_el func_el) |


## Functions Documentation

### function getArgs

```
def getArgs(
    func_el func_el
)
```


### function constrArgsBracket

```
def constrArgsBracket(
    args args,
    include_arg_name include_arg_name =True,
    include_arg_type include_arg_type =True,
    include_namespace include_namespace =False,
    cast_to_original cast_to_original =False,
    use_wrapper_class use_wrapper_class =False,
    wrapper_to_pointer wrapper_to_pointer =False,
    add_namespace_to_loaded add_namespace_to_loaded =''
)
```


### function constrWrapperName

```
def constrWrapperName(
    func_el func_el,
    include_full_namespace include_full_namespace =True
)
```


### function constrWrapperArgs

```
def constrWrapperArgs(
    args args,
    add_ref add_ref =False,
    convert_loaded_to_abstract convert_loaded_to_abstract =True
)
```


### function constrDeclLine

```
def constrDeclLine(
    return_type return_type,
    func_name func_name,
    args_bracket args_bracket,
    keywords keywords =[],
    is_const is_const =False
)
```


### function constrWrapperBody

```
def constrWrapperBody(
    return_type return_type,
    func_name func_name,
    args args,
    return_is_loaded_class return_is_loaded_class,
    keywords keywords =[]
)
```


### function ignoreFunction

```
def ignoreFunction(
    func_el func_el,
    limit_pointerness limit_pointerness =False,
    remove_n_args remove_n_args =0,
    print_warning print_warning =True
)
```


### function usesNativeType

```
def usesNativeType(
    func_el func_el
)
```


### function usesLoadedType

```
def usesLoadedType(
    func_el func_el
)
```


### function numberOfDefaultArgs

```
def numberOfDefaultArgs(
    func_el func_el
)
```


### function constrExternFuncDecl

```
def constrExternFuncDecl(
    func_el func_el
)
```


### function getFunctionNameDict

```
def getFunctionNameDict(
    func_el func_el
)
```






-------------------------------

Updated on 2022-07-20 at 17:18:42 +0000