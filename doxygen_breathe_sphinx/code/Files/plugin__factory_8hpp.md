---
title: 'file ScannerBit/plugin_factory.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::Scanner](/documentation/code/namespaces/namespacegambit_1_1scanner/)**  |

## Classes

|                | Name           |
| -------------- | -------------- |
| class | **[Gambit::Scanner::Scanner_Plugin_Function](/documentation/code/classes/classgambit_1_1scanner_1_1scanner__plugin__function/)**  |
| class | **[Gambit::Scanner::Multi_Scanner_Plugin_Function](/documentation/code/classes/classgambit_1_1scanner_1_1multi__scanner__plugin__function/)**  |
| class | **[Gambit::Scanner::Scanner_Plugin_Function< ret(args...)>](/documentation/code/classes/classgambit_1_1scanner_1_1scanner__plugin__function_3_01ret_07args_8_8_8_08_4/)** <br>Objective functor made up a single plugin.  |
| class | **[Gambit::Scanner::Multi_Scanner_Plugin_Function< ret(args...)>](/documentation/code/classes/classgambit_1_1scanner_1_1multi__scanner__plugin__function_3_01ret_07args_8_8_8_08_4/)** <br>Objective functor made up of multiple plugins.  |
| class | **[Gambit::Scanner::Plugin_Function_Factory](/documentation/code/classes/classgambit_1_1scanner_1_1plugin__function__factory/)** <br>Factory class to make objectives using objective plugins.  |

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[LOAD_FUNC_TEMPLATE](/documentation/code/files/plugin__factory_8hpp/#define-load-func-template)**(name, ...)  |
|  | **[LOAD_MULTI_FUNC_TEMPLATE](/documentation/code/files/plugin__factory_8hpp/#define-load-multi-func-template)**(name, ...)  |

## Detailed Description


**Author**: Gregory Martinez ([gregory.david.martinez@gmail.com](mailto:gregory.david.martinez@gmail.com)) 

**Date**: Feb 2014

test functions implementations.



------------------

Authors (add name and date if you modify):



------------------




## Macros Documentation

### define LOAD_FUNC_TEMPLATE

```
#define LOAD_FUNC_TEMPLATE(
    name,
    ...
)
REGISTER_ELEM(__functions__, typeid(__VA_ARGS__), name<__VA_ARGS__>)
```


### define LOAD_MULTI_FUNC_TEMPLATE

```
#define LOAD_MULTI_FUNC_TEMPLATE(
    name,
    ...
)
REGISTER_ELEM(__multi_functions__, typeid(__VA_ARGS__), name<__VA_ARGS__>)
```


## Source code

```
//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************

#ifndef __plugin_factory_hpp__
#define __plugin_factory_hpp__

#include <map>
#include <vector>
#include <string>
#include <unordered_map>
#include <sstream>
#include <unordered_map>
#include <typeinfo>
#include <utility>
#include <limits>
#include <type_traits>

#include "gambit/ScannerBit/scanner_utils.hpp"
#include "gambit/ScannerBit/scan.hpp"
#include "gambit/ScannerBit/plugin_interface.hpp"
#include "gambit/Utils/yaml_options.hpp"
#include "gambit/Utils/type_index.hpp"
#include "gambit/Utils/signal_helpers.hpp"
#include "gambit/Utils/signal_handling.hpp"
#include "gambit/ScannerBit/factory_defs.hpp"

#define LOAD_FUNC_TEMPLATE(name, ...) REGISTER_ELEM(__functions__, typeid(__VA_ARGS__), name<__VA_ARGS__>)
#define LOAD_MULTI_FUNC_TEMPLATE(name, ...) REGISTER_ELEM(__multi_functions__, typeid(__VA_ARGS__), name<__VA_ARGS__>)

namespace Gambit
{
    namespace Scanner
    {
        using Gambit::type_index;

        gambit_registry
        {
            typedef void* func_type(const std::vector<std::string> &, const std::string &);
            typedef void* multi_func_type(const std::map<std::string, std::vector<std::string>> &, const std::vector<std::pair<std::string, std::string>> &);
            std::unordered_map<type_index, func_type *, Gambit::type_hasher, Gambit::type_equal_to> __functions__;
            std::unordered_map<type_index, multi_func_type *> __multi_functions__;
        }

        template <typename T>
        class Scanner_Plugin_Function;

        template <typename T>
        class Multi_Scanner_Plugin_Function;

        template <typename ret, typename... args>
        class Scanner_Plugin_Function<ret (args...)> : public Plugins::Plugin_Interface<ret (args...)>, public Function_Base<ret (args...)>
        {
        private:
            //std::vector<double> &params;

        public:
            Scanner_Plugin_Function(const std::vector<std::string> &params, const std::string &name)
                    : Plugins::Plugin_Interface<ret (args...)>("objective", name, params)
            {
            }

            ret main(const args&... in)
            {
                // Check for signals to abort run
                if(signaldata().check_if_shutdown_begun())
                {
                    Function_Base<ret (args...)>::tell_scanner_early_shutdown_in_progress(); // e.g. sets 'quit' flag in Diver
                }

                if(signaldata().shutdown_begun() and not Function_Base<ret (args...)>::scanner_can_quit())
                {
                    signaldata().attempt_soft_shutdown();
                    //lnlike = alt_min_valid_lnlike;
                    //point_invalidated = true;
                    return scanner_plugin_def_ret<ret>();
                }
                else
                    return this->Plugins::Plugin_Interface<ret (args...)>::operator()(in...);
            }
        };

        template <typename ret, typename... args>
        class Multi_Scanner_Plugin_Function <ret (args...)> : public Function_Base<ret (args...)>
        {
        private:
            std::vector< Scanner_Plugin_Function<ret (args...)> > functions;

        public:
            Multi_Scanner_Plugin_Function(const std::map< std::string, std::vector<std::string> > &params, const std::vector<std::pair<std::string, std::string>> &names)
            {
                for (auto it = names.begin(), end = names.end(); it != end; it++)
                {
                    functions.emplace_back(params.at(it->second), it->first);
                }
            }

            ret main(const args&... in)
            {
                // Check for signals to abort run
                if(signaldata().check_if_shutdown_begun())
                {
                    Function_Base<ret (args...)>::tell_scanner_early_shutdown_in_progress(); // e.g. sets 'quit' flag in Diver
                }

                if(signaldata().shutdown_begun() and not Function_Base<ret (args...)>::scanner_can_quit())
                {
                    signaldata().attempt_soft_shutdown();
                    //lnlike = alt_min_valid_lnlike;
                    //point_invalidated = true;
                    return scanner_plugin_def_ret<ret>();
                }
                else
                {
                    ret retval = 0.0;
                    for (auto& it : functions) retval += it.main(in...);
                    return retval;
                }
            }
        };

        LOAD_FUNC_TEMPLATE(Scanner_Plugin_Function, double (std::unordered_map<std::string, double> &));
        LOAD_FUNC_TEMPLATE(Scanner_Plugin_Function, void (const std::vector<double> &, std::unordered_map<std::string, double> &));
        LOAD_FUNC_TEMPLATE(Scanner_Plugin_Function, std::vector<double> (std::unordered_map<std::string, double> &));
        LOAD_MULTI_FUNC_TEMPLATE(Multi_Scanner_Plugin_Function, double(std::unordered_map<std::string, double> &));

        class Plugin_Function_Factory : public Factory_Base
        {
        private:
            std::map< std::string, std::vector<std::pair<std::string, std::string> > > names;
            std::map< std::string, std::vector<std::string> > parameters;
            std::unordered_map<std::string, Gambit::type_index> purpose_index;

        public:
            Plugin_Function_Factory(const std::vector<std::string> &keys, std::map< std::string, std::vector<std::pair<std::string, std::string>> > &names)
                    : names(names)
            {
                parameters = convert_to_map(keys);
                purpose_index["Likelihood"] = typeid(double (std::unordered_map<std::string, double> &));
                purpose_index["LogLike"] = typeid(double (std::unordered_map<std::string, double> &));
                purpose_index["Observable"] = typeid(std::vector<double> (std::unordered_map<std::string, double> &));
                purpose_index["Prior"] = typeid(void (const std::vector<double> &, std::unordered_map<std::string, double> &));
            }

            void * operator() (const std::string &purpose) const
            {
                auto it = names.find(purpose);
                std::string purpose_i = purpose;

                if (purpose_index.find(purpose) == purpose_index.end())
                {
                    purpose_i = "Likelihood";
                }

                if (it == names.end())
                {
                    return NULL;
                }
                else if (it->second.size() == 1)
                {
                    return __functions__.at(purpose_index.at(purpose_i))(parameters.at(it->second.at(0).second), it->second.at(0).first);
                }
                else if (it->second.size() > 1)
                {
                    return __multi_functions__.at(purpose_index.at(purpose_i))(parameters, it->second);
                }
                else
                {
                    return NULL;
                }
            }

            ~Plugin_Function_Factory()
            {
            }
        };
    }
}

#endif
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
