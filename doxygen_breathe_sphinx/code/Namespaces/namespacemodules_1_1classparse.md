---
title: 'namespace modules::classparse'

description: "[No description available]"

---






[No description available]

## Functions

|                | Name           |
| -------------- | -------------- |
| def | **[run](/documentation/code/namespaces/namespacemodules_1_1classparse/#function-run)**() |
| def | **[constrAbstractClassHeaderCode](/documentation/code/namespaces/namespacemodules_1_1classparse/#function-constrabstractclassheadercode)**(class_el class_el, class_name class_name, abstr_class_name abstr_class_name, namespaces namespaces, is_template is_template, has_copy_constructor has_copy_constructor, construct_assignment_operator construct_assignment_operator, abstr_class_fname abstr_class_fname, file_for_gambit file_for_gambit =False) |
| def | **[addAbsClassToInheritanceList](/documentation/code/namespaces/namespacemodules_1_1classparse/#function-addabsclasstoinheritancelist)**(class_el class_el, class_name class_name, abstr_class_name abstr_class_name, is_template is_template, original_file_name original_file_name, original_file_content_nocomments original_file_content_nocomments) |
| def | **[addIncludesToOriginalClassFile](/documentation/code/namespaces/namespacemodules_1_1classparse/#function-addincludestooriginalclassfile)**(class_el class_el, namespaces namespaces, is_template is_template, original_file_name original_file_name, original_file_content_nocomments original_file_content_nocomments, original_file_content original_file_content, short_abstr_class_fname short_abstr_class_fname) |
| def | **[generateClassMemberInterface](/documentation/code/namespaces/namespacemodules_1_1classparse/#function-generateclassmemberinterface)**(class_el class_el, class_name class_name, abstr_class_name abstr_class_name, namespaces namespaces, original_file_name original_file_name, original_file_content_nocomments original_file_content_nocomments, original_class_file_el original_class_file_el, extras_src_file_name extras_src_file_name, has_copy_constructor has_copy_constructor, construct_assignment_operator construct_assignment_operator) |
| def | **[generateFactoryFunctions](/documentation/code/namespaces/namespacemodules_1_1classparse/#function-generatefactoryfunctions)**(class_el class_el, class_name class_name, is_template is_template) |
| def | **[generateWrapperHeader](/documentation/code/namespaces/namespacemodules_1_1classparse/#function-generatewrapperheader)**(class_el class_el, class_name class_name, abstr_class_name abstr_class_name, namespaces namespaces, short_abstr_class_fname short_abstr_class_fname, construct_assignment_operator construct_assignment_operator, has_copy_constructor has_copy_constructor, copy_constructor_id copy_constructor_id) |
| def | **[constrWrapperUtils](/documentation/code/namespaces/namespacemodules_1_1classparse/#function-constrwrapperutils)**(class_name class_name) |
| def | **[addAbstractTypedefs](/documentation/code/namespaces/namespacemodules_1_1classparse/#function-addabstracttypedefs)**(abstr_class_name abstr_class_name, namespaces namespaces) |
| def | **[addWrapperTypedefs](/documentation/code/namespaces/namespacemodules_1_1classparse/#function-addwrappertypedefs)**(class_name class_name, namespaces namespaces) |

## Attributes

|                | Name           |
| -------------- | -------------- |
| list | **[template_done](/documentation/code/namespaces/namespacemodules_1_1classparse/#variable-template-done)**  |
| list | **[templ_spec_done](/documentation/code/namespaces/namespacemodules_1_1classparse/#variable-templ-spec-done)**  |
| list | **[added_parent](/documentation/code/namespaces/namespacemodules_1_1classparse/#variable-added-parent)**  |
| | **[includes](/documentation/code/namespaces/namespacemodules_1_1classparse/#variable-includes)**  |


## Functions Documentation

### function run

```
def run()
```


### function constrAbstractClassHeaderCode

```
def constrAbstractClassHeaderCode(
    class_el class_el,
    class_name class_name,
    abstr_class_name abstr_class_name,
    namespaces namespaces,
    is_template is_template,
    has_copy_constructor has_copy_constructor,
    construct_assignment_operator construct_assignment_operator,
    abstr_class_fname abstr_class_fname,
    file_for_gambit file_for_gambit =False
)
```


### function addAbsClassToInheritanceList

```
def addAbsClassToInheritanceList(
    class_el class_el,
    class_name class_name,
    abstr_class_name abstr_class_name,
    is_template is_template,
    original_file_name original_file_name,
    original_file_content_nocomments original_file_content_nocomments
)
```


### function addIncludesToOriginalClassFile

```
def addIncludesToOriginalClassFile(
    class_el class_el,
    namespaces namespaces,
    is_template is_template,
    original_file_name original_file_name,
    original_file_content_nocomments original_file_content_nocomments,
    original_file_content original_file_content,
    short_abstr_class_fname short_abstr_class_fname
)
```


### function generateClassMemberInterface

```
def generateClassMemberInterface(
    class_el class_el,
    class_name class_name,
    abstr_class_name abstr_class_name,
    namespaces namespaces,
    original_file_name original_file_name,
    original_file_content_nocomments original_file_content_nocomments,
    original_class_file_el original_class_file_el,
    extras_src_file_name extras_src_file_name,
    has_copy_constructor has_copy_constructor,
    construct_assignment_operator construct_assignment_operator
)
```


### function generateFactoryFunctions

```
def generateFactoryFunctions(
    class_el class_el,
    class_name class_name,
    is_template is_template
)
```


### function generateWrapperHeader

```
def generateWrapperHeader(
    class_el class_el,
    class_name class_name,
    abstr_class_name abstr_class_name,
    namespaces namespaces,
    short_abstr_class_fname short_abstr_class_fname,
    construct_assignment_operator construct_assignment_operator,
    has_copy_constructor has_copy_constructor,
    copy_constructor_id copy_constructor_id
)
```


### function constrWrapperUtils

```
def constrWrapperUtils(
    class_name class_name
)
```


### function addAbstractTypedefs

```
def addAbstractTypedefs(
    abstr_class_name abstr_class_name,
    namespaces namespaces
)
```


### function addWrapperTypedefs

```
def addWrapperTypedefs(
    class_name class_name,
    namespaces namespaces
)
```



## Attributes Documentation

### variable template_done

```
list template_done =  [];
```


### variable templ_spec_done

```
list templ_spec_done =  [];
```


### variable added_parent

```
list added_parent =  [];
```


### variable includes

```
includes =  OrderedDict();
```





-------------------------------

Updated on 2022-07-20 at 17:18:42 +0000