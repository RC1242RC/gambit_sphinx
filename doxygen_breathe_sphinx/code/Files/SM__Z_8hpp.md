---
title: 'file DecayBit/SM_Z.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::DecayBit](/documentation/code/namespaces/namespacegambit_1_1decaybit/)**  |
| **[Gambit::DecayBit::SM_Z](/documentation/code/namespaces/namespacegambit_1_1decaybit_1_1sm__z/)**  |

## Classes

|                | Name           |
| -------------- | -------------- |
| class | **[Gambit::DecayBit::SM_Z::TwoLoop](/documentation/code/classes/classgambit_1_1decaybit_1_1sm__z_1_1twoloop/)**  |

## Detailed Description


The \(Z\)-boson observables at two-loop from

Complete electroweak two-loop corrections to \(Z\) boson production and decay Ievgen Dubovyk, Ayres Freitas, Janusz Gluza, Tord Riemann, Johann Usovitsch arXiv:1804.10236

I refer to tables and equations in v1 ([https://arxiv.org/pdf/1804.10236v1](https://arxiv.org/pdf/1804.10236v1)). 




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef DECAYBIT_INCLUDE_GAMBIT_DECAYBIT_SM_Z_HPP_
#define DECAYBIT_INCLUDE_GAMBIT_DECAYBIT_SM_Z_HPP_

#include <cmath>
#include <iostream>

namespace Gambit {
  namespace DecayBit {
    namespace SM_Z {

      constexpr struct {
        const double mu = 499.0e-3;
        const double sigma = 1.5e-3;
      } gamma_inv;


      constexpr struct {
        const double mh_OS = 125.7;  // GeV
        const double mt_OS = 173.2;
        const double MZ_OS = 91.1876;
        const double alpha_s_MSbar_MZ = 0.1184;
        const double delta_alpha_OS = 0.059;
      } hat;

      constexpr int kRows = 12;
      constexpr int kCols = 9;
      constexpr double table_5[kRows][kCols] = {
        {83.983e-3, -0.061e-3, 0.810e-3, -0.096e-3, -0.01e-3, 0.25e-3, -1.1e-3, 286e-3, 0.001e-3},
        {83.793e-3, -0.060e-3, 0.810e-3, -0.095e-3, -0.01e-3, 0.25e-3, -1.1e-3, 285.e-3, 0.001e-3},
        {167.176e-3, -0.071e-3, 1.26e-3, -0.19e-3, -0.02e-3, 0.36e-3, -0.1e-3, 504.e-3, 0.001e-3},
        {299.993e-3, -0.38e-3, 4.08e-3, 14.27e-3, 1.6e-3, 1.8e-3, -11.1e-3, 1253.e-3, 0.002e-3},
        {299.916e-3, -0.38e-3, 4.08e-3, 14.27e-3, 1.6e-3, 1.8e-3, -11.1e-3, 1253.e-3, 0.002e-3},
        {382.828e-3, -0.39e-3, 3.83e-3, 10.20e-3, -2.4e-3, 0.67e-3, -10.1e-3, 1470.e-3, 0.002e-3},
        {375.889e-3, -0.36e-3, -2.14e-3, 10.53e-3, -2.4e-3, 1.2e-3, -10.1e-3, 1459.e-3, 0.006e-3},
        {2494.74e-3, -2.3e-3, 19.9e-3, 58.61e-3, -4.0e-3, 8.0e-3, -56.0e-3, 9273.e-3, 0.012e-3},
        {20751.6, -7.8, -37., 732.3, -44, 5.5, -358, 11696., 0.1 },
        {172.22, -0.031, 1.0, 2.3, 1.3, 0.38, -1.2, 37., 0.01},
        {215.85, 0.029, -2.92, -1.32, -0.84, 0.032, 0.72, -18., 0.01},
        {41489.6, 1.6, 60.0, -579.6, 38., 7.3, 85., 0.1},
      };

      constexpr double table_6[kRows] =
        {0.018e-3, 0.018e-3, 0.016e-3, 0.11e-3, 0.11e-3, 0.08e-3, 0.18e-3, 0.4e-3, 6.e-3, 5.e-5, 1.e-4, 6.};


      class TwoLoop {
       public:
        // Partial widths in GeV
        double gamma_e() const {return observable(0);}
        double gamma_mu() const {return gamma_e();}
        double gamma_tau() const {return observable(1);}
        double gamma_nu_e() const {return observable(2);}
        double gamma_nu_mu() const {return gamma_nu_e();}
        double gamma_inv() const {return 3. * gamma_nu_e();}
        double gamma_nu_tau() const {return observable(2);}
        double gamma_u() const {return observable(3);}
        double gamma_c() const {return observable(4);}
        double gamma_t() const {return 0.;}
        double gamma_d() const {return observable(5);}
        double gamma_s() const {return gamma_d();}
        double gamma_b() const {return observable(6);}
        double gamma_total() const {return observable(7);}

        // Residual theory error in partial widths in GeV
        double error_gamma_e() const {return error(0);}
        double error_gamma_mu() const {return error_gamma_e();}
        double error_gamma_tau() const {return error(1);}
        double error_gamma_nu_e() const {return error(2);}
        double error_gamma_nu_mu() const {return error_gamma_nu_e();}
        double error_gamma_inv() const {return 3. * error_gamma_nu_e();}
        double error_gamma_nu_tau() const {return error(2);}
        double error_gamma_u() const {return error(3);}
        double error_gamma_c() const {return error(4);}
        double error_gamma_t() const {return 0.;}
        double error_gamma_d() const {return error(5);}
        double error_gamma_s() const {return error_gamma_d();}
        double error_gamma_b() const {return error(6);}
        double error_gamma_total() const {return error(7);}

        // Branching ratios
        double BR_e() const {return BR(0);}
        double BR_mu() const {return BR_e();}
        double BR_tau() const {return BR(1);}
        double BR_nu_e() const {return BR(2);}
        double BR_nu_mu() const {return BR_nu_e();}
        double BR_inv() const {return 3. * BR_nu_e();}
        double BR_nu_tau() const {return BR(2);}
        double BR_u() const {return BR(3);}
        double BR_c() const {return BR(4);}
        double BR_t() const {return 0.;}
        double BR_d() const {return BR(5);}
        double BR_s() const {return BR_d();}
        double BR_b() const {return BR(6);}

        // Residual theory error in branching ratios
        double error_BR_e() const {return error_BR(0);}
        double error_BR_mu() const {return error_BR_e();}
        double error_BR_tau() const {return error_BR(1);}
        double error_BR_nu_e() const {return error_BR(2);}
        double error_BR_nu_mu() const {return error_BR_nu_e();}
        double error_BR_inv() const {return 3. * error_BR_nu_e();}
        double error_BR_nu_tau() const {return error_BR(2);}
        double error_BR_u() const {return error_BR(3);}
        double error_BR_c() const {return error_BR(4);}
        double error_BR_t() const {return 0.;}
        double error_BR_d() const {return error_BR(5);}
        double error_BR_s() const {return error_BR_d();}
        double error_BR_b() const {return error_BR(6);}

        // Ratios of partial widths, defined in eq. 27
        double Rl() const {return 1.e-3 * observable(8);}
        double Rc() const {return 1.e-3 * observable(9);}
        double Rb() const {return 1.e-3 * observable(10);}

        // Residual theory error in ratios of partial widths
        double error_Rl() const {return 1.e-3 * error(8);}
        double error_Rc() const {return 1.e-3 * error(9);}
        double error_Rb() const {return 1.e-3 * error(10);}

        // Hadronic peak cross section in pb, defined in eq. 10
        double sigma_0_had() const {return observable(11);}

        // Residual theory error in hadronic peak cross section in pb
        double error_sigma_0_had() const {return error(11);}

        // Nuisance parameters
        double mh_OS;
        double mt_OS;
        double MZ_OS;
        double alpha_s_MSbar_MZ;
        double delta_alpha_OS;

        bool nuisances_outside_ranges() {
          return !((std::fabs(mh_OS - 125.1) < 5.) &&
                   (std::fabs(mt_OS - 173.2) < 4.) &&
                   (std::fabs(alpha_s_MSbar_MZ - 0.1184) < 0.005) &&
                   (std::fabs(delta_alpha_OS - 0.059) < 0.0005) &&
                   (std::fabs(MZ_OS - 91.1876) < 0.0042));
        }

        TwoLoop(double mh_OS = hat.mh_OS,
                double mt_OS = hat.mt_OS,
                double MZ_OS = hat.MZ_OS,
                double alpha_s_MSbar_MZ = hat.alpha_s_MSbar_MZ,
                double delta_alpha_OS = hat.delta_alpha_OS):
          mh_OS{mh_OS},
          mt_OS{mt_OS},
          MZ_OS{MZ_OS},
          alpha_s_MSbar_MZ{alpha_s_MSbar_MZ},
          delta_alpha_OS{delta_alpha_OS}
          {
          if (nuisances_outside_ranges()) {
            std::cerr << "SM nuisance parameters outside range of validity for "
                         "two-loop Z formulas. Not accounting for variation in "
                         "SM nuisance parameters" << std::endl;
            L_H = 0.;
            delta_t = 0.;
            delta_z = 0.;
            delta_alpha_s = 0.;
            delta_delta_alpha = 0.;
          } else {
            L_H = std::log(mh_OS / hat.mh_OS);
            delta_t = pow(mt_OS / hat.mt_OS, 2) - 1.;
            delta_z = MZ_OS / hat.MZ_OS - 1.;
            delta_alpha_s = alpha_s_MSbar_MZ / hat.alpha_s_MSbar_MZ - 1.;
            delta_delta_alpha = delta_alpha_OS / hat.delta_alpha_OS - 1.;
          }
        }

       private:
        double L_H;
        double delta_t;
        double delta_z;
        double delta_alpha_s;
        double delta_delta_alpha;

        double error(int row) const {
          return std::sqrt(pow(table_5[row][8], 2) + pow(table_6[row], 2));
        }

        double observable(int row) const {
          return table_5[row][0] +
                 table_5[row][1] * L_H +
                 table_5[row][2] * delta_t +
                 table_5[row][3] * delta_alpha_s +
                 table_5[row][4] * pow(delta_alpha_s, 2) +
                 table_5[row][5] * delta_alpha_s * delta_t +
                 table_5[row][6] * delta_delta_alpha +
                 table_5[row][7] * delta_z;
        }

        double BR(int row) const {
          /*
            @param row Row number of Table 7 corresponding to quantity
            @returns Branching ratio
          */
          return observable(row) / gamma_total();
        }

        double error_BR(int row) const {
          const double frac_error_sq = pow(error_gamma_total() / gamma_total(), 2)
            + pow(error(row) / observable(row), 2);
          return std::sqrt(frac_error_sq) * BR(row);
        }
      };

    }  // namespace SM_Z
  }  // namespace DecayBit
}  // namespace Gambit

#endif  //  DECAYBIT_INCLUDE_GAMBIT_DECAYBIT_SM_Z_HPP_
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
