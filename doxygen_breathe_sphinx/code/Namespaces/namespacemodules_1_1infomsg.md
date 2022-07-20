---
title: 'namespace modules::infomsg'

description: "[No description available]"

---






[No description available]

## Classes

|                | Name           |
| -------------- | -------------- |
| class | **[modules::infomsg::ClassAlreadyDone](/documentation/code/classes/classmodules_1_1infomsg_1_1classalreadydone/)**  |
| class | **[modules::infomsg::ClassNotLoadable](/documentation/code/classes/classmodules_1_1infomsg_1_1classnotloadable/)**  |
| class | **[modules::infomsg::FunctionAlreadyDone](/documentation/code/classes/classmodules_1_1infomsg_1_1functionalreadydone/)**  |
| class | **[modules::infomsg::IgnoredFunction](/documentation/code/classes/classmodules_1_1infomsg_1_1ignoredfunction/)**  |
| class | **[modules::infomsg::IgnoredMemberFunction](/documentation/code/classes/classmodules_1_1infomsg_1_1ignoredmemberfunction/)**  |
| class | **[modules::infomsg::IgnoredMemberVariable](/documentation/code/classes/classmodules_1_1infomsg_1_1ignoredmembervariable/)**  |
| class | **[modules::infomsg::InfoMessage](/documentation/code/classes/classmodules_1_1infomsg_1_1infomessage/)**  |
| class | **[modules::infomsg::NoFactoryFunctions](/documentation/code/classes/classmodules_1_1infomsg_1_1nofactoryfunctions/)**  |
| class | **[modules::infomsg::NoIncludeStatementGenerated](/documentation/code/classes/classmodules_1_1infomsg_1_1noincludestatementgenerated/)**  |
| class | **[modules::infomsg::NoLoadedTypesEntry](/documentation/code/classes/classmodules_1_1infomsg_1_1noloadedtypesentry/)**  |
| class | **[modules::infomsg::NoPointerCopyAndAssignmentFunctions](/documentation/code/classes/classmodules_1_1infomsg_1_1nopointercopyandassignmentfunctions/)**  |
| class | **[modules::infomsg::ParentClassIgnored](/documentation/code/classes/classmodules_1_1infomsg_1_1parentclassignored/)**  |
| class | **[modules::infomsg::TypeNotAccepted](/documentation/code/classes/classmodules_1_1infomsg_1_1typenotaccepted/)**  |

## Functions

|                | Name           |
| -------------- | -------------- |
| def | **[clearInfoMessages](/documentation/code/namespaces/namespacemodules_1_1infomsg/#function-clearinfomessages)**() |

## Attributes

|                | Name           |
| -------------- | -------------- |
| | **[active_msg_types](/documentation/code/namespaces/namespacemodules_1_1infomsg/#variable-active-msg-types)**  |


## Functions Documentation

### function clearInfoMessages

```
def clearInfoMessages()
```




```
Loop through all active message types and clear the class-wide
set of tags done. This will allow the info message to be printed
again for the given tag.
```



## Attributes Documentation

### variable active_msg_types

```
active_msg_types =  set();
```





-------------------------------

Updated on 2022-07-20 at 17:18:42 +0000