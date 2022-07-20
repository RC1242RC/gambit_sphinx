---
title: 'file ScannerBit/plugin_details.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::Scanner](/documentation/code/namespaces/namespacegambit_1_1scanner/)**  |
| **[Gambit::Scanner::Plugins](/documentation/code/namespaces/namespacegambit_1_1scanner_1_1plugins/)**  |

## Classes

|                | Name           |
| -------------- | -------------- |
| struct | **[Gambit::Scanner::Plugins::Plugin_Details](/documentation/code/classes/structgambit_1_1scanner_1_1plugins_1_1plugin__details/)** <br>container info for a specific plugin  |
| class | **[Gambit::Scanner::Plugins::Plugin_Details_Ref](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1plugin__details__ref/)**  |

## Detailed Description


Class to hold details of scanner plugins and define simple comparison operations on them.



------------------

Authors (add name and date if you modify): 




## Source code

```
//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//

#ifndef __PLUGIN_DETAILS_HPP
#define __PLUGIN_DETAILS_HPP

#include <vector>
#include "yaml-cpp/yaml.h"

namespace Gambit
{
    
    namespace Scanner
    {
        
        namespace Plugins
        {
            
            struct Plugin_Details
            {
                std::string version;
                int major_version;
                int minor_version;
                int patch_version;
                std::string status;
                std::vector<std::string> reason;
                std::string release_version;
                std::string path;
                std::string plugin;
                std::string type;
                std::string full_string;
                std::vector<std::string> reqd_inifile_entries;
                std::vector<std::string> reqd_not_linked_libs;
                std::vector<std::string> ini_libs_not_found;
                std::multimap<std::string, std::string> linked_libs;
                std::vector<std::string> reqd_incs_not_found;
                std::vector<std::string> ini_incs_not_found;
                std::multimap<std::string, std::string> found_incs;
                mutable YAML::Node flags;
                
                Plugin_Details(){}
                
                std::multimap<std::string, std::string> linked_libraries() const {return linked_libs;}
                
                Plugin_Details(const std::string &str);
                
                void get_status(const YAML::Node &, const YAML::Node &, const YAML::Node &);

                static std::string get_description(const std::vector<const Plugin_Details *> &plugins);
                
                std::string printMin() const;
                
                std::string print() const;
                
                std::string printFull() const;
                
                static std::string printMultiPlugins(const std::vector<const Plugin_Details *> &);
            };
            
            inline bool operator == (const Plugin_Details &plug1, const Plugin_Details &plug2)
            {
                if ((plug1.major_version != plug2.major_version) ||
                    (plug1.major_version != plug2.major_version) ||
                    (plug1.minor_version != plug2.minor_version) ||
                    (plug1.release_version == "" && plug2.release_version != "") ||
                    (plug1.release_version != "" && plug2.release_version == ""))
                {
                    return false;
                }
                
                return true;
            }
            
            class Plugin_Details_Ref
            {
            private:
                mutable const Plugin_Details *details;
                
            public:
                Plugin_Details_Ref() {}
                Plugin_Details_Ref(const Plugin_Details &details) : details(&details) {}
                Plugin_Details_Ref(const Plugin_Details_Ref &details) : details(details.details) {}
                
                //const Plugin_Details_Ref &operator = (const Plugin_Details &details_in) const
                //{
                //    details = &details_in;
                //    return *this;
                //}
                
                const Plugin_Details_Ref &operator = (const Plugin_Details_Ref &details_in) const
                {
                    details = details_in.details;
                    return *this;
                }
                
                //Plugin_Details_Ref &operator = (Plugin_Details &details_in)
                //{
                //    details = &details_in;
                //    return *this;
                //}
                
                Plugin_Details_Ref &operator = (Plugin_Details_Ref &details_in)
                {
                    details = details_in.details;
                    return *this;
                }
                
                operator Plugin_Details &(){return *(Plugin_Details *)details;}
                operator const Plugin_Details &() const {return *details;}
            };
            
            bool Plugin_Version_Supersedes(const Plugin_Details &plug1, const Plugin_Details &plug2);
                                
        }
        
    }
    
}

#endif
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
