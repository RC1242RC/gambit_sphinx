---
title: 'file FlavBit/flav_utils.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::FlavBit](/documentation/code/namespaces/namespacegambit_1_1flavbit/)**  |

## Detailed Description


**Author**: 

  * Marcin Chrzaszcz ([mchrzasz@cern.ch](mailto:mchrzasz@cern.ch)) 
  * Pat Scott ([p.scott@imperial.ac.uk](mailto:p.scott@imperial.ac.uk)) 


**Date**: 

  * 2016 August
  * 2017 Mar


Helper utilities for FlavBit



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef __flav_utils_hpp__
#define __flav_utils_hpp__

#include <boost/numeric/ublas/lu.hpp>
#include <boost/numeric/ublas/matrix.hpp>


namespace Gambit
{

  namespace FlavBit
  {

    template<class T>
    bool InvertMatrix (const ublas::matrix<T>& input, ublas::matrix<T>& inverse)
    {
      using namespace boost::numeric::ublas;
      typedef permutation_matrix<std::size_t> pmatrix;

      // create a working copy of the input
      matrix<T> A(input);
      // create a permutation matrix for the LU-factorization
      pmatrix pm(A.size1());

      // perform LU-factorization
      int res = lu_factorize(A,pm);
      if ( res != 0 ) return false;

      // create identity matrix of "inverse"
      inverse.assign(identity_matrix<T>(A.size1()));

      // backsubstitute to get the inverse
      lu_substitute(A, pm, inverse);

      return true;
    }

  }

}

#endif //#defined __flav_utils_hpp__
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
