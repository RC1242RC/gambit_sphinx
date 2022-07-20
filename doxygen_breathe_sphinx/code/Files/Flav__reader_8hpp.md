---
title: 'file FlavBit/Flav_reader.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::FlavBit](/documentation/code/namespaces/namespacegambit_1_1flavbit/)**  |

## Classes

|                | Name           |
| -------------- | -------------- |
| class | **[Gambit::FlavBit::Flav_reader](/documentation/code/classes/classgambit_1_1flavbit_1_1flav__reader/)** <br>Reader class for FlavBit YAML database.  |

## Detailed Description


**Author**: 

  * Marcin Chrzaszcz ([mchrzasz@cern.ch](mailto:mchrzasz@cern.ch)) 
  * Pat Scott ([p.scott@imperial.ac.uk](mailto:p.scott@imperial.ac.uk)) 


**Date**: 

  * 2016 August
  * 2017 Mar


Declaration of reader class for FlavBit YAML database.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef __Flav_reader_hpp__
#define __Flav_reader_hpp__

#include "yaml-cpp/yaml.h"
#include "gambit/FlavBit/FlavBit_types.hpp"
#include "gambit/Utils/util_types.hpp"

#include <boost/numeric/ublas/lu.hpp>
#include <boost/numeric/ublas/matrix.hpp>


namespace Gambit
{

  namespace FlavBit
  {

    class Flav_reader
    {

      private:

        std::vector<Measurement> measurements;
        str measurement_location;
        bool use_P;
        bool use_S;
        bool debug;

        int get_measurement_for_corr(str);

        void check_corr_matrix(boost::numeric::ublas::matrix<double>&);

        void print(Measurement);

        boost::numeric::ublas::matrix<double> M_measurements;
        boost::numeric::ublas::matrix<double> M_cor_cov;
        boost::numeric::ublas::matrix< std::pair<double, bool> > M_th_err;

      public:

        int number_measurements;

        Flav_reader(str loc);

        void read_yaml(str name);

        void read_yaml_measurement(str name, str measurement_name);

        void initialise_matrices();

        void print_matrix(boost::numeric::ublas::matrix<double>&, str, bool is_true_matrix = true);

        void print_matrix(boost::numeric::ublas::matrix< std::pair<double, bool> >&, str, bool is_true_matrix = true);

        void debug_mode(bool k) {debug = k;}

        boost::numeric::ublas::matrix<double> get_exp_cov() {return M_cor_cov;};

        boost::numeric::ublas::matrix<double> get_exp_value() {return M_measurements;};

        boost::numeric::ublas::matrix< std::pair<double,bool> > get_th_err() {return M_th_err;};

        static double get_error_from_confidence_levels(double, double, double, bool);

    };

  }

}

#endif //#defined __Flav_reader_hpp__
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
