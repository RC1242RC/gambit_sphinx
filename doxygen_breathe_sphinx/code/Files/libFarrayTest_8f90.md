---
title: 'file examples/libFarrayTest.f90'

description: "[No description available]"

---






[No description available]

## Namespaces

| Name           |
| -------------- |
| **[testmodule](/documentation/code/namespaces/namespacetestmodule/)**  |

## Classes

|                | Name           |
| -------------- | -------------- |
| interface | **[afunc](/documentation/code/classes/interfaceafunc/)**  |

## Functions

|                | Name           |
| -------------- | -------------- |
| subroutine | **[printstuff](/documentation/code/files/libfarraytest_8f90/#function-printstuff)**() |
| subroutine | **[fillarrays](/documentation/code/files/libfarraytest_8f90/#function-fillarrays)**() |
| subroutine | **[fptrroutine](/documentation/code/files/libfarraytest_8f90/#function-fptrroutine)**(i i, j j, func func) |
| double precision function | **[doublefuncarray](/documentation/code/files/libfarraytest_8f90/#function-doublefuncarray)**(i i) |
| double precision function | **[doublefuncarray2](/documentation/code/files/libfarraytest_8f90/#function-doublefuncarray2)**(i i) |
| double precision function | **[doublefuncarray3](/documentation/code/files/libfarraytest_8f90/#function-doublefuncarray3)**(i i) |
| subroutine | **[testcomplex](/documentation/code/files/libfarraytest_8f90/#function-testcomplex)**(z z, re re, im im) |


## Functions Documentation

### function printstuff

```
subroutine printstuff()
```


### function fillarrays

```
subroutine fillarrays()
```


### function fptrroutine

```
subroutine fptrroutine(
    i i,
    j j,
    func func
)
```


### function doublefuncarray

```
double precision function doublefuncarray(
    i i
)
```


### function doublefuncarray2

```
double precision function doublefuncarray2(
    i i
)
```


### function doublefuncarray3

```
double precision function doublefuncarray3(
    i i
)
```


### function testcomplex

```
subroutine testcomplex(
    z z,
    re re,
    im im
)
```




## Source code

```
module testmodule
  implicit none

  double precision, dimension(-2:0) :: a = (/-2.2, -1.1, 0.0/)
  double precision, dimension(3) :: b = (/1.1,2.2,3.3/)   
  integer :: c = 1
  integer, dimension(1:3,0:1,-1:0) :: d = (reshape((/ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, &
  0, 0/), [3,2,2]))  
  common /commonblock/ a,b,c,d
  
! 5-letter sting 
  character*5 :: chara = 'abc'
! 3-element 1-dimensional array of 5-letter strings
  character*5 charb(3)
! 2x2-element 2-dimensional array of 6-letter strings
  character*6 charc(2,-1:0)
  integer :: e = 6
  common /commonblock2/ chara, charb, charc, e

! complex and double complex types  
  complex :: cpa = (1,2)
  complex*16  :: cpb = (3,4)
  integer :: f = 91
  common /commonblock3/ cpa, cpb, f

end module testmodule

  subroutine printstuff()
    implicit none
    double precision, dimension(-2:0) :: a
    double precision, dimension(3) :: b   
    integer :: c
    integer, dimension(1:3,0:1,-1:0) :: d
    common /commonblock/ a,b,c,d
    character*5 :: chara
    character*5 charb(3)
    character*6 charc(2,-1:0)
    integer :: e
    common /commonblock2/ chara, charb, charc, e
    write(*,*) "commonBlock contents:"     
    write(*,*) "a:    ", a 
    write(*,*) "b:    ", b
    write(*,*) "c:    ", c   
    write(*,*) "d:    ", d       
    write(*,*) "commonBlock2 contents:"   
    write(*,*) "chara:           ", chara 
    write(*,*) "charb([1,2,3]):  ", charb(1),"   ",charb(2),"   ",charb(3)
    write(*,*) "charc(1,[-1,0]): ", charc(1,-1),"   ",charc(1,0)   
    write(*,*) "charc(2,[-1,0]): ", charc(2,-1),"   ",charc(2,0)       
    write(*,*) "e:    ", e
  end subroutine printstuff

  subroutine fillarrays()
    implicit none 
    double precision, dimension(-2:0) :: a
    double precision, dimension(3) :: b   
    integer :: c
    integer, dimension(1:3,0:1,-1:0) :: d
    common /commonblock/ a,b,c,d
    character*5 :: chara
    character*5 charb(3)
    character*6 charc(2,-1:0)
    integer :: e
    common /commonblock2/ chara, charb, charc, e  
    a = (/-2.2, -1.1, 0.0/)  
    b = (/1.1,2.2,3.3/)  
    d(1,0,-1) = -101
    d(1,0,0) = 100    
    d(1,1,-1) = -111
    d(1,1,0) = 110     
    d(2,0,-1) = -201
    d(2,0,0) = 200    
    d(2,1,-1) = -211
    d(2,1,0) = 210      
    d(3,0,-1) = -301
    d(3,0,0) = 300    
    d(3,1,-1) = -311
    d(3,1,0) = 310        
    chara = 'abc'
    charb(1) = "12345"
    charb(2) = "abcde"
    charb(3) = "..."   
    charc(1,-1) = "1,-1"
    charc(1,0)  = "1,0"
    charc(2,-1) = "2,-1"
    charc(2,0)  = "2,0"
  end subroutine fillarrays

  subroutine fptrroutine(i,j,func)
    implicit none
    double precision, dimension(3), intent(inout) :: i
    integer, intent(in) :: j
    interface afunc
      function func (y)
        double precision :: func
        double precision, dimension(3), intent(in) :: y
      end function func
    end interface afunc
    write(*,*) " This is fptrRoutine called with arguments i,j=",i,j,"and a function pointer, func."
    write(*,*) " Setting i(j)=func(i)" 
    i(j) = func(i)
  end subroutine fptrroutine

  double precision function doublefuncarray(i)
    implicit none
    double precision, dimension(3), intent(in) :: i
    write(*,*) " This is doubleFuncArray called with arguments:",i
    write(*,*) " Returning element 2 of the supplied array."   
    doublefuncarray = i(2)
    return
  end function

  double precision function doublefuncarray2(i)
    implicit none
    double precision, dimension(3), intent(in) :: i
    write(*,*) " This is doubleFuncArray2 called with arguments:",i
    write(*,*) " Returning element 2 of the supplied array."   
    doublefuncarray2 = i(2)
    return
  end function
  
  double precision function doublefuncarray3(i)
    implicit none
    double precision, dimension(1:2,2:3), intent(in) :: i
    write(*,*) " This is doubleFuncArray3 called with argument:"
    write(*,*) " i(1,2) = ", i(1,2), " i(1,3) = ", i(1,3) 
    write(*,*) " i(2,2) = ", i(2,2), " i(2,3) = ", i(2,3)     
    doublefuncarray3 = i(1,3)
    return
  end function

  subroutine testcomplex(z, re, im)
    implicit none
    complex(8), intent(in) :: z
    real(8), intent(out) :: re, im

    !Write(*,*) z
    !Write(*,*) Real(z)
    !Write(*,*) Aimag(z)

    re = real(z)
    im = aimag(z)

  end subroutine
    
```


-------------------------------

Updated on 2022-07-20 at 17:18:46 +0000
