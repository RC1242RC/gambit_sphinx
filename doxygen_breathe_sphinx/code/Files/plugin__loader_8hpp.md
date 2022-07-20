---
title: 'file ScannerBit/plugin_loader.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::GMPI](/documentation/code/namespaces/namespacegambit_1_1gmpi/)** <br>Forward declare MPI class.  |
| **[Gambit::Scanner](/documentation/code/namespaces/namespacegambit_1_1scanner/)**  |
| **[Gambit::Scanner::Plugins](/documentation/code/namespaces/namespacegambit_1_1scanner_1_1plugins/)**  |

## Classes

|                | Name           |
| -------------- | -------------- |
| struct | **[Gambit::Scanner::Plugins::Proto_Plugin_Details](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1proto__plugin__details/)** <br>Plugin info from inifile.  |
| struct | **[Gambit::Scanner::Plugins::Plugin_Interface_Details](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugin__interface__details/)** <br>Plugin info to be given to the interface class.  |
| class | **[Gambit::Scanner::Plugins::Plugin_Loader](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__loader/)** <br>container class for the actual plugins detected by ScannerBit  |
| class | **[Gambit::Scanner::Plugins::__plugin_resume_base__](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1____plugin__resume__base____/)** <br>Virtual container base class to store plugin values for resume function.  |
| class | **[Gambit::Scanner::Plugins::__plugin_resume__](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1____plugin__resume____/)** <br>Container class to store plugin values for resume function.  |
| class | **[Gambit::Scanner::Plugins::pluginInfo](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugininfo/)** <br>Container for all the plugin info from the inifile and Scannerbit.  |

## Detailed Description


**Author**: 

  * Gregory Martinez ([gregory.david.martinez@gmail.com](mailto:gregory.david.martinez@gmail.com)) 
  * Pat Scott ([p.scott@imperial.ac.uk](mailto:p.scott@imperial.ac.uk)) 
  * Ben Farmer ([benjamin.farmer@fysik.su.se](mailto:benjamin.farmer@fysik.su.se)) 


**Date**: 

  * 2013 August 
  * 2014 Feb
  * 2014 Dec
  * 2016 Aug


Loader singleton class for scanner plugins



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************

#ifndef __PLUGIN_LOADER_HPP
#define __PLUGIN_LOADER_HPP

#include <vector>
#include <unordered_map>
#include <string>
#include <type_traits>

#include "gambit/ScannerBit/plugin_details.hpp"
#include "gambit/Utils/yaml_options.hpp"
#include "gambit/Utils/util_macros.hpp"
#include "gambit/ScannerBit/printer_interface.hpp"
#include "gambit/cmake/cmake_variables.hpp"
#include "gambit/ScannerBit/scanner_utils.hpp"
#include "gambit/Utils/util_functions.hpp"
#include "gambit/ScannerBit/base_prior.hpp"

namespace Gambit
{
    namespace GMPI { class Comm; }

    namespace Scanner
    {

        namespace Plugins
        {
            struct Proto_Plugin_Details
            {
                std::string plugin;
                std::string version;
                std::string path;

                Proto_Plugin_Details() : plugin(""), version(""), path("") {}
            };

            struct EXPORT_SYMBOLS Plugin_Interface_Details
            {
                Plugin_Details &details;
                printer_interface *printer;
                Priors::BasePrior *prior;
                YAML::Node flags;
                YAML::Node node;

                Plugin_Interface_Details(Plugin_Details &details, printer_interface *printer, Priors::BasePrior *prior, const YAML::Node &node)
                        : details(details), printer(printer), prior(prior), flags(details.flags), node(node) {}
            };

            class EXPORT_SYMBOLS Plugin_Loader
            {
            private:
                std::string path;
                std::vector<Plugin_Details> plugins;
                std::map<std::string, std::map<std::string, std::vector<Plugin_Details>>> plugin_map;
                std::vector<Plugin_Details> excluded_plugins;
                std::map<std::string, std::map<std::string, std::vector<Plugin_Details>>> excluded_plugin_map;
                std::vector<Plugin_Details> total_plugins;
                std::map<std::string, std::map<std::string, std::vector<Plugin_Details>>> total_plugin_map;
                std::vector<Plugin_Details> loadExcluded(const std::string &);
                void process(const std::string &, const std::string &, const std::string &, std::vector<Plugin_Details>&);

