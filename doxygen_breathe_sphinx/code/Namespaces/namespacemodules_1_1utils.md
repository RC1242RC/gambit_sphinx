---
title: 'namespace modules::utils'

description: "[No description available]"

---






[No description available]

## Functions

|                | Name           |
| -------------- | -------------- |
| def | **[isComplete](/documentation/code/namespaces/namespacemodules_1_1utils/#function-iscomplete)**(class_el class_el) |
| def | **[isLoadable](/documentation/code/namespaces/namespacemodules_1_1utils/#function-isloadable)**(class_el class_el, print_warning print_warning =False, check_pure_virtual_members check_pure_virtual_members =True) |
| def | **[isFundamental](/documentation/code/namespaces/namespacemodules_1_1utils/#function-isfundamental)**(el el) |
| def | **[isKnownClass](/documentation/code/namespaces/namespacemodules_1_1utils/#function-isknownclass)**(el el, class_name class_name =None) |
| def | **[isTemplateClass](/documentation/code/namespaces/namespacemodules_1_1utils/#function-istemplateclass)**(class_el class_el) |
| def | **[isTemplateFunction](/documentation/code/namespaces/namespacemodules_1_1utils/#function-istemplatefunction)**(func_el func_el) |
| def | **[isEnumeration](/documentation/code/namespaces/namespacemodules_1_1utils/#function-isenumeration)**(el el) |
| def | **[isNative](/documentation/code/namespaces/namespacemodules_1_1utils/#function-isnative)**(el el) |
| def | **[isStdType](/documentation/code/namespaces/namespacemodules_1_1utils/#function-isstdtype)**(el el, class_name class_name =None) |
| def | **[isConstFunction](/documentation/code/namespaces/namespacemodules_1_1utils/#function-isconstfunction)**(func_el func_el) |
| def | **[getTemplateBracket](/documentation/code/namespaces/namespacemodules_1_1utils/#function-gettemplatebracket)**(el el) |
| def | **[getSpecTemplateTypes](/documentation/code/namespaces/namespacemodules_1_1utils/#function-getspectemplatetypes)**(input_type input_type, byname byname =False) |
| def | **[unpackAllSpecTemplateTypes](/documentation/code/namespaces/namespacemodules_1_1utils/#function-unpackallspectemplatetypes)**(input_bracket input_bracket, result_list result_list) |
| def | **[getAllTemplateTypes](/documentation/code/namespaces/namespacemodules_1_1utils/#function-getalltemplatetypes)**(type_name type_name) |
| def | **[getBasicTypeName](/documentation/code/namespaces/namespacemodules_1_1utils/#function-getbasictypename)**(type_name type_name) |
| def | **[removeComments](/documentation/code/namespaces/namespacemodules_1_1utils/#function-removecomments)**(content content, insert_blanks insert_blanks =False) |
| def | **[findType](/documentation/code/namespaces/namespacemodules_1_1utils/#function-findtype)**(el_input el_input) |
| def | **[findNewLinePos](/documentation/code/namespaces/namespacemodules_1_1utils/#function-findnewlinepos)**(content content, line_number line_number) |
| def | **[getBracketPositions](/documentation/code/namespaces/namespacemodules_1_1utils/#function-getbracketpositions)**(content content, delims delims =['{', '}'] ) |
| def | **[addIndentation](/documentation/code/namespaces/namespacemodules_1_1utils/#function-addindentation)**(content content, indent indent) |
| def | **[getNamespaces](/documentation/code/namespaces/namespacemodules_1_1utils/#function-getnamespaces)**(xml_el xml_el, include_self include_self =False, xml_file_name xml_file_name ='') |
| def | **[removeTemplateBracket](/documentation/code/namespaces/namespacemodules_1_1utils/#function-removetemplatebracket)**(type_name type_name, return_bracket return_bracket =False) |
| def | **[removeNamespace](/documentation/code/namespaces/namespacemodules_1_1utils/#function-removenamespace)**(type_name type_name, return_namespace return_namespace =False) |
| def | **[removeArgumentBracket](/documentation/code/namespaces/namespacemodules_1_1utils/#function-removeargumentbracket)**(func_signature func_signature, return_args_bracket return_args_bracket =False) |
| def | **[isAcceptedType](/documentation/code/namespaces/namespacemodules_1_1utils/#function-isacceptedtype)**(input_el input_el) |
| def | **[isLoadedClass](/documentation/code/namespaces/namespacemodules_1_1utils/#function-isloadedclass)**(input_type input_type, byname byname =False, class_name class_name =None) |
| def | **[isParentOfLoadedType](/documentation/code/namespaces/namespacemodules_1_1utils/#function-isparentofloadedtype)**(input_el input_el) |
| def | **[constrAbsForwardDeclHeader](/documentation/code/namespaces/namespacemodules_1_1utils/#function-constrabsforwarddeclheader)**(file_output_path file_output_path) |
| def | **[constrWrpForwardDeclHeader](/documentation/code/namespaces/namespacemodules_1_1utils/#function-constrwrpforwarddeclheader)**(file_output_path file_output_path) |
| def | **[getParentClasses](/documentation/code/namespaces/namespacemodules_1_1utils/#function-getparentclasses)**(class_el class_el, only_native_classes only_native_classes =False, only_loaded_classes only_loaded_classes =False) |
| def | **[getAllParentClasses](/documentation/code/namespaces/namespacemodules_1_1utils/#function-getallparentclasses)**(class_el class_el, only_native_classes only_native_classes =True, only_loaded_classes only_loaded_classes =False, return_dicts return_dicts =False, reverse_order reverse_order =False) |
| def | **[getAllTypesInClass](/documentation/code/namespaces/namespacemodules_1_1utils/#function-getalltypesinclass)**(class_el class_el, include_parents include_parents =False) |
| def | **[getMemberElements](/documentation/code/namespaces/namespacemodules_1_1utils/#function-getmemberelements)**(el el, include_artificial include_artificial =False) |
| def | **[getMemberFunctions](/documentation/code/namespaces/namespacemodules_1_1utils/#function-getmemberfunctions)**(class_el class_el, include_artificial include_artificial =False, include_inherited include_inherited =False, only_accepted only_accepted =True, limit_pointerness limit_pointerness =True, include_operators include_operators =False) |
| def | **[getAllTypesInFunction](/documentation/code/namespaces/namespacemodules_1_1utils/#function-getalltypesinfunction)**(func_el func_el) |
| def | **[constrNamespace](/documentation/code/namespaces/namespacemodules_1_1utils/#function-constrnamespace)**(namespaces namespaces, open_or_close open_or_close, indent indent =cfg.indent) |
| def | **[pointerAndRefCheck](/documentation/code/namespaces/namespacemodules_1_1utils/#function-pointerandrefcheck)**(input_type input_type, byname byname =False) |
| def | **[addIncludeGuard](/documentation/code/namespaces/namespacemodules_1_1utils/#function-addincludeguard)**(code code, file_name file_name, prefix prefix ='', suffix suffix ='', uppercase uppercase =False) |
| def | **[identifyIncludedHeaders](/documentation/code/namespaces/namespacemodules_1_1utils/#function-identifyincludedheaders)**(content content, only_native only_native =True) |
| def | **[isHeader](/documentation/code/namespaces/namespacemodules_1_1utils/#function-isheader)**(file_el file_el) |
| def | **[getIncludeStatements](/documentation/code/namespaces/namespacemodules_1_1utils/#function-getincludestatements)**(input_el input_el, convert_loaded_to convert_loaded_to ='none', exclude_types exclude_types =[], input_element input_element ='class', forward_declared forward_declared ='exclude', use_full_path use_full_path =False, include_parents include_parents =False) |
| def | **[getOriginalHeaderPath](/documentation/code/namespaces/namespacemodules_1_1utils/#function-getoriginalheaderpath)**(el el, full_path full_path =False) |
| def | **[shortenHeaderPath](/documentation/code/namespaces/namespacemodules_1_1utils/#function-shortenheaderpath)**(full_path full_path) |
| def | **[constrNamespaceFromTags](/documentation/code/namespaces/namespacemodules_1_1utils/#function-constrnamespacefromtags)**(content content, new_namespace new_namespace, open_tag open_tag, close_tag close_tag) |
| def | **[replaceCodeTags](/documentation/code/namespaces/namespacemodules_1_1utils/#function-replacecodetags)**(input input, file_input file_input =False, write_file write_file =False) |
| def | **[removeCodeTags](/documentation/code/namespaces/namespacemodules_1_1utils/#function-removecodetags)**(content content, remove_tags_list remove_tags_list) |
| def | **[constrLoadedTypesHeaderContent](/documentation/code/namespaces/namespacemodules_1_1utils/#function-constrloadedtypesheadercontent)**() |
| def | **[constrEnumDeclHeader](/documentation/code/namespaces/namespacemodules_1_1utils/#function-constrenumdeclheader)**(enum_el_list enum_el_list, file_output_path file_output_path) |
| def | **[castxmlRunner](/documentation/code/namespaces/namespacemodules_1_1utils/#function-castxmlrunner)**(input_file_path input_file_path, include_paths_list include_paths_list, xml_output_path xml_output_path, use_castxml_path use_castxml_path =None) |
| def | **[pathSplitAll](/documentation/code/namespaces/namespacemodules_1_1utils/#function-pathsplitall)**(path path) |
| def | **[fillAcceptedTypesList](/documentation/code/namespaces/namespacemodules_1_1utils/#function-fillacceptedtypeslist)**() |
| def | **[isProblematicType](/documentation/code/namespaces/namespacemodules_1_1utils/#function-isproblematictype)**(el el) |
| def | **[addParentClasses](/documentation/code/namespaces/namespacemodules_1_1utils/#function-addparentclasses)**() |
| def | **[fillParentsOfLoadedClassesList](/documentation/code/namespaces/namespacemodules_1_1utils/#function-fillparentsofloadedclasseslist)**() |
| def | **[xmlFilesToDicts](/documentation/code/namespaces/namespacemodules_1_1utils/#function-xmlfilestodicts)**(xml_files xml_files) |
| def | **[clearGlobalXMLdicts](/documentation/code/namespaces/namespacemodules_1_1utils/#function-clearglobalxmldicts)**() |
| def | **[initGlobalXMLdicts](/documentation/code/namespaces/namespacemodules_1_1utils/#function-initglobalxmldicts)**(xml_path xml_path, id_and_name_only id_and_name_only =False) |
| def | **[identifyStdIncludePaths](/documentation/code/namespaces/namespacemodules_1_1utils/#function-identifystdincludepaths)**() |
| def | **[isInList](/documentation/code/namespaces/namespacemodules_1_1utils/#function-isinlist)**(search_entry search_entry, search_list search_list, return_index return_index =True, ignore_whitespace ignore_whitespace =True) |
| def | **[modifyText](/documentation/code/namespaces/namespacemodules_1_1utils/#function-modifytext)**(msg msg, mod mod) |
| def | **[orderIncludeStatements](/documentation/code/namespaces/namespacemodules_1_1utils/#function-orderincludestatements)**(include_statements include_statements) |
| def | **[removeComments](/documentation/code/namespaces/namespacemodules_1_1utils/#function-removecomments)**(code_lines code_lines) |
| def | **[removeBlankLines](/documentation/code/namespaces/namespacemodules_1_1utils/#function-removeblanklines)**(code_lines code_lines) |
| def | **[removeLeadingTrailingBlanks](/documentation/code/namespaces/namespacemodules_1_1utils/#function-removeleadingtrailingblanks)**(code_lines code_lines) |
| def | **[removeStatementLabels](/documentation/code/namespaces/namespacemodules_1_1utils/#function-removestatementlabels)**(code_lines code_lines) |
| def | **[removeKeywords](/documentation/code/namespaces/namespacemodules_1_1utils/#function-removekeywords)**(code_lines code_lines) |
| def | **[allSingleSpace](/documentation/code/namespaces/namespacemodules_1_1utils/#function-allsinglespace)**(code_lines code_lines) |
| def | **[joinContinuedLines](/documentation/code/namespaces/namespacemodules_1_1utils/#function-joincontinuedlines)**(code_lines code_lines) |
| def | **[getCodeParts](/documentation/code/namespaces/namespacemodules_1_1utils/#function-getcodeparts)**(code_lines code_lines, prepend_module_name prepend_module_name =False) |
| def | **[getCodePartName](/documentation/code/namespaces/namespacemodules_1_1utils/#function-getcodepartname)**(code_line code_line, keyword keyword) |
| def | **[getImplicitDefs](/documentation/code/namespaces/namespacemodules_1_1utils/#function-getimplicitdefs)**(code_lines code_lines) |
| def | **[getParameterDefs](/documentation/code/namespaces/namespacemodules_1_1utils/#function-getparameterdefs)**(code_lines code_lines) |
| def | **[getCommonBlockDicts](/documentation/code/namespaces/namespacemodules_1_1utils/#function-getcommonblockdicts)**(code_lines code_lines) |
| def | **[isVariableDecl](/documentation/code/namespaces/namespacemodules_1_1utils/#function-isvariabledecl)**(line_in line_in, return_type return_type =False) |
| def | **[isDimensionStatement](/documentation/code/namespaces/namespacemodules_1_1utils/#function-isdimensionstatement)**(line_in line_in) |
| def | **[getArrayIndicesTuples](/documentation/code/namespaces/namespacemodules_1_1utils/#function-getarrayindicestuples)**(dimensions_str dimensions_str, parameter_defs parameter_defs) |
| def | **[getVariablesDict](/documentation/code/namespaces/namespacemodules_1_1utils/#function-getvariablesdict)**(code_lines code_lines, get_variables get_variables) |
| def | **[parseVariableSequence](/documentation/code/namespaces/namespacemodules_1_1utils/#function-parsevariablesequence)**(var_seq_str var_seq_str) |
| def | **[getFunctionArgumentNames](/documentation/code/namespaces/namespacemodules_1_1utils/#function-getfunctionargumentnames)**(code_line code_line) |
| def | **[getFunctionReturnType](/documentation/code/namespaces/namespacemodules_1_1utils/#function-getfunctionreturntype)**(code_lines code_lines) |
| def | **[generateTypeDeclCommonBlock](/documentation/code/namespaces/namespacemodules_1_1utils/#function-generatetypedeclcommonblock)**(cb_dict cb_dict, var_info_dict var_info_dict, parameter_defs parameter_defs) |
| def | **[generateFrontendCommonBlock](/documentation/code/namespaces/namespacemodules_1_1utils/#function-generatefrontendcommonblock)**(cb_dict cb_dict) |
| def | **[generateFrontendFunction](/documentation/code/namespaces/namespacemodules_1_1utils/#function-generatefrontendfunction)**(f_dict f_dict, parameter_defs parameter_defs) |
| def | **[getMangledSymbolName](/documentation/code/namespaces/namespacemodules_1_1utils/#function-getmangledsymbolname)**(identifier identifier, module module ='') |
| def | **[getCTypeName](/documentation/code/namespaces/namespacemodules_1_1utils/#function-getctypename)**(var_dict var_dict, parameter_defs parameter_defs) |
| def | **[addNamespace](/documentation/code/namespaces/namespacemodules_1_1utils/#function-addnamespace)**(code code, namespace_name namespace_name, indent indent =4) |

## Attributes

|                | Name           |
| -------------- | -------------- |
| | **[cfg](/documentation/code/namespaces/namespacemodules_1_1utils/#variable-cfg)**  |


## Functions Documentation

### function isComplete

```
def isComplete(
    class_el class_el
)
```


### function isLoadable

```
def isLoadable(
    class_el class_el,
    print_warning print_warning =False,
    check_pure_virtual_members check_pure_virtual_members =True
)
```


### function isFundamental

```
def isFundamental(
    el el
)
```


### function isKnownClass

```
def isKnownClass(
    el el,
    class_name class_name =None
)
```


### function isTemplateClass

```
def isTemplateClass(
    class_el class_el
)
```


### function isTemplateFunction

```
def isTemplateFunction(
    func_el func_el
)
```


### function isEnumeration

```
def isEnumeration(
    el el
)
```


### function isNative

```
def isNative(
    el el
)
```


### function isStdType

```
def isStdType(
    el el,
    class_name class_name =None
)
```


### function isConstFunction

```
def isConstFunction(
    func_el func_el
)
```


### function getTemplateBracket

```
def getTemplateBracket(
    el el
)
```


### function getSpecTemplateTypes

```
def getSpecTemplateTypes(
    input_type input_type,
    byname byname =False
)
```


### function unpackAllSpecTemplateTypes

```
def unpackAllSpecTemplateTypes(
    input_bracket input_bracket,
    result_list result_list
)
```


### function getAllTemplateTypes

```
def getAllTemplateTypes(
    type_name type_name
)
```


### function getBasicTypeName

```
def getBasicTypeName(
    type_name type_name
)
```


### function removeComments

```
def removeComments(
    content content,
    insert_blanks insert_blanks =False
)
```


### function findType

```
def findType(
    el_input el_input
)
```


### function findNewLinePos

```
def findNewLinePos(
    content content,
    line_number line_number
)
```


### function getBracketPositions

```
def getBracketPositions(
    content content,
    delims delims =['{',
    '}'] 
)
```


### function addIndentation

```
def addIndentation(
    content content,
    indent indent
)
```


### function getNamespaces

```
def getNamespaces(
    xml_el xml_el,
    include_self include_self =False,
    xml_file_name xml_file_name =''
)
```


### function removeTemplateBracket

```
def removeTemplateBracket(
    type_name type_name,
    return_bracket return_bracket =False
)
```


### function removeNamespace

```
def removeNamespace(
    type_name type_name,
    return_namespace return_namespace =False
)
```


### function removeArgumentBracket

```
def removeArgumentBracket(
    func_signature func_signature,
    return_args_bracket return_args_bracket =False
)
```


### function isAcceptedType

```
def isAcceptedType(
    input_el input_el
)
```


### function isLoadedClass

```
def isLoadedClass(
    input_type input_type,
    byname byname =False,
    class_name class_name =None
)
```


### function isParentOfLoadedType

```
def isParentOfLoadedType(
    input_el input_el
)
```


### function constrAbsForwardDeclHeader

```
def constrAbsForwardDeclHeader(
    file_output_path file_output_path
)
```


### function constrWrpForwardDeclHeader

```
def constrWrpForwardDeclHeader(
    file_output_path file_output_path
)
```


### function getParentClasses

```
def getParentClasses(
    class_el class_el,
    only_native_classes only_native_classes =False,
    only_loaded_classes only_loaded_classes =False
)
```


### function getAllParentClasses

```
def getAllParentClasses(
    class_el class_el,
    only_native_classes only_native_classes =True,
    only_loaded_classes only_loaded_classes =False,
    return_dicts return_dicts =False,
    reverse_order reverse_order =False
)
```


### function getAllTypesInClass

```
def getAllTypesInClass(
    class_el class_el,
    include_parents include_parents =False
)
```


### function getMemberElements

```
def getMemberElements(
    el el,
    include_artificial include_artificial =False
)
```


### function getMemberFunctions

```
def getMemberFunctions(
    class_el class_el,
    include_artificial include_artificial =False,
    include_inherited include_inherited =False,
    only_accepted only_accepted =True,
    limit_pointerness limit_pointerness =True,
    include_operators include_operators =False
)
```


### function getAllTypesInFunction

```
def getAllTypesInFunction(
    func_el func_el
)
```


### function constrNamespace

```
def constrNamespace(
    namespaces namespaces,
    open_or_close open_or_close,
    indent indent =cfg.indent
)
```


### function pointerAndRefCheck

```
def pointerAndRefCheck(
    input_type input_type,
    byname byname =False
)
```


### function addIncludeGuard

```
def addIncludeGuard(
    code code,
    file_name file_name,
    prefix prefix ='',
    suffix suffix ='',
    uppercase uppercase =False
)
```


### function identifyIncludedHeaders

```
def identifyIncludedHeaders(
    content content,
    only_native only_native =True
)
```


### function isHeader

```
def isHeader(
    file_el file_el
)
```


### function getIncludeStatements

```
def getIncludeStatements(
    input_el input_el,
    convert_loaded_to convert_loaded_to ='none',
    exclude_types exclude_types =[],
    input_element input_element ='class',
    forward_declared forward_declared ='exclude',
    use_full_path use_full_path =False,
    include_parents include_parents =False
)
```


### function getOriginalHeaderPath

```
def getOriginalHeaderPath(
    el el,
    full_path full_path =False
)
```


### function shortenHeaderPath

```
def shortenHeaderPath(
    full_path full_path
)
```


### function constrNamespaceFromTags

```
def constrNamespaceFromTags(
    content content,
    new_namespace new_namespace,
    open_tag open_tag,
    close_tag close_tag
)
```


### function replaceCodeTags

```
def replaceCodeTags(
    input input,
    file_input file_input =False,
    write_file write_file =False
)
```


### function removeCodeTags

```
def removeCodeTags(
    content content,
    remove_tags_list remove_tags_list
)
```


### function constrLoadedTypesHeaderContent

```
def constrLoadedTypesHeaderContent()
```


### function constrEnumDeclHeader

```
def constrEnumDeclHeader(
    enum_el_list enum_el_list,
    file_output_path file_output_path
)
```


### function castxmlRunner

```
def castxmlRunner(
    input_file_path input_file_path,
    include_paths_list include_paths_list,
    xml_output_path xml_output_path,
    use_castxml_path use_castxml_path =None
)
```


### function pathSplitAll

```
def pathSplitAll(
    path path
)
```


### function fillAcceptedTypesList

```
def fillAcceptedTypesList()
```


### function isProblematicType

```
def isProblematicType(
    el el
)
```


### function addParentClasses

```
def addParentClasses()
```


### function fillParentsOfLoadedClassesList

```
def fillParentsOfLoadedClassesList()
```


### function xmlFilesToDicts

```
def xmlFilesToDicts(
    xml_files xml_files
)
```


### function clearGlobalXMLdicts

```
def clearGlobalXMLdicts()
```


### function initGlobalXMLdicts

```
def initGlobalXMLdicts(
    xml_path xml_path,
    id_and_name_only id_and_name_only =False
)
```


### function identifyStdIncludePaths

```
def identifyStdIncludePaths()
```


### function isInList

```
def isInList(
    search_entry search_entry,
    search_list search_list,
    return_index return_index =True,
    ignore_whitespace ignore_whitespace =True
)
```


### function modifyText

```
def modifyText(
    msg msg,
    mod mod
)
```


### function orderIncludeStatements

```
def orderIncludeStatements(
    include_statements include_statements
)
```


### function removeComments

```
def removeComments(
    code_lines code_lines
)
```


### function removeBlankLines

```
def removeBlankLines(
    code_lines code_lines
)
```


### function removeLeadingTrailingBlanks

```
def removeLeadingTrailingBlanks(
    code_lines code_lines
)
```


### function removeStatementLabels

```
def removeStatementLabels(
    code_lines code_lines
)
```


### function removeKeywords

```
def removeKeywords(
    code_lines code_lines
)
```


### function allSingleSpace

```
def allSingleSpace(
    code_lines code_lines
)
```


### function joinContinuedLines

```
def joinContinuedLines(
    code_lines code_lines
)
```


### function getCodeParts

```
def getCodeParts(
    code_lines code_lines,
    prepend_module_name prepend_module_name =False
)
```


### function getCodePartName

```
def getCodePartName(
    code_line code_line,
    keyword keyword
)
```


### function getImplicitDefs

```
def getImplicitDefs(
    code_lines code_lines
)
```


### function getParameterDefs

```
def getParameterDefs(
    code_lines code_lines
)
```


### function getCommonBlockDicts

```
def getCommonBlockDicts(
    code_lines code_lines
)
```


### function isVariableDecl

```
def isVariableDecl(
    line_in line_in,
    return_type return_type =False
)
```


### function isDimensionStatement

```
def isDimensionStatement(
    line_in line_in
)
```


### function getArrayIndicesTuples

```
def getArrayIndicesTuples(
    dimensions_str dimensions_str,
    parameter_defs parameter_defs
)
```


### function getVariablesDict

```
def getVariablesDict(
    code_lines code_lines,
    get_variables get_variables
)
```


### function parseVariableSequence

```
def parseVariableSequence(
    var_seq_str var_seq_str
)
```


### function getFunctionArgumentNames

```
def getFunctionArgumentNames(
    code_line code_line
)
```


### function getFunctionReturnType

```
def getFunctionReturnType(
    code_lines code_lines
)
```


### function generateTypeDeclCommonBlock

```
def generateTypeDeclCommonBlock(
    cb_dict cb_dict,
    var_info_dict var_info_dict,
    parameter_defs parameter_defs
)
```


### function generateFrontendCommonBlock

```
def generateFrontendCommonBlock(
    cb_dict cb_dict
)
```


### function generateFrontendFunction

```
def generateFrontendFunction(
    f_dict f_dict,
    parameter_defs parameter_defs
)
```


### function getMangledSymbolName

```
def getMangledSymbolName(
    identifier identifier,
    module module =''
)
```


### function getCTypeName

```
def getCTypeName(
    var_dict var_dict,
    parameter_defs parameter_defs
)
```


### function addNamespace

```
def addNamespace(
    code code,
    namespace_name namespace_name,
    indent indent =4
)
```



## Attributes Documentation

### variable cfg

```
cfg =  importlib.import_module("configs." + modules.active_cfg.module_name);
```





-------------------------------

Updated on 2022-07-20 at 17:18:42 +0000