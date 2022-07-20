---
title: 'file DecayBit/MSSM_H.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::DecayBit](/documentation/code/namespaces/namespacegambit_1_1decaybit/)**  |
| **[Gambit::DecayBit::MSSM_H](/documentation/code/namespaces/namespacegambit_1_1decaybit_1_1mssm__h/)**  |

## Detailed Description


Higgs boson decays to supersymmetric particles at tree-level from

The Anatomy of Electro-Weak Symmetry Breaking. II: The Higgs bosons in the Minimal Supersymmetric Model Abdelhak Djouadi arXiv:hep-ph/0503173

I refer to equations in v2 ([https://arxiv.org/abs/hep-ph/0503173v2](https://arxiv.org/abs/hep-ph/0503173v2)). 




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef DECAYBIT_INCLUDE_GAMBIT_DECAYBIT_MSSM_H_HPP_
#define DECAYBIT_INCLUDE_GAMBIT_DECAYBIT_MSSM_H_HPP_

#include <cmath>
#include <array>
#include <stdexcept>


namespace Gambit {
  namespace DecayBit {
    namespace MSSM_H {

      double lambda(double x, double y, double z) {
        if (z == 0.) {
          throw std::invalid_argument("z must be greater than zero");
        }

        return pow(1. - x / z - y / z, 2) - 4. * x * y / pow(z, 2);
      }

      double gamma_h_chi_gL(std::array<double, 2> m,
        double gL,
        double mh = 125.,
        double mw = 80.385,
        double GF = 1.1663787e-5) {
        const double eps_2 = 1.;
        const double gR = gL * eps_2;

        // Phase-space

        if (std::fabs(m[0]) + std::fabs(m[1]) >= mh) {
          return 0.;
        }

        const double l = lambda(pow(m[0], 2), pow(m[1], 2), pow(mh, 2));
        if (l <= 0.) {
          return 0.;
        }

        // Eq. 2.56 without common factor (without f$\sin\theta_W\f$ which cancels)
        const double gamma_no_prefactor = std::sqrt(l) * ((
          pow(gL, 2) + pow(gR, 2)) * (1. - (pow(m[0], 2) + pow(m[1], 2)) / pow(mh, 2))
          -4. * gL * gR * m[0] * m[1] / pow(mh, 2));

        // Eq. 2.56 with common factor
        return GF * pow(mw, 2) / (2. * M_SQRT2 * M_PI) * mh * gamma_no_prefactor;
      }

      double gamma_h_chi_0(int i,
        int j,
        std::array<double, 4> m,
        std::array<std::array<double, 4>, 4> Z,
        double alpha,
        double mh = 125.,
        double mw = 80.385,
        double GF = 1.1663787e-5,
        double sw2 = 0.22) {
        // Weinberg angle
        const double tw = std::sqrt(sw2) / std::sqrt(1. - sw2);

        // Eq. 1.113
        const double e2 = -std::sin(alpha);
        const double d2 = -std::cos(alpha);

        // Eq. 1.112 (without \f$\sin\theta_W\f$ which cancels)
        const double gL = 0.5 * (
          (Z[j][1] - tw * Z[j][0]) * (e2 * Z[i][2] + d2 * Z[i][3]) +
          (Z[i][1] - tw * Z[i][0]) * (e2 * Z[j][2] + d2 * Z[j][3]));

        std::array<double, 2> mf{{m[i], m[j]}};
        double gamma = gamma_h_chi_gL(mf, gL, mh, mw, GF);
        if (i == j) {
          gamma *= 0.5;
        }
        return gamma;
      }

      double gamma_h_chi_pm(int i,
        int j,
        std::array<double, 2> m,
        std::array<std::array<double, 2>, 2> U,
        std::array<std::array<double, 2>, 2> V,
        double alpha,
        double mh = 125.,
        double mw = 80.385,
        double GF = 1.1663787e-5) {
        // Eq. 1.113
        const double e2 = -std::sin(alpha);
        const double d2 = -std::cos(alpha);

        // Eq. 1.111 (without \f$\sin\theta_W\f$ which cancels)
        const double gL = M_SQRT1_2 *
          (e2 * V[j][0] * U[i][1] - d2 * V[j][1] * U[i][0]);

        std::array<double, 2> mf{{m[i], m[j]}};
        return gamma_h_chi_gL(mf, gL, mh, mw, GF);
      }

      double gamma_h_chi(std::array<double, 2> m_pm,
        std::array<double, 4> m_0,
        std::array<std::array<double, 2>, 2> U,
        std::array<std::array<double, 2>, 2> V,
        std::array<std::array<double, 4>, 4> Z,
        double alpha,
        double mh = 125.,
        double mw = 80.385,
        double GF = 1.1663787e-5,
        double sw2 = 0.22) {
          double gamma = 0.;

          for (int i = 0; i <= 3; i += 1) {
            // Do not double count e.g. 12 and 21 - they are not distinct
            for (int j = i; j <= 3; j += 1) {
              gamma += MSSM_H::gamma_h_chi_0(i, j, m_0, Z, alpha, mh, mw, GF, sw2);
            }
          }

          for (int i = 0; i <= 1; i += 1) {
            // Do count e.g. 12 and 21 - they are distinct
            for (int j = 0; j <= 1; j += 1) {
              gamma += MSSM_H::gamma_h_chi_pm(i, j, m_pm, U, V, alpha, mh, mw, GF);
            }
          }

          return gamma;
        }

    }  // namespace MSSM_H
  }  // namespace DecayBit
}  // namespace Gambit

#endif  //  DECAYBIT_INCLUDE_GAMBIT_DECAYBIT_MSSM_H_HPP_
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