            public:
                Plugin_Loader();
                const std::vector<Plugin_Details> &getPluginsVec() const {return total_plugins;}
                const std::map<std::string, std::map<std::string, std::vector<Plugin_Details>>> &getPluginsMap() const {return total_plugin_map;}
                void loadLibrary (const std::string &, const std::string & = "");
                std::vector<std::string> print_plugin_names(const std::string & = "") const;
                std::string print_all (const std::string &plug_type = "") const;
                int print_all_to_screen (const std::string &plug_type = "") const;
                std::string print_plugin (const std::string &) const;
                std::string print_plugin (const std::string &, const std::string &) const;
                std::vector<std::string> list_prior_groups() const;
                std::string print_priors (const std::string &prior_group = "priors") const;
                int print_plugin_to_screen (const std::string &) const;
                int print_plugin_to_screen (const std::string &, const std::string &) const;
                int print_plugin_to_screen (const std::vector<std::string> &) const;
                Plugin_Details &find (const std::string &, const std::string &, const std::string &, const std::string &) const;
            };

            class __plugin_resume_base__
            {
            public:
                virtual void print(std::ofstream &) = 0;
                virtual ~__plugin_resume_base__() {}
            };

            template <typename T>
            class __plugin_resume__ : public __plugin_resume_base__
            {
            private:
                T *data;

            public:
                __plugin_resume__(T &data) : data(&data) {}

                void print(std::ofstream &out)
                {
                    resume_file_output<T>(out, *data);
                }

                ~__plugin_resume__(){}
            };

            class EXPORT_SYMBOLS pluginInfo
            {
            private:
                bool keepRunning;
                bool funcCalculating;
                std::map<std::string, std::map<std::string, Proto_Plugin_Details> > selectedPlugins;
                mutable Plugins::Plugin_Loader plugins;
                std::map<std::string, std::vector<__plugin_resume_base__ *>> resume_data;
                std::map<std::string, std::ifstream *> resume_streams;
                printer_interface *printer;
                Priors::BasePrior *prior;
                Options options;
                std::string def_out_path;
                int MPIrank;
                #ifdef WITH_MPI
                GMPI::Comm* scannerComm;
                bool MPIdata_is_init;
                #endif
                bool earlyShutdownInProgress;

                inline void set_resume(std::vector<__plugin_resume_base__ *> &){}

                template<typename U, typename... T>
                void set_resume(std::vector<__plugin_resume_base__ *> &r_data, U& param, T&... params)
                {
                    r_data.push_back(new __plugin_resume__<typename std::decay<U>::type>(param));
                    set_resume(r_data, params...);
                }

                inline void get_resume(std::ifstream &){}

                template<typename U, typename... T>
                void get_resume(std::ifstream &in, U& param, T&... params)
                {
                    resume_file_input(in, param);
                    get_resume(in, params...);
                }

                inline size_t get_size_of(){return 0;}

                template<typename U, typename... T>
                inline size_t get_size_of(U& param, T&... params)
                {
                    return resume_size_of(param) + get_size_of(params...);
                }

            public:
                pluginInfo();

                void iniFile(const Options &);
                void printer_prior(printer_interface &, Priors::BasePrior &);
                bool keep_running() const {return keepRunning;}
                void set_running(bool b){keepRunning = b;}
                bool func_calculating() const {return funcCalculating;}
                void set_calculating(bool b){funcCalculating = b;}
                void set_early_shutdown_in_progress(){earlyShutdownInProgress=true;}
                bool early_shutdown_in_progress() const {return earlyShutdownInProgress;}
                bool resume_mode() const { return printer->resume_mode(); }
                std::string temp_file_path() {return Gambit::Utils::ensure_path_exists(def_out_path + "/temp_files/");}

                #ifdef WITH_MPI
                // tags for messages sent via scannerComm
                static const int MIN_LOGL_MSG = 0;
                void initMPIdata(GMPI::Comm* newcomm);
                GMPI::Comm& scanComm();
                #endif
                int getRank() { return MPIrank; }

                template <typename... T>
                void resume(const std::string &name, T&... data)
                {
                    if (resume_mode())
                    {
                        if (resume_streams.find(name) == resume_streams.end())
                        {
                            std::string path = Gambit::Utils::ensure_path_exists(def_out_path + "/temp_files/" + name);
                            resume_streams[name] = new std::ifstream((path).c_str(), std::ifstream::binary);
                        }

                        if (resume_streams[name]->is_open())
                        {
                            get_resume(*resume_streams[name], data...);
                        }
                        else
                        {
                            std::cerr << "Could not load resume data." << std::endl;
                            //scan_err << "Could not load resume data." << scan_end;
                        }
                    }

                    set_resume(resume_data[name], data...);
                }

                void dump();

                void dump(const std::string &);

                void save_alt_min_LogL_state() const;

                void clear_alt_min_LogL_state() const;

                bool check_alt_min_LogL_state() const;

                const Plugin_Loader &operator()() {return plugins;}

                Plugin_Interface_Details operator()(const std::string &, const std::string &);
                ~pluginInfo();
            };

            extern EXPORT_SYMBOLS pluginInfo plugin_info;

        }

    }

}

#endif
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
