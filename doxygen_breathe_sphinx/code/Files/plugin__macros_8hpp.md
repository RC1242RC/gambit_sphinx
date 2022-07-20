---
title: 'file ScannerBit/plugin_macros.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[export_abstract](/documentation/code/files/plugin__macros_8hpp/#define-export-abstract)**(name, ...)  |
|  | **[export_object](/documentation/code/files/plugin__macros_8hpp/#define-export-object)**(name, ...) <br>Makes the object "name" available to the plugin interface.  |
|  | **[plugin_main](/documentation/code/files/plugin__macros_8hpp/#define-plugin-main)**(...) <br>Declaration of the main function which will be ran by the interface.  |
|  | **[gambit_plugin](/documentation/code/files/plugin__macros_8hpp/#define-gambit-plugin)**(...) <br>Generic plugin declaration of the from [gambit_plugin(name, type, version)]() |
|  | **[plugin_constructor](/documentation/code/files/plugin__macros_8hpp/#define-plugin-constructor)** <br>Runs when the plugin is loaded.  |
|  | **[plugin_deconstructor](/documentation/code/files/plugin__macros_8hpp/#define-plugin-deconstructor)** <br>Runs when the plugin is destroyed.  |
|  | **[__PLUGIN_version](/documentation/code/files/plugin__macros_8hpp/#define---plugin-version)**(...) <br>Sets the version number.  |
|  | **[__PLUGIN_no_version](/documentation/code/files/plugin__macros_8hpp/#define---plugin-no-version)** <br>Set version number to 0.0.0.  |
|  | **[reqd_inifile_entries](/documentation/code/files/plugin__macros_8hpp/#define-reqd-inifile-entries)**(...) <br>Tells ScannerBit that these tags are required.  |
|  | **[reqd_libraries](/documentation/code/files/plugin__macros_8hpp/#define-reqd-libraries)**(...) <br>Tells ScannerBit that these libraries are requested.  |
|  | **[reqd_headers](/documentation/code/files/plugin__macros_8hpp/#define-reqd-headers)**(...) <br>Tells ScannerBit that these include files must exist.  |
|  | **[set_flag](/documentation/code/files/plugin__macros_8hpp/#define-set-flag)**(...) <br>Tells ScannerBit to set a flag.  |
|  | **[cxx_flags](/documentation/code/files/plugin__macros_8hpp/#define-cxx-flags)**(...)  |
|  | **[REQD_INIFILE_ENTRIES](/documentation/code/files/plugin__macros_8hpp/#define-reqd-inifile-entries)**(...)  |
|  | **[REQD_LIRBARIES](/documentation/code/files/plugin__macros_8hpp/#define-reqd-lirbaries)**(...)  |
|  | **[REQD_HEADERS](/documentation/code/files/plugin__macros_8hpp/#define-reqd-headers)**(...)  |
|  | **[SET_FLAG](/documentation/code/files/plugin__macros_8hpp/#define-set-flag)**(...)  |
|  | **[CXX_FLAGS](/documentation/code/files/plugin__macros_8hpp/#define-cxx-flags)**(...)  |
|  | **[_ARG_N_](/documentation/code/files/plugin__macros_8hpp/#define--arg-n-)**(_1_, _2_, _3_, _4_, ret, ...)  |
|  | **[__ARG_N__](/documentation/code/files/plugin__macros_8hpp/#define---arg-n--)**(...)  |
|  | **[__COMBINE__](/documentation/code/files/plugin__macros_8hpp/#define---combine--)**(a, b)  |
|  | **[_COMBINE_](/documentation/code/files/plugin__macros_8hpp/#define--combine-)**(a, b)  |
|  | **[_STR_](/documentation/code/files/plugin__macros_8hpp/#define--str-)**(a)  |
|  | **[__STR__](/documentation/code/files/plugin__macros_8hpp/#define---str--)**(a)  |
|  | **[__PLUGIN_VERSION___4](/documentation/code/files/plugin__macros_8hpp/#define---plugin-version---4)**(major, minor, patch, release)  |
|  | **[__PLUGIN_VERSION___3](/documentation/code/files/plugin__macros_8hpp/#define---plugin-version---3)**(major, minor, patch)  |
|  | **[__PLUGIN_VERSION___2](/documentation/code/files/plugin__macros_8hpp/#define---plugin-version---2)**(major, minor)  |
|  | **[__PLUGIN_VERSION___1](/documentation/code/files/plugin__macros_8hpp/#define---plugin-version---1)**(major)  |
|  | **[__PLUGIN_VERSION___0](/documentation/code/files/plugin__macros_8hpp/#define---plugin-version---0)**()  |
|  | **[__PLUGIN_VERSION](/documentation/code/files/plugin__macros_8hpp/#define---plugin-version)**(...)  |
|  | **[EXPORT_ABSTRACT](/documentation/code/files/plugin__macros_8hpp/#define-export-abstract)**(name, ...)  |
|  | **[EXPORT_OBJECT](/documentation/code/files/plugin__macros_8hpp/#define-export-object)**(name, ...)  |
|  | **[PLUGIN_CONSTRUCTOR](/documentation/code/files/plugin__macros_8hpp/#define-plugin-constructor)**  |
|  | **[PLUGIN_DECONSTRUCTOR](/documentation/code/files/plugin__macros_8hpp/#define-plugin-deconstructor)**  |
|  | **[__PLUGIN_MAIN_RET_VAL__](/documentation/code/files/plugin__macros_8hpp/#define---plugin-main-ret-val--)**(...)  |
|  | **[PLUGIN_MAIN](/documentation/code/files/plugin__macros_8hpp/#define-plugin-main)**(...)  |
|  | **[__GAMBIT_PLUGIN__](/documentation/code/files/plugin__macros_8hpp/#define---gambit-plugin--)**(plug_name, plug_type, plug_version)  |
|  | **[_GAMBIT_PLUGIN_](/documentation/code/files/plugin__macros_8hpp/#define--gambit-plugin-)**(plug_name, plug_type, plug_version)  |
|  | **[GAMBIT_PLUGIN_1](/documentation/code/files/plugin__macros_8hpp/#define-gambit-plugin-1)**(plugin_name)  |
|  | **[GAMBIT_PLUGIN_2](/documentation/code/files/plugin__macros_8hpp/#define-gambit-plugin-2)**(plugin_name, plug_type)  |
|  | **[GAMBIT_PLUGIN_3](/documentation/code/files/plugin__macros_8hpp/#define-gambit-plugin-3)**(plug_name, plug_type, plug_version)  |
|  | **[GAMBIT_PLUGIN](/documentation/code/files/plugin__macros_8hpp/#define-gambit-plugin)**(...)  |
|  | **[___GAMBIT_PLUGIN_NAMESPACE___](/documentation/code/files/plugin__macros_8hpp/#define----gambit-plugin-namespace---)**(plug_name, plug_type, plug_version)  |
|  | **[_GAMBIT_PLUGIN_NAMESPACE_](/documentation/code/files/plugin__macros_8hpp/#define--gambit-plugin-namespace-)**(plug_name, plug_type, plug_version)  |
|  | **[__GAMBIT_PLUGIN_NAMESPACE___1](/documentation/code/files/plugin__macros_8hpp/#define---gambit-plugin-namespace---1)**(plug_name)  |
|  | **[__GAMBIT_PLUGIN_NAMESPACE___2](/documentation/code/files/plugin__macros_8hpp/#define---gambit-plugin-namespace---2)**(plug_name, plug_type)  |
|  | **[__GAMBIT_PLUGIN_NAMESPACE___3](/documentation/code/files/plugin__macros_8hpp/#define---gambit-plugin-namespace---3)**(plug_name, plug_type, plug_version)  |
|  | **[__GAMBIT_PLUGIN_NAMESPACE__](/documentation/code/files/plugin__macros_8hpp/#define---gambit-plugin-namespace--)**(...)  |
|  | **[GAMBIT_PLUGIN_INITIALIZE](/documentation/code/files/plugin__macros_8hpp/#define-gambit-plugin-initialize)**(setup, ...)  |

## Detailed Description


declaration for gambit module



------------------

Authors (add name and date if you modify): 




## Macros Documentation

### define export_abstract

```
#define export_abstract(
    name,
    ...
)
EXPORT_ABSTRACT(name, __VA_ARGS__)
```


### define export_object

```
#define export_object(
    name,
    ...
)
EXPORT_OBJECT(name, __VA_ARGS__)
```

Makes the object "name" available to the plugin interface. 

### define plugin_main

```
#define plugin_main(
    ...
)
PLUGIN_MAIN( __VA_ARGS__ )
```

Declaration of the main function which will be ran by the interface. 

### define gambit_plugin

```
#define gambit_plugin(
    ...
)
GAMBIT_PLUGIN( __VA_ARGS__ )
```

Generic plugin declaration of the from [gambit_plugin(name, type, version)]()

### define plugin_constructor

```
#define plugin_constructor PLUGIN_CONSTRUCTOR
```

Runs when the plugin is loaded. 

### define plugin_deconstructor

```
#define plugin_deconstructor PLUGIN_DECONSTRUCTOR
```

Runs when the plugin is destroyed. 

### define __PLUGIN_version

```
#define __PLUGIN_version(
    ...
)
__PLUGIN_VERSION( __VA_ARGS__ )
```

Sets the version number. 

### define __PLUGIN_no_version

```
#define __PLUGIN_no_version __PLUGIN_VERSION()
```

Set version number to 0.0.0. 

### define reqd_inifile_entries

```
#define reqd_inifile_entries(
    ...
)
void reqd_inifile_entries()
```

Tells ScannerBit that these tags are required. 

### define reqd_libraries

```
#define reqd_libraries(
    ...
)
void reqd_libraries()
```

Tells ScannerBit that these libraries are requested. 

### define reqd_headers

```
#define reqd_headers(
    ...
)
void reqd_headers()
```

Tells ScannerBit that these include files must exist. 

### define set_flag

```
#define set_flag(
    ...
)
void set_flag()
```

Tells ScannerBit to set a flag. 

### define cxx_flags

```
#define cxx_flags(
    ...
)
void scc_flags()
```


### define REQD_INIFILE_ENTRIES

```
#define REQD_INIFILE_ENTRIES(
    ...
)

```


### define REQD_LIRBARIES

```
#define REQD_LIRBARIES(
    ...
)

```


### define REQD_HEADERS

```
#define REQD_HEADERS(
    ...
)

```


### define SET_FLAG

```
#define SET_FLAG(
    ...
)

```


### define CXX_FLAGS

```
#define CXX_FLAGS(
    ...
)

```


### define _ARG_N_

```
#define _ARG_N_(
    _1_,
    _2_,
    _3_,
    _4_,
    ret,
    ...
)
ret
```


### define __ARG_N__

```
#define __ARG_N__(
    ...
)
_ARG_N_(__VA_ARGS__ , 4, 3, 2, 1, 0)
```


### define __COMBINE__

```
#define __COMBINE__(
    a,
    b
)
_COMBINE_(a, b)
```


### define _COMBINE_

```
#define _COMBINE_(
    a,
    b
)
a ## b
```


### define _STR_

```
#define _STR_(
    a
)
#a
```


### define __STR__

```
#define __STR__(
    a
)
_STR_(a)
```


### define __PLUGIN_VERSION___4

```
#define __PLUGIN_VERSION___4(
    major,
    minor,
    patch,
    release
)
major ## _ ## minor ## _ ## patch ## _ ## release
```


### define __PLUGIN_VERSION___3

```
#define __PLUGIN_VERSION___3(
    major,
    minor,
    patch
)
__PLUGIN_VERSION___4(major, minor, patch, )
```


### define __PLUGIN_VERSION___2

```
#define __PLUGIN_VERSION___2(
    major,
    minor
)
__PLUGIN_VERSION___4(major, minor,,)
```


### define __PLUGIN_VERSION___1

```
#define __PLUGIN_VERSION___1(
    major
)
__PLUGIN_VERSION___4(major,,,)
```


### define __PLUGIN_VERSION___0

```
#define __PLUGIN_VERSION___0(
    
)
__PLUGIN_VERSION___(,,,)
```


### define __PLUGIN_VERSION

```
#define __PLUGIN_VERSION(
    ...
)
__COMBINE__(__PLUGIN_VERSION___,__ARG_N__(__VA_ARGS__))( __VA_ARGS__ )
```


### define EXPORT_ABSTRACT

```
#define EXPORT_ABSTRACT(
    name,
    ...
)

```


### define EXPORT_OBJECT

```
#define EXPORT_OBJECT(
    name,
    ...
)

```


### define PLUGIN_CONSTRUCTOR

```
#define PLUGIN_CONSTRUCTOR void PLUGIN_CONSTRUCTOR();                                                                              \
namespace __gambit_plugin_namespace__                                                                   \
{                                                                                                       \
    namespace                                                                                           \
    {                                                                                                   \
        template<>                                                                                      \
        class interface <void (int)>                                                                    \
        {                                                                                               \
        public:                                                                                         \
                                                                                                        \
            interface(pluginData &myData)                                                               \
            {                                                                                           \
                myData.inits.push_back(interface <void (int)>::init);                                   \
            }                                                                                           \
                                                                                                        \
            static void init(pluginData&)                                                               \
            {                                                                                           \
                PLUGIN_CONSTRUCTOR();                                                                   \
            }                                                                                           \
        };                                                                                              \
                                                                                                        \
        template <>                                                                                     \
        interface <void (int)> reg_init <void (int)>::reg(myData);                                      \
    }                                                                                                   \
}                                                                                                       \
void PLUGIN_CONSTRUCTOR()                                                                               \
```


### define PLUGIN_DECONSTRUCTOR

```
#define PLUGIN_DECONSTRUCTOR void PLUGIN_DECONSTRUCTOR();                                                                            \
namespace __gambit_plugin_namespace__                                                                   \
{                                                                                                       \
    namespace                                                                                           \
    {                                                                                                   \
        template<>                                                                                      \
        class interface <void (void)>                                                                   \
        {                                                                                               \
        public:                                                                                         \
                                                                                                        \
            interface(pluginData &myData)                                                               \
            {                                                                                           \
                myData.inits.push_back(interface <void (void)>::init);                                  \
            }                                                                                           \
                                                                                                        \
            static void init(pluginData &myData)                                                        \
            {                                                                                           \
                myData.deconstructor = PLUGIN_DECONSTRUCTOR;                                            \
            }                                                                                           \
        };                                                                                              \
                                                                                                        \
        template <>                                                                                     \
        interface <void (void)> reg_init <void (void)>::reg(myData);                                    \
    }                                                                                                   \
}                                                                                                       \
void PLUGIN_DECONSTRUCTOR()                                                                             \
```


### define __PLUGIN_MAIN_RET_VAL__

```
#define __PLUGIN_MAIN_RET_VAL__(
    ...
)
decltype(__plugin_main_ret_val__(typename Gambit::Scanner::func_ptr_type<void (__VA_ARGS__)>::type()))  \
```


### define PLUGIN_MAIN

```
#define PLUGIN_MAIN(
    ...
)
 __plugin_main_ret_val__(void (*)(__VA_ARGS__));                                                        \
__PLUGIN_MAIN_RET_VAL__(__VA_ARGS__) PLUGIN_MAIN (__VA_ARGS__);                                         \
namespace __gambit_plugin_namespace__                                                                   \
{                                                                                                       \
    namespace                                                                                           \
    {                                                                                                   \
        template<>                                                                                      \
        class interface <int (__VA_ARGS__)>                                                             \
        {                                                                                               \
        public:                                                                                         \
                                                                                                        \
            interface(pluginData &myData)                                                               \
            {                                                                                           \
                myData.inits.push_back(interface <int (__VA_ARGS__)>::init);                            \
            }                                                                                           \
                                                                                                        \
            static void init(pluginData &myData)                                                        \
            {                                                                                           \
                myData.plugin_mains[typeid(__PLUGIN_MAIN_RET_VAL__(__VA_ARGS__) (__VA_ARGS__))] =       \
                    Gambit::Scanner::Plugins::funcFactory                                               \
                            <__PLUGIN_MAIN_RET_VAL__(__VA_ARGS__) (__VA_ARGS__)>(PLUGIN_MAIN)();        \
            }                                                                                           \
        };                                                                                              \
                                                                                                        \
        template <>                                                                                     \
        interface <int (__VA_ARGS__)> reg_init <int (__VA_ARGS__)>::reg(myData);                        \
    }                                                                                                   \
}                                                                                                       \
__PLUGIN_MAIN_RET_VAL__(__VA_ARGS__) PLUGIN_MAIN (__VA_ARGS__)                                          \
```


### define __GAMBIT_PLUGIN__

```
#define __GAMBIT_PLUGIN__(
    plug_name,
    plug_type,
    plug_version
)

```


### define _GAMBIT_PLUGIN_

```
#define _GAMBIT_PLUGIN_(
    plug_name,
    plug_type,
    plug_version
)
__GAMBIT_PLUGIN__(plug_name, plug_type, plug_version)                                               \
```


### define GAMBIT_PLUGIN_1

```
#define GAMBIT_PLUGIN_1(
    plugin_name
)
_GAMBIT_PLUGIN_(plug_name,, __PLUGIN_no_version)                                                    \
```


### define GAMBIT_PLUGIN_2

```
#define GAMBIT_PLUGIN_2(
    plugin_name,
    plug_type
)
_GAMBIT_PLUGIN_(plug_name, plug_type, __PLUGIN__no_version)                                         \
```


### define GAMBIT_PLUGIN_3

```
#define GAMBIT_PLUGIN_3(
    plug_name,
    plug_type,
    plug_version
)
_GAMBIT_PLUGIN_(plug_name, plug_type, __PLUGIN_ ## plug_version)                                    \
```


### define GAMBIT_PLUGIN

```
#define GAMBIT_PLUGIN(
    ...
)
__COMBINE__(GAMBIT_PLUGIN_, __ARG_N__(__VA_ARGS__))(__VA_ARGS__ )
```


### define ___GAMBIT_PLUGIN_NAMESPACE___

```
#define ___GAMBIT_PLUGIN_NAMESPACE___(
    plug_name,
    plug_type,
    plug_version
)
namespace __gambit_plugin_ ## plug_name ## __t__ ## plug_type ## __v__ ## plug_version ## _namespace__      \
```


### define _GAMBIT_PLUGIN_NAMESPACE_

```
#define _GAMBIT_PLUGIN_NAMESPACE_(
    plug_name,
    plug_type,
    plug_version
)
___GAMBIT_PLUGIN_NAMESPACE___(plug_name, plug_type, plug_version)                                   \
```


### define __GAMBIT_PLUGIN_NAMESPACE___1

```
#define __GAMBIT_PLUGIN_NAMESPACE___1(
    plug_name
)
_GAMBIT_PLUGIN_NAMESPACE_(plug_name,, __PLUGIN_no_version)                                          \
```


### define __GAMBIT_PLUGIN_NAMESPACE___2

```
#define __GAMBIT_PLUGIN_NAMESPACE___2(
    plug_name,
    plug_type
)
_GAMBIT_PLUGIN_NAMESPACE_(plug_name, plug_type, __PLUGIN_no_version)                                \
```


### define __GAMBIT_PLUGIN_NAMESPACE___3

```
#define __GAMBIT_PLUGIN_NAMESPACE___3(
    plug_name,
    plug_type,
    plug_version
)
_GAMBIT_PLUGIN_NAMESPACE_(plug_name, plug_type, __PLUGIN_ ## plug_version)                          \
```


### define __GAMBIT_PLUGIN_NAMESPACE__

```
#define __GAMBIT_PLUGIN_NAMESPACE__(
    ...
)
__COMBINE__(__GAMBIT_PLUGIN_NAMESPACE___, __ARG_N__(__VA_ARGS__))(__VA_ARGS__)                      \
```


### define GAMBIT_PLUGIN_INITIALIZE

```
#define GAMBIT_PLUGIN_INITIALIZE(
    setup,
    ...
)
GAMBIT_PLUGIN(__VA_ARGS__)                                                                                  \
{                                                                                                           \
    setup                                                                                                   \
}                                                                                                           \
__GAMBIT_PLUGIN_NAMESPACE__(__VA_ARGS__)                                                                    \
```


## Source code

```
//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//

#include "gambit/ScannerBit/plugin_details.hpp"
#include "gambit/ScannerBit/printer_interface.hpp"
#include "gambit/Utils/type_index.hpp"
#include "gambit/Utils/variadic_functions.hpp"

#ifndef SCANNER_PLUGIN_MACROS_HPP
#define SCANNER_PLUGIN_MACROS_HPP

// Tell clang not to warn about usage of extern "C" even when the types involved are C++ (we just use it to avoid name-mangling)
#ifdef __clang__
  #pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
#endif

#define export_abstract(name, ...)      EXPORT_ABSTRACT(name, __VA_ARGS__)
#define export_object(name, ...)        EXPORT_OBJECT(name, __VA_ARGS__)
#define plugin_main(...)                PLUGIN_MAIN( __VA_ARGS__ )
#define gambit_plugin(...)              GAMBIT_PLUGIN( __VA_ARGS__ )
#define plugin_constructor              PLUGIN_CONSTRUCTOR
#define plugin_deconstructor            PLUGIN_DECONSTRUCTOR
#define __PLUGIN_version(...)           __PLUGIN_VERSION( __VA_ARGS__ )
#define __PLUGIN_no_version             __PLUGIN_VERSION()
#define reqd_inifile_entries(...) void reqd_inifile_entries()
#define reqd_libraries(...) void reqd_libraries()
#define reqd_headers(...) void reqd_headers()
#define set_flag(...) void set_flag()
#define cxx_flags(...) void scc_flags()

#define REQD_INIFILE_ENTRIES(...)
#define REQD_LIRBARIES(...)
#define REQD_HEADERS(...)
#define SET_FLAG(...)
#define CXX_FLAGS(...)

#define _ARG_N_(_1_, _2_, _3_, _4_, ret, ...) ret
#define __ARG_N__(...) _ARG_N_(__VA_ARGS__ , 4, 3, 2, 1, 0)
#define __COMBINE__(a, b) _COMBINE_(a, b)
#define _COMBINE_(a, b) a ## b
#define _STR_(a) #a
#define __STR__(a) _STR_(a)

#define __PLUGIN_VERSION___4(major, minor, patch, release) major ## _ ## minor ## _ ## patch ## _ ## release
#define __PLUGIN_VERSION___3(major, minor, patch) __PLUGIN_VERSION___4(major, minor, patch, )
#define __PLUGIN_VERSION___2(major, minor) __PLUGIN_VERSION___4(major, minor,,)
#define __PLUGIN_VERSION___1(major) __PLUGIN_VERSION___4(major,,,)
#define __PLUGIN_VERSION___0() __PLUGIN_VERSION___(,,,)
#define __PLUGIN_VERSION(...) __COMBINE__(__PLUGIN_VERSION___,__ARG_N__(__VA_ARGS__))( __VA_ARGS__ )

/*Allows Gambit to declare an object of type "..."*/
#define EXPORT_ABSTRACT(name, ...)                                                                      \
namespace __gambit_plugin_namespace__                                                                   \
{                                                                                                       \
    namespace LoadTags                                                                                  \
    {                                                                                                   \
        struct name{};                                                                                  \
    }                                                                                                   \
                                                                                                        \
    namespace                                                                                           \
    {                                                                                                   \
        template<>                                                                                      \
        class interface <LoadTags::name>                                                                \
        {                                                                                               \
        public:                                                                                         \
                                                                                                        \
            interface(pluginData &myData)                                                               \
            {                                                                                           \
                myData.inits.push_back(interface <LoadTags::name>::init);                               \
            }                                                                                           \
                                                                                                        \
            static void init(pluginData &myData)                                                        \
            {                                                                                           \
                myData.outputFuncs[#name] = new Gambit::Scanner::Plugins::classFactory<__VA_ARGS__>;    \
            }                                                                                           \
                                                                                                        \
            ~interface()                                                                                \
            {                                                                                           \
                if (myData.outputFuncs.find(#name) != myData.outputFuncs.end())                         \
                    delete myData.outputFuncs[#name];                                                   \
            }                                                                                           \
                                                                                                        \
        };                                                                                              \
                                                                                                        \
        template <>                                                                                     \
        interface <LoadTags::name> reg_init <LoadTags::name>::reg(myData);                              \
    }                                                                                                   \
}                                                                                                       \

/*Allows Gambit to use object "obj" of type "..."*/
#define EXPORT_OBJECT(name, ...)                                                                        \
namespace __gambit_plugin_namespace__                                                                   \
{                                                                                                       \
    namespace LoadTags                                                                                  \
    {                                                                                                   \
        struct name{};                                                                                  \
    }                                                                                                   \
                                                                                                        \
    namespace                                                                                           \
    {                                                                                                   \
        template<>                                                                                      \
        class interface <LoadTags::name>                                                                \
        {                                                                                               \
        public:                                                                                         \
                                                                                                        \
            interface(pluginData &myData)                                                               \
            {                                                                                           \
                myData.inits.push_back(interface <LoadTags::name>::init);                               \
            }                                                                                           \
                                                                                                        \
            static void init(pluginData &myData)                                                        \
            {                                                                                           \
                myData.outputFuncs[#name]                                                               \
                    = new Gambit::Scanner::Plugins::funcFactory <decltype(__VA_ARGS__)>(&__VA_ARGS__);  \
            }                                                                                           \
                                                                                                        \
            ~interface()                                                                                \
            {                                                                                           \
                if (myData.outputFuncs.find(#name) != myData.outputFuncs.end())                         \
                    delete myData.outputFuncs[#name];                                                   \
            }                                                                                           \
                                                                                                        \
        };                                                                                              \
                                                                                                        \
        template <>                                                                                     \
        interface <LoadTags::name> reg_init <LoadTags::name>::reg(myData);                              \
    }                                                                                                   \
}                                                                                                       \

//constructor
#define PLUGIN_CONSTRUCTOR                                                                              \
void PLUGIN_CONSTRUCTOR();                                                                              \
namespace __gambit_plugin_namespace__                                                                   \
{                                                                                                       \
    namespace                                                                                           \
    {                                                                                                   \
        template<>                                                                                      \
        class interface <void (int)>                                                                    \
        {                                                                                               \
        public:                                                                                         \
                                                                                                        \
            interface(pluginData &myData)                                                               \
            {                                                                                           \
                myData.inits.push_back(interface <void (int)>::init);                                   \
            }                                                                                           \
                                                                                                        \
            static void init(pluginData&)                                                               \
            {                                                                                           \
                PLUGIN_CONSTRUCTOR();                                                                   \
            }                                                                                           \
        };                                                                                              \
                                                                                                        \
        template <>                                                                                     \
        interface <void (int)> reg_init <void (int)>::reg(myData);                                      \
    }                                                                                                   \
}                                                                                                       \
void PLUGIN_CONSTRUCTOR()                                                                               \

#define PLUGIN_DECONSTRUCTOR                                                                            \
void PLUGIN_DECONSTRUCTOR();                                                                            \
namespace __gambit_plugin_namespace__                                                                   \
{                                                                                                       \
    namespace                                                                                           \
    {                                                                                                   \
        template<>                                                                                      \
        class interface <void (void)>                                                                   \
        {                                                                                               \
        public:                                                                                         \
                                                                                                        \
            interface(pluginData &myData)                                                               \
            {                                                                                           \
                myData.inits.push_back(interface <void (void)>::init);                                  \
            }                                                                                           \
                                                                                                        \
            static void init(pluginData &myData)                                                        \
            {                                                                                           \
                myData.deconstructor = PLUGIN_DECONSTRUCTOR;                                            \
            }                                                                                           \
        };                                                                                              \
                                                                                                        \
        template <>                                                                                     \
        interface <void (void)> reg_init <void (void)>::reg(myData);                                    \
    }                                                                                                   \
}                                                                                                       \
void PLUGIN_DECONSTRUCTOR()                                                                             \

#define __PLUGIN_MAIN_RET_VAL__(...)                                                                    \
decltype(__plugin_main_ret_val__(typename Gambit::Scanner::func_ptr_type<void (__VA_ARGS__)>::type()))  \

/*Declared the "main" for the module.  This is function that will be ran by the module interface*/
#define PLUGIN_MAIN(...)                                                                                \
 __plugin_main_ret_val__(void (*)(__VA_ARGS__));                                                        \
__PLUGIN_MAIN_RET_VAL__(__VA_ARGS__) PLUGIN_MAIN (__VA_ARGS__);                                         \
namespace __gambit_plugin_namespace__                                                                   \
{                                                                                                       \
    namespace                                                                                           \
    {                                                                                                   \
        template<>                                                                                      \
        class interface <int (__VA_ARGS__)>                                                             \
        {                                                                                               \
        public:                                                                                         \
                                                                                                        \
            interface(pluginData &myData)                                                               \
            {                                                                                           \
                myData.inits.push_back(interface <int (__VA_ARGS__)>::init);                            \
            }                                                                                           \
                                                                                                        \
            static void init(pluginData &myData)                                                        \
            {                                                                                           \
                myData.plugin_mains[typeid(__PLUGIN_MAIN_RET_VAL__(__VA_ARGS__) (__VA_ARGS__))] =       \
                    Gambit::Scanner::Plugins::funcFactory                                               \
                            <__PLUGIN_MAIN_RET_VAL__(__VA_ARGS__) (__VA_ARGS__)>(PLUGIN_MAIN)();        \
            }                                                                                           \
        };                                                                                              \
                                                                                                        \
        template <>                                                                                     \
        interface <int (__VA_ARGS__)> reg_init <int (__VA_ARGS__)>::reg(myData);                        \
    }                                                                                                   \
}                                                                                                       \
__PLUGIN_MAIN_RET_VAL__(__VA_ARGS__) PLUGIN_MAIN (__VA_ARGS__)                                          \

/*Defines a Gambit plugin*/
#define __GAMBIT_PLUGIN__(plug_name, plug_type, plug_version)                                               \
namespace __gambit_plugin_ ## plug_name ## __t__ ## plug_type ## __v__ ## plug_version ##  _namespace__     \
{                                                                                                           \
    namespace __gambit_plugin_namespace__                                                                   \
    {                                                                                                       \
        using Gambit::Scanner::Plugins::pluginData;                                                         \
                                                                                                            \
        namespace LoadTags                                                                                  \
        {                                                                                                   \
            struct plug_name{};                                                                             \
        }                                                                                                   \
                                                                                                            \
        namespace                                                                                           \
        {                                                                                                   \
            pluginData myData( #plug_name , #plug_type, #plug_version );                                    \
                                                                                                            \
            template <class T>                                                                              \
            class interface {};                                                                             \
                                                                                                            \
            template <class T>                                                                              \
            struct reg_init                                                                                 \
            {                                                                                               \
                    static interface <T> reg;                                                               \
            };                                                                                              \
        }                                                                                                   \
                                                                                                            \
        extern "C" const std::map<Gambit::type_index, void *> &                                             \
            __gambit_plugin_pluginInit_ ## plug_name ## __t__ ## plug_type ## __v__ ## plug_version ## __   \
            (const std::string *tag, const YAML::Node *node, Gambit::Scanner::printer_interface &printer,   \
                                    Gambit::Scanner::prior_interface &prior, std::vector<void *> *input )   \
        {                                                                                                   \
            if (!myData.loaded)                                                                             \
            {                                                                                               \
                myData.tag = *tag;                                                                          \
                myData.printer = &printer;                                                                  \
                myData.prior = &prior;                                                                      \
                myData.loaded = true;                                                                       \
                                                                                                            \
                if (input != 0)                                                                             \
                    myData.inputData = *input;                                                              \
                                                                                                            \
                myData.node = *node;                                                                        \
                                                                                                            \
                for(auto it = myData.inits.begin(), end = myData.inits.end(); it != end; it++)              \
                {                                                                                           \
                    (*it)(myData);                                                                          \
                }                                                                                           \
                                                                                                            \
                myData.inits.clear();                                                                       \
            }                                                                                               \
            else                                                                                            \
            {                                                                                               \
                scan_err << "plugin:\n" << __gambit_plugin_namespace__::myData.print()                      \
                        << "is already loaded" << scan_end;                                                 \
            }                                                                                               \
                                                                                                            \
            return myData.plugin_mains;                                                                     \
        }                                                                                                   \
                                                                                                            \
        extern "C" void *                                                                                   \
            __gambit_plugin_getMember_ ## plug_name ## __t__ ## plug_type ## __v__ ## plug_version ## __    \
                                                                                            (std::string in)\
        {                                                                                                   \
            if (myData.outputFuncs.find(in) != myData.outputFuncs.end())                                    \
            {                                                                                               \
                return (*myData.outputFuncs[in])();                                                         \
            }                                                                                               \
            else                                                                                            \
                return NULL;                                                                                \
        }                                                                                                   \
    }                                                                                                       \
                                                                                                            \
    inline Gambit::Scanner::printer_interface &get_printer()                                                \
    {                                                                                                       \
        return *__gambit_plugin_namespace__::myData.printer;                                                \
    }                                                                                                       \
                                                                                                            \
    inline Gambit::Scanner::prior_interface &get_prior()                                                    \
    {                                                                                                       \
        return *__gambit_plugin_namespace__::myData.prior;                                                  \
    }                                                                                                       \
                                                                                                            \
    template <typename T>                                                                                   \
    inline T get_inifile_value(std::string in)                                                              \
    {                                                                                                       \
        if (!__gambit_plugin_namespace__::myData.node[in])                                                  \
        {                                                                                                   \
            scan_err << "Missing iniFile entry \""<< in << "\" needed by a gambit plugin:  \n"              \
                    << __gambit_plugin_namespace__::myData.print() << scan_end;                             \
            return T();                                                                                     \
        }                                                                                                   \
                                                                                                            \
        return __gambit_plugin_namespace__::myData.node[in].as<T>();                                        \
    }                                                                                                       \
                                                                                                            \
    inline YAML::Node get_inifile_node(std::string in)                                                      \
    {                                                                                                       \
        return __gambit_plugin_namespace__::myData.node[in];                                                \
    }                                                                                                       \
                                                                                                            \
    inline YAML::Node get_inifile_node()                                                                    \
    {                                                                                                       \
        return __gambit_plugin_namespace__::myData.node;                                                    \
    }                                                                                                       \
                                                                                                            \
    template <typename T>                                                                                   \
    inline T get_inifile_value(std::string in, T defaults)                                                  \
    {                                                                                                       \
        if (!__gambit_plugin_namespace__::myData.node[in])                                                  \
        {                                                                                                   \
            return defaults;                                                                                \
        }                                                                                                   \
                                                                                                            \
        return __gambit_plugin_namespace__::myData.node[in].as<T>();                                        \
    }                                                                                                       \
                                                                                                            \
    template <>                                                                                             \
    inline YAML::Node get_inifile_value<YAML::Node>(std::string in)                                         \
    {                                                                                                       \
        if (!__gambit_plugin_namespace__::myData.node[in])                                                  \
        {                                                                                                   \
            scan_err << "Missing iniFile node \""<< in << "\" needed by a gambit plugin:  \n"               \
                    << __gambit_plugin_namespace__::myData.print() << scan_end;                             \
            YAML::Node node;                                                                                \
            return node;                                                                                    \
        }                                                                                                   \
        return __gambit_plugin_namespace__::myData.node[in];                                                \
    }                                                                                                       \
                                                                                                            \
    template <>                                                                                             \
    inline YAML::Node get_inifile_value<YAML::Node>(std::string in, YAML::Node defaults)                    \
    {                                                                                                       \
        if (!__gambit_plugin_namespace__::myData.node[in])                                                  \
        {                                                                                                   \
            return defaults;                                                                                \
        }                                                                                                   \
                                                                                                            \
        return __gambit_plugin_namespace__::myData.node[in];                                                \
    }                                                                                                       \
                                                                                                            \
    template <typename T>                                                                                   \
    inline T &get_input_value(int i)                                                                        \
    {                                                                                                       \
        return *static_cast<T*>(__gambit_plugin_namespace__::myData.inputData[i]);                          \
    }                                                                                                       \
                                                                                                            \
    Gambit::Scanner::resume_params_func                                                                     \
                    set_resume_params(__STR__(plug_name ## __t__ ## plug_type ## __v__ ## plug_version));   \
}                                                                                                           \
namespace __gambit_plugin_ ## plug_name ## __t__ ## plug_type ## __v__ ## plug_version ## _namespace__      \


#define _GAMBIT_PLUGIN_(plug_name, plug_type, plug_version)                                                 \
        __GAMBIT_PLUGIN__(plug_name, plug_type, plug_version)                                               \

#define GAMBIT_PLUGIN_1(plugin_name)                                                                        \
        _GAMBIT_PLUGIN_(plug_name,, __PLUGIN_no_version)                                                    \

#define GAMBIT_PLUGIN_2(plugin_name, plug_type)                                                             \
        _GAMBIT_PLUGIN_(plug_name, plug_type, __PLUGIN__no_version)                                         \

#define GAMBIT_PLUGIN_3(plug_name, plug_type, plug_version)                                                 \
        _GAMBIT_PLUGIN_(plug_name, plug_type, __PLUGIN_ ## plug_version)                                    \

#define GAMBIT_PLUGIN(...) __COMBINE__(GAMBIT_PLUGIN_, __ARG_N__(__VA_ARGS__))(__VA_ARGS__ )


#define ___GAMBIT_PLUGIN_NAMESPACE___(plug_name, plug_type, plug_version)                                   \
namespace __gambit_plugin_ ## plug_name ## __t__ ## plug_type ## __v__ ## plug_version ## _namespace__      \

#define _GAMBIT_PLUGIN_NAMESPACE_(plug_name, plug_type, plug_version)                                       \
        ___GAMBIT_PLUGIN_NAMESPACE___(plug_name, plug_type, plug_version)                                   \

#define __GAMBIT_PLUGIN_NAMESPACE___1(plug_name)                                                            \
        _GAMBIT_PLUGIN_NAMESPACE_(plug_name,, __PLUGIN_no_version)                                          \

#define __GAMBIT_PLUGIN_NAMESPACE___2(plug_name, plug_type)                                                 \
        _GAMBIT_PLUGIN_NAMESPACE_(plug_name, plug_type, __PLUGIN_no_version)                                \

#define __GAMBIT_PLUGIN_NAMESPACE___3(plug_name, plug_type, plug_version)                                   \
        _GAMBIT_PLUGIN_NAMESPACE_(plug_name, plug_type, __PLUGIN_ ## plug_version)                          \

#define __GAMBIT_PLUGIN_NAMESPACE__(...)                                                                    \
        __COMBINE__(__GAMBIT_PLUGIN_NAMESPACE___, __ARG_N__(__VA_ARGS__))(__VA_ARGS__)                      \


#define GAMBIT_PLUGIN_INITIALIZE(setup, ...)                                                                \
GAMBIT_PLUGIN(__VA_ARGS__)                                                                                  \
{                                                                                                           \
    setup                                                                                                   \
}                                                                                                           \
__GAMBIT_PLUGIN_NAMESPACE__(__VA_ARGS__)                                                                    \

#endif
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
