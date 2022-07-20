---
title: 'file DecayBit/MSSM_Z.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::DecayBit](/documentation/code/namespaces/namespacegambit_1_1decaybit/)**  |
| **[Gambit::DecayBit::MSSM_Z](/documentation/code/namespaces/namespacegambit_1_1decaybit_1_1mssm__z/)**  |

## Detailed Description


Z boson decays to supersymmetric particles at tree-level 




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef DECAYBIT_INCLUDE_GAMBIT_DECAYBIT_MSSM_Z_HPP_
#define DECAYBIT_INCLUDE_GAMBIT_DECAYBIT_MSSM_Z_HPP_

#include <array>
#include <cmath>

namespace Gambit {
  namespace DecayBit {
    namespace MSSM_Z {

      double gamma_chi_0(int i,
        int j,
        std::array<double, 4> m,
        std::array<std::array<double, 4>, 4> Z,
        double g2 = 0.652,
        double MZ = 91.,
        double sw2 = 0.22) {
        const double p2 = (pow(MZ, 2) - pow(m[i] + m[j], 2)) *
          (pow(MZ, 2) - pow(m[i] - m[j], 2)) / (4. * pow(MZ, 2));
        const double ei = (pow(MZ, 2) - pow(m[j], 2) + pow(m[i], 2)) / (2. * MZ);
        const double ej = (pow(MZ, 2) - pow(m[i], 2) + pow(m[j], 2)) / (2. * MZ);

        if (!(p2 > 0. && ei > 0. && ej > 0.)) {
          return 0.;
        }

        const double cw = std::sqrt(1. - sw2);

        const double gz = g2 / (2. * cw) * (Z[i][2] * Z[j][2] - Z[i][3] * Z[j][3]);
        double gamma = sqrt(p2) / (2. * M_PI * pow(MZ, 2)) * pow(gz, 2) *
          (ei * ej + p2 / 3. - m[i] * m[j]);

        if (i == j) {
          gamma *= 0.5;
        }

        return gamma;
      }
    }  // namespace MSSM_Z
  }  // namespace DecayBit
}  // namespace Gambit

#endif  //  DECAYBIT_INCLUDE_GAMBIT_DECAYBIT_MSSM_Z_HPP_
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
