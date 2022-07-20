---
title: 'namespace Gambit::DecayBit::MSSM_H'

description: "[No description available]"

---






[No description available]

## Functions

|                | Name           |
| -------------- | -------------- |
| double | **[lambda](/documentation/code/namespaces/namespacegambit_1_1decaybit_1_1mssm__h/#function-lambda)**(double x, double y, double z) |
| double | **[gamma_h_chi_gL](/documentation/code/namespaces/namespacegambit_1_1decaybit_1_1mssm__h/#function-gamma-h-chi-gl)**(std::array< double, 2 > m, double gL, double mh =125., double mw =80.385, double GF =1.1663787e-5) |
| double | **[gamma_h_chi_0](/documentation/code/namespaces/namespacegambit_1_1decaybit_1_1mssm__h/#function-gamma-h-chi-0)**(int i, int j, std::array< double, 4 > m, std::array< std::array< double, 4 >, 4 > Z, double alpha, double mh =125., double mw =80.385, double GF =1.1663787e-5, double sw2 =0.22) |
| double | **[gamma_h_chi_pm](/documentation/code/namespaces/namespacegambit_1_1decaybit_1_1mssm__h/#function-gamma-h-chi-pm)**(int i, int j, std::array< double, 2 > m, std::array< std::array< double, 2 >, 2 > U, std::array< std::array< double, 2 >, 2 > V, double alpha, double mh =125., double mw =80.385, double GF =1.1663787e-5) |
| double | **[gamma_h_chi](/documentation/code/namespaces/namespacegambit_1_1decaybit_1_1mssm__h/#function-gamma-h-chi)**(std::array< double, 2 > m_pm, std::array< double, 4 > m_0, std::array< std::array< double, 2 >, 2 > U, std::array< std::array< double, 2 >, 2 > V, std::array< std::array< double, 4 >, 4 > Z, double alpha, double mh =125., double mw =80.385, double GF =1.1663787e-5, double sw2 =0.22) |


## Functions Documentation

### function lambda

```
double lambda(
    double x,
    double y,
    double z
)
```


Phase-space function (similar to Kallen function)

\[ \lambda(x, y; z) = (1 - x / z - y / z)^2 - 4 x y / z^2 \]


### function gamma_h_chi_gL

```
double gamma_h_chi_gL(
    std::array< double, 2 > m,
    double gL,
    double mh =125.,
    double mw =80.385,
    double GF =1.1663787e-5
)
```


Eq. 2.56 for charginos or neutralinos \(\Gamma(h \to \chi_i \chi_j)\) in GeV 

mMasses of final state particles 

gLCoupling \(g_L\) in Eq. 1.112 

mhLightest Higgs mass, \(m_h\)

mwW-boson mass, \(M_W\)

GFFermi constant, \(G_F\)


### function gamma_h_chi_0

```
double gamma_h_chi_0(
    int i,
    int j,
    std::array< double, 4 > m,
    std::array< std::array< double, 4 >, 4 > Z,
    double alpha,
    double mh =125.,
    double mw =80.385,
    double GF =1.1663787e-5,
    double sw2 =0.22
)
```


Lightest Higgs boson decay to neutralinos at tree-level in GeV

Arguments \(i\) and \(j\) are zero-based 

Tree-level formula

\(\Gamma(h \to \chi_i \chi_j)\) in GeV 

iNeutralino \(\chi_i\) in final state 

jNeutralino \(\chi_j\) in final state 

mNeutralino mases with phases 

ZReal neutralino mixing matrix 

alpha\(\alpha\), Higgs mixing angle 

mhLightest Higgs mass, \(m_h\)

mwW-boson mass, \(M_W\)

GFFermi constant, \(G_F\)

sw2Weinberg angle, \(\sin^2\theta_W\)


### function gamma_h_chi_pm

```
double gamma_h_chi_pm(
    int i,
    int j,
    std::array< double, 2 > m,
    std::array< std::array< double, 2 >, 2 > U,
    std::array< std::array< double, 2 >, 2 > V,
    double alpha,
    double mh =125.,
    double mw =80.385,
    double GF =1.1663787e-5
)
```


Lightest Higgs boson decay to charginos at tree-level in GeV

Arguments \(i\) and \(j\) are zero-based 

Tree-level formula

\(\Gamma(h \to \chi^-_i \chi^+_j)\) in GeV 

iNegative chargino \(\chi^-_i\) in final state 

jPositive chargino \(\chi^+_j\) in final state 

mChargino masses 

UReal chargino mixing matrix 

VReal chargino mixing matrix 

alpha\(\alpha\), Higgs mixing angle 

mhLightest Higgs mass, \(m_h\)

mwW-boson mass, \(M_W\)

GFFermi constant, \(G_F\)


### function gamma_h_chi

```
double gamma_h_chi(
    std::array< double, 2 > m_pm,
    std::array< double, 4 > m_0,
    std::array< std::array< double, 2 >, 2 > U,
    std::array< std::array< double, 2 >, 2 > V,
    std::array< std::array< double, 4 >, 4 > Z,
    double alpha,
    double mh =125.,
    double mw =80.385,
    double GF =1.1663787e-5,
    double sw2 =0.22
)
```


Lightest Higgs boson decay to neutralinos and charginos at tree-level in GeV

Tree-level formula

\(\Gamma(h \to \chi\chi)\) in GeV 

m_pmChargino masses 

m_0Neutralino mases with phases 

UReal chargino mixing matrix 

VReal chargino mixing matrix 

ZReal neutralino mixing matrix 

alpha\(\alpha\), Higgs mixing angle 

mhLightest Higgs mass, \(m_h\)

mwW-boson mass, \(M_W\)

GFFermi constant, \(G_F\)

sw2Weinberg angle, \(\sin^2\theta_W\)






-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000