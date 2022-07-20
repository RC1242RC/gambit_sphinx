---
title: 'namespace modules::classutils'

description: "[No description available]"

---






[No description available]

## Functions

|                | Name           |
| -------------- | -------------- |
| def | **[getAbstractClassName](/documentation/code/namespaces/namespacemodules_1_1classutils/#function-getabstractclassname)**(input_name input_name, prefix prefix =gb.abstr_class_prefix, short short =False) |
| def | **[constrEmptyTemplClassDecl](/documentation/code/namespaces/namespacemodules_1_1classutils/#function-constremptytemplclassdecl)**(abstr_class_name_short abstr_class_name_short, namespaces namespaces, template_bracket template_bracket, indent indent =4) |
| def | **[constrTemplForwDecl](/documentation/code/namespaces/namespacemodules_1_1classutils/#function-constrtemplforwdecl)**(class_name_short class_name_short, namespaces namespaces, template_bracket template_bracket, indent indent =4) |
| def | **[constrAbstractClassDecl](/documentation/code/namespaces/namespacemodules_1_1classutils/#function-constrabstractclassdecl)**(class_el class_el, class_name class_name, abstr_class_name abstr_class_name, namespaces namespaces, indent indent =4, file_for_gambit file_for_gambit =False, template_types template_types =[], has_copy_constructor has_copy_constructor =True, construct_assignment_operator construct_assignment_operator =True) |
| def | **[getAcceptableConstructors](/documentation/code/namespaces/namespacemodules_1_1classutils/#function-getacceptableconstructors)**(class_el class_el, skip_copy_constructors skip_copy_constructors =False) |
| def | **[constrFactoryFunctionCode](/documentation/code/namespaces/namespacemodules_1_1classutils/#function-constrfactoryfunctioncode)**(class_el class_el, class_name class_name, indent indent =4, template_types template_types =[], skip_copy_constructors skip_copy_constructors =False, use_wrapper_return use_wrapper_return =False, use_wrapper_args use_wrapper_args =False, add_include_statements add_include_statements =True, add_signatures_comment add_signatures_comment =True) |
| def | **[constrWrapperFunction](/documentation/code/namespaces/namespacemodules_1_1classutils/#function-constrwrapperfunction)**(method_el method_el, indent indent =cfg.indent, n_indents n_indents =0, remove_n_args remove_n_args =0, only_declaration only_declaration =False, include_full_namespace include_full_namespace =False) |
| def | **[constrVariableRefFunction](/documentation/code/namespaces/namespacemodules_1_1classutils/#function-constrvariablereffunction)**(var_el var_el, virtual virtual =False, indent indent =cfg.indent, n_indents n_indents =0, only_declaration only_declaration =False, include_full_namespace include_full_namespace =False, add_return_type_suffix add_return_type_suffix =False) |
| def | **[constrPtrCopyFunc](/documentation/code/namespaces/namespacemodules_1_1classutils/#function-constrptrcopyfunc)**(class_el class_el, abstr_class_name_short abstr_class_name_short, class_name_short class_name_short, virtual virtual =False, indent indent =cfg.indent, n_indents n_indents =0, only_declaration only_declaration =False, include_full_namespace include_full_namespace =False) |
| def | **[constrPtrAssignFunc](/documentation/code/namespaces/namespacemodules_1_1classutils/#function-constrptrassignfunc)**(class_el class_el, abstr_class_name_short abstr_class_name_short, class_name_short class_name_short, virtual virtual =False, indent indent =cfg.indent, n_indents n_indents =0, only_declaration only_declaration =False, include_full_namespace include_full_namespace =False) |
| def | **[checkAssignmentOperator](/documentation/code/namespaces/namespacemodules_1_1classutils/#function-checkassignmentoperator)**(class_el class_el) |
| def | **[checkCopyConstructor](/documentation/code/namespaces/namespacemodules_1_1classutils/#function-checkcopyconstructor)**(class_el class_el, return_id return_id =False) |
| def | **[toWrapperType](/documentation/code/namespaces/namespacemodules_1_1classutils/#function-towrappertype)**(input_type_name input_type_name, remove_reference remove_reference =False, remove_pointers remove_pointers =False, include_namespace include_namespace =False, include_global_namespace include_global_namespace =False) |
| def | **[toAbstractType](/documentation/code/namespaces/namespacemodules_1_1classutils/#function-toabstracttype)**(input_type_name input_type_name, include_namespace include_namespace =True, add_pointer add_pointer =False, remove_reference remove_reference =False, remove_pointers remove_pointers =False) |
| def | **[getClassNameDict](/documentation/code/namespaces/namespacemodules_1_1classutils/#function-getclassnamedict)**(class_el class_el, abstract abstract =False) |
| def | **[constrWrapperDecl](/documentation/code/namespaces/namespacemodules_1_1classutils/#function-constrwrapperdecl)**(class_name class_name, abstr_class_name abstr_class_name, loaded_parent_classes loaded_parent_classes, class_variables class_variables, class_functions class_functions, class_constructors class_constructors, construct_assignment_operator construct_assignment_operator, has_copy_constructor has_copy_constructor, indent indent =' ' *cfg.indent) |
| def | **[constrWrapperDef](/documentation/code/namespaces/namespacemodules_1_1classutils/#function-constrwrapperdef)**(class_name class_name, abstr_class_name abstr_class_name, loaded_parent_classes loaded_parent_classes, class_variables class_variables, class_functions class_functions, class_constructors class_constructors, construct_assignment_operator construct_assignment_operator, has_copy_constructor has_copy_constructor, indent indent =' ' *cfg.indent, do_inline do_inline =False) |
| def | **[pureVirtualMembers](/documentation/code/namespaces/namespacemodules_1_1classutils/#function-purevirtualmembers)**(class_el class_el) |
| def | **[generateWrapperHeaderCode](/documentation/code/namespaces/namespacemodules_1_1classutils/#function-generatewrapperheadercode)**(class_el class_el, class_name class_name, abstr_class_name abstr_class_name, namespaces namespaces, short_abstr_class_fname short_abstr_class_fname, construct_assignment_operator construct_assignment_operator, has_copy_constructor has_copy_constructor, copy_constructor_id copy_constructor_id ='') |
| def | **[findClassNamePosition](/documentation/code/namespaces/namespacemodules_1_1classutils/#function-findclassnameposition)**(class_el class_el, file_content_nocomments file_content_nocomments) |
| def | **[isAcceptedMemberVariable](/documentation/code/namespaces/namespacemodules_1_1classutils/#function-isacceptedmembervariable)**(mem_el mem_el) |


## Functions Documentation

### function getAbstractClassName

```
def getAbstractClassName(
    input_name input_name,
    prefix prefix =gb.abstr_class_prefix,
    short short =False
)
```


### function constrEmptyTemplClassDecl

```
def constrEmptyTemplClassDecl(
    abstr_class_name_short abstr_class_name_short,
    namespaces namespaces,
    template_bracket template_bracket,
    indent indent =4
)
```


### function constrTemplForwDecl

```
def constrTemplForwDecl(
    class_name_short class_name_short,
    namespaces namespaces,
    template_bracket template_bracket,
    indent indent =4
)
```


### function constrAbstractClassDecl

```
def constrAbstractClassDecl(
    class_el class_el,
    class_name class_name,
    abstr_class_name abstr_class_name,
    namespaces namespaces,
    indent indent =4,
    file_for_gambit file_for_gambit =False,
    template_types template_types =[],
    has_copy_constructor has_copy_constructor =True,
    construct_assignment_operator construct_assignment_operator =True
)
```


### function getAcceptableConstructors

```
def getAcceptableConstructors(
    class_el class_el,
    skip_copy_constructors skip_copy_constructors =False
)
```


### function constrFactoryFunctionCode

```
def constrFactoryFunctionCode(
    class_el class_el,
    class_name class_name,
    indent indent =4,
    template_types template_types =[],
    skip_copy_constructors skip_copy_constructors =False,
    use_wrapper_return use_wrapper_return =False,
    use_wrapper_args use_wrapper_args =False,
    add_include_statements add_include_statements =True,
    add_signatures_comment add_signatures_comment =True
)
```


### function constrWrapperFunction

```
def constrWrapperFunction(
    method_el method_el,
    indent indent =cfg.indent,
    n_indents n_indents =0,
    remove_n_args remove_n_args =0,
    only_declaration only_declaration =False,
    include_full_namespace include_full_namespace =False
)
```


### function constrVariableRefFunction

```
def constrVariableRefFunction(
    var_el var_el,
    virtual virtual =False,
    indent indent =cfg.indent,
    n_indents n_indents =0,
    only_declaration only_declaration =False,
    include_full_namespace include_full_namespace =False,
    add_return_type_suffix add_return_type_suffix =False
)
```


### function constrPtrCopyFunc

```
def constrPtrCopyFunc(
    class_el class_el,
    abstr_class_name_short abstr_class_name_short,
    class_name_short class_name_short,
    virtual virtual =False,
    indent indent =cfg.indent,
    n_indents n_indents =0,
    only_declaration only_declaration =False,
    include_full_namespace include_full_namespace =False
)
```


### function constrPtrAssignFunc

```
def constrPtrAssignFunc(
    class_el class_el,
    abstr_class_name_short abstr_class_name_short,
    class_name_short class_name_short,
    virtual virtual =False,
    indent indent =cfg.indent,
    n_indents n_indents =0,
    only_declaration only_declaration =False,
    include_full_namespace include_full_namespace =False
)
```


### function checkAssignmentOperator

```
def checkAssignmentOperator(
    class_el class_el
)
```


### function checkCopyConstructor

```
def checkCopyConstructor(
    class_el class_el,
    return_id return_id =False
)
```


### function toWrapperType

```
def toWrapperType(
    input_type_name input_type_name,
    remove_reference remove_reference =False,
    remove_pointers remove_pointers =False,
    include_namespace include_namespace =False,
    include_global_namespace include_global_namespace =False
)
```


### function toAbstractType

```
def toAbstractType(
    input_type_name input_type_name,
    include_namespace include_namespace =True,
    add_pointer add_pointer =False,
    remove_reference remove_reference =False,
    remove_pointers remove_pointers =False
)
```


### function getClassNameDict

```
def getClassNameDict(
    class_el class_el,
    abstract abstract =False
)
```


### function constrWrapperDecl

```
def constrWrapperDecl(
    class_name class_name,
    abstr_class_name abstr_class_name,
    loaded_parent_classes loaded_parent_classes,
    class_variables class_variables,
    class_functions class_functions,
    class_constructors class_constructors,
    construct_assignment_operator construct_assignment_operator,
    has_copy_constructor has_copy_constructor,
    indent indent =' ' *cfg.indent
)
```


### function constrWrapperDef

```
def constrWrapperDef(
    class_name class_name,
    abstr_class_name abstr_class_name,
    loaded_parent_classes loaded_parent_classes,
    class_variables class_variables,
    class_functions class_functions,
    class_constructors class_constructors,
    construct_assignment_operator construct_assignment_operator,
    has_copy_constructor has_copy_constructor,
    indent indent =' ' *cfg.indent,
    do_inline do_inline =False
)
```


### function pureVirtualMembers

```
def pureVirtualMembers(
    class_el class_el
)
```


### function generateWrapperHeaderCode

```
def generateWrapperHeaderCode(
    class_el class_el,
    class_name class_name,
    abstr_class_name abstr_class_name,
    namespaces namespaces,
    short_abstr_class_fname short_abstr_class_fname,
    construct_assignment_operator construct_assignment_operator,
    has_copy_constructor has_copy_constructor,
    copy_constructor_id copy_constructor_id =''
)
```


### function findClassNamePosition

```
def findClassNamePosition(
    class_el class_el,
    file_content_nocomments file_content_nocomments
)
```


### function isAcceptedMemberVariable

```
def isAcceptedMemberVariable(
    mem_el mem_el
)
```






-------------------------------

Updated on 2022-07-20 at 17:18:42 +0000