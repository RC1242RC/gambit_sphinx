---
title: 'file priors/dummy.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::Priors](/documentation/code/namespaces/namespacegambit_1_1priors/)**  |

## Classes

|                | Name           |
| -------------- | -------------- |
| class | **[Gambit::Priors::Dummy](/documentation/code/classes/classgambit_1_1priors_1_1dummy/)**  |
| class | **[Gambit::Priors::None](/documentation/code/classes/classgambit_1_1priors_1_1none/)**  |

## Detailed Description


declaration for scanner module



------------------

Authors (add name and date if you modify): 




## Source code

```
//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//

#ifndef DUMMY_PRIOR_HPP
#define DUMMY_PRIOR_HPP

#include <algorithm>

#include "gambit/ScannerBit/priors.hpp"


namespace Gambit
{
    namespace Priors
    {
        class Dummy : public BasePrior
        {
        private:

        public:
            // Constructor
            Dummy(const std::vector<std::string>& param, const Options&) : BasePrior(param, param.size())
            {
            }

            void transform(const std::vector<double> &unitpars, std::unordered_map<std::string, double> &outputMap) const override
            {
                auto it_vec = unitpars.begin();
                for (auto it = param_names.begin(), end = param_names.end(); it != end; it++)
                {
                    outputMap[*it] = *(it_vec++);
                }
            }

            std::vector<double> inverse_transform(const std::unordered_map<std::string, double> &physical) const override
            {
                std::vector<double> u;
                for (const auto& n : param_names)
                {
                    u.push_back(physical.at(n));
                }
                return u;
            }

        };

        class None : public BasePrior
        {
        private:

        public:
            None(const std::vector<std::string>& param, const Options&) : BasePrior(param)
            {
            }

            void transform(const std::vector<double> &, std::unordered_map<std::string, double> &outputMap) const override
            {
                for (auto it = param_names.begin(), end = param_names.end(); it != end; it++)
                {
                    if (outputMap.find(*it) == outputMap.end())
                    {
                        scan_err << "Parameter " << *it << " prior is specified as 'none'"
                                 << " and the scanner has not inputed a value for it."
                                 << scan_end;
                    }
                }
            }

            std::vector<double> inverse_transform(const std::unordered_map<std::string, double> &) const override
            {
              scan_err << "'None' prior has no inverse transform" << scan_end;
              return {};
            }


        };

        LOAD_PRIOR(dummy, Dummy)
        LOAD_PRIOR(none, None)
    }
}

#endif
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000
