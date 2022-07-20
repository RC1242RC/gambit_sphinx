---
title: 'file ScannerBit/plugin_comparators.hpp'

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
| class | **[Gambit::Scanner::Plugins::VersionCompareBase](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1versioncomparebase/)** <br>Base class for comparing scanner plugins.  |
| class | **[Gambit::Scanner::Plugins::VersionCompareBottom](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1versioncomparebottom/)**  |
| class | **[Gambit::Scanner::Plugins::VersionCompare](/documentation/code/classes/classgambit_1_1scanner_1_1plugins_1_1versioncompare/)**  |

## Detailed Description


Advanced comparison utilities for scanner plugins.



------------------

Authors (add name and date if you modify): 




## Source code

```
//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//

#ifndef __PLUGIN_COMPARATORS_HPP
#define __PLUGIN_COMPARATORS_HPP

#include <string>

#include "gambit/ScannerBit/plugin_details.hpp"

namespace Gambit
{

        namespace Scanner
        {

                namespace Plugins
                {
                        
                        class VersionCompareBase
                        {
                        private:
                                bool empty;

                        public:
                                VersionCompareBase() : empty(false) {}                
                                virtual bool operator() (const Plugin_Details &) = 0;
                                bool isEmpty() const {return empty;}
                                void setEmpty(bool in) {empty = in;}
                                virtual ~VersionCompareBase() {}
                        };
                        
                        class VersionCompareBottom : public VersionCompareBase
                        {
                        private:
                                constexpr static unsigned char GREATER = 0x01;
                                static const unsigned char EQUAL = 0x02;
                                static const unsigned char LESS = 0x04;
                                static const unsigned char NEG = 0x08;
                                static const unsigned char MAJOR = 0x10;
                                static const unsigned char MINOR = 0x20;
                                static const unsigned char PATCH = 0x40;
                                static const unsigned char RELEASE = 0x80;
                                unsigned int major_version;
                                unsigned int minor_version;
                                unsigned int patch_version;
                                std::string release_version;
                                bool (*f)(int, int);
                                unsigned char flag;
                                
                                static bool gt (int a, int b) {return a > b;}
                                static bool lt (int a, int b) {return a < b;}
                                static bool gte (int a, int b) {return a >= b;}
                                static bool lte (int a, int b) {return a <= b;}
                                static bool eq (int a, int b) {return a == b;}
                                static bool neq (int a, int b) {return a != b;}
                                
                        public:                        
                                VersionCompareBottom (const std::string&);
                                bool operator() (const Plugin_Details&);
                        };
                        
                        class VersionCompare : public VersionCompareBase
                        {
                        private:
                                static const unsigned char OR = 0x02;
                                static const unsigned char AND = 0x04;                        
                                VersionCompareBase *compare1;
                                VersionCompareBase *compare2;
                                unsigned char flag;
                                
                        public:
                                VersionCompare(const std::string&);                        
                                bool operator() (const Plugin_Details&);
                                ~VersionCompare();
                        };
                        
                }

        }

}

#endif
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
