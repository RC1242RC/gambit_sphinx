---
title: 'file examples/libfortran.f90'

description: "[No description available]"

---






[No description available]

## Functions

|                | Name           |
| -------------- | -------------- |
| subroutine | **[testme](/documentation/code/files/libfortran_8f90/#function-testme)**() |
| subroutine | **[runme](/documentation/code/files/libfortran_8f90/#function-runme)**(f f, i i) |
| subroutine | **[externalroutine](/documentation/code/files/libfortran_8f90/#function-externalroutine)**(i i) |
| real *8 function | **[externalfunction](/documentation/code/files/libfortran_8f90/#function-externalfunction)**(i i) |
| real *8 function | **[externalfunction2](/documentation/code/files/libfortran_8f90/#function-externalfunction2)**(i i, j j) |
| real *8 function | **[average](/documentation/code/files/libfortran_8f90/#function-average)**(f f, n n) |
| real *8 function | **[funcgauss](/documentation/code/files/libfortran_8f90/#function-funcgauss)**(x x) |
| real *8 function | **[funcbe](/documentation/code/files/libfortran_8f90/#function-funcbe)**(x x) |


## Functions Documentation

### function testme

```
subroutine testme()
```


### function runme

```
subroutine runme(
    f f,
    i i
)
```


### function externalroutine

```
subroutine externalroutine(
    i i
)
```


### function externalfunction

```
real *8 function externalfunction(
    i i
)
```


### function externalfunction2

```
real *8 function externalfunction2(
    i i,
    j j
)
```


### function average

```
real *8 function average(
    f f,
    n n
)
```


### function funcgauss

```
real *8 function funcgauss(
    x x
)
```


### function funcbe

```
real *8 function funcbe(
    x x
)
```




## Source code

```
!
! Dummy-code used as an example of an external Fortran library
! that can be accessed in GAMBIT via a C++ backend
!
! Author: Anders Kvellestad
!

subroutine testme()
  write(*,*) "This is testMe. Not much happens here." 
end subroutine testme


subroutine runme(f, i)
  external f
  real*8 f,f_res
  integer i

  write(*,*) "This is runMe. Calling externalRoutine with arguments:",i
  f_res = f(i)
  write(*,*) "This is runMe. Got result by reference:",f_res
  f_res = f(10)
  write(*,*) "This is runMe. Got literal result:",f_res
  
end subroutine runme


subroutine externalroutine(i)
  write(*,*) " This is externalRoutine called with arguments:",i
end subroutine externalroutine


real*8 function externalfunction(i)
  write(*,*) " This is externalFunction called with arguments:",i
  externalfunction = i*3.14
  return
end function

real*8 function externalfunction2(i,j)
  integer i
  real*8 j
  write(*,*) " This is externalFunction2 called with arguments:",i,j
  externalfunction2 = i*3.14 + j
  return
end function


! Tests for Torsten

!... this is the backend library for libav.a
!...determine "average" of f (over interval [0,1])
real*8 function average(f,n)
    implicit none
    real*8 f
    external f
    integer i,n
    real*8 x

    average=0d0
    do i=1,n
    call random_number(x)
    average=average+f(x)
    enddo  
    average=average/(1.*n)  

    return
end function


!... These are some example functions that could of course also be
!... provided by either another backend or some c++ function internal to GAMBIT

real*8 function funcgauss(x)
    implicit none
    real*8 x

    funcgauss=exp(-x**2)/sqrt(3.141592654)

    return
end function

real*8 function funcbe(x)
    implicit none
    real*8 x

    funcbe=0d0
    if (x.le.0d0) return
    funcbe=1./(1.+exp(x))/log(2.)

    return
end function
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
