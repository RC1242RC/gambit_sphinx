---
title: 'file limits/PointsAndLines.hpp'

description: "[No description available]"

---






[No description available]

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::ColliderBit](/documentation/code/namespaces/namespacegambit_1_1colliderbit/)**  |

## Classes

|                | Name           |
| -------------- | -------------- |
| class | **[Gambit::ColliderBit::P2](/documentation/code/classes/classgambit_1_1colliderbit_1_1p2/)** <br>A simple container for a point on an xy plane.  |
| class | **[Gambit::ColliderBit::LineSegment](/documentation/code/classes/classgambit_1_1colliderbit_1_1linesegment/)** <br>A simple container for a line segment on an xy plane.  |




## Source code

```
#pragma once
#include <cmath>
#include <sstream>
#include <iostream>
#include <limits>

namespace Gambit {
  namespace ColliderBit {


    inline double addInQuad(const double& a, const double& b) { return sqrt(a*a + b*b); }


    class P2 {

      private:
        double _x, _y;


      public:
        P2() : _x(0.), _y(0.) { }
        P2(double x, double y) : _x(x), _y(y) { }
        P2(const P2& other) : _x(other.getx()), _y(other.gety()) { }
        P2& operator = (const P2& other) { _x = other.getx(); _y = other.gety(); return *this; }


      public:
        P2& setx(double x) { _x = x; return *this; }
        P2& sety(double y) { _y = y; return *this; }
        P2& setxy(double x, double y) { _x = x; _y = y; return *this; }


      public:
        double getx() const { return _x; }
        double gety() const { return _y; }
        double abs() const { return addInQuad(_x, _y); }
        double r() const { return addInQuad(_x, _y); }


      public:
        P2& operator += (const P2& other) { _x += other.getx(); _y += other.gety(); return *this; }
        P2& operator -= (const P2& other) { _x -= other.getx(); _y -= other.gety(); return *this; }
        P2& operator *= (double a) { _x *= a; _y *= a; return *this; }
        P2& operator /= (double a) { _x /= a; _y /= a; return *this; }
    };


      inline P2 operator + (const P2& a, const P2& b) { P2 rtn = a; return rtn += b; }
      inline P2 operator - (const P2& a, const P2& b) { P2 rtn = a; return rtn -= b; }
      inline P2 operator * (const P2& a, double f) { P2 rtn = a; return rtn *= f; }
      inline P2 operator * (double f, const P2& a) { P2 rtn = a; return rtn *= f; }
      inline P2 operator / (const P2& a, double f) { P2 rtn = a; return rtn /= f; }

      inline std::string to_str(const P2& p2) {
        std::stringstream ss;
        ss << "(" << p2.getx() << ", " << p2.gety() << ")";
        return ss.str();
      }
      inline std::ostream& operator <<(std::ostream& ostr, const P2& p2) {
        ostr << to_str(p2);
        return ostr;
      }


    class LineSegment {

      private:
        P2 _p1, _p2, _diff;


      public:
        void init(double x1, double y1, double x2, double y2, double extendFrac=-1.) {
          P2 rawpt1, rawpt2, extendEnds;
          if (x1 > x2 or (x1 == x2 and y1 > y2)) {
            rawpt2.setxy(x1, y1);
            rawpt1.setxy(x2, y2);
          } else {
            rawpt1.setxy(x1, y1);
            rawpt2.setxy(x2, y2);
          }
          if(extendFrac > 0.) {
            extendEnds = (rawpt2 - rawpt1) * extendFrac;
            _p2 = rawpt2 + extendEnds;
            _p1 = rawpt1 - extendEnds;
          } else {
            _p2 = rawpt2;
            _p1 = rawpt1;
          }
          _diff = _p2 - _p1;
        }

        void init(const P2& p1, const P2& p2, double extendFrac=-1.) {
          init(p1.getx(), p1.gety(), p2.getx(), p2.gety(), extendFrac);
        }

        LineSegment() {
          init(0., 0., 0., 0.);
        }

        LineSegment(double x1, double y1, double x2, double y2, double extendFrac=-1.) {
          init(x1, y1, x2, y2, extendFrac);
        }

        LineSegment(const P2& p1, const P2& p2, double extendFrac=0.) {
          init(p1, p2, extendFrac);
        }

        LineSegment(const LineSegment& other) {
          _p1 = other.getp1();
          _p2 = other.getp2();
          _diff = _p2 - _p1;
        }

        LineSegment& operator = (const LineSegment& other) {
          _p1 = other.getp1();
          _p2 = other.getp2();
          _diff = _p2 - _p1;
          return *this;
        }


      public:
        const P2 getp1() const { return _p1; }
        const P2 getp2() const { return _p2; }

        double slope() const {
          if (_p1.getx() == _p2.getx())
            return std::numeric_limits<double>::infinity();
          else
            return _diff.gety() / _diff.getx();
        }
        double m() const { return slope(); }

        double intercept() const {
          if (_p1.getx() == _p2.getx())
            return std::numeric_limits<double>::infinity();
          else
            return _p1.gety() - m() * _p1.getx();
        }
        double b() const { return intercept(); }

        double abs() const { return _diff.abs(); }
        double r() const { return abs(); }


      public:
        P2 intersectsAt(const LineSegment& other) const {
          P2 result(std::numeric_limits<double>::infinity(), std::numeric_limits<double>::infinity());
          double xintersect, yintersect;

          // If the slopes are equal, they will never intersect
          if (slope() == other.slope())
            return result;

          // If self or other has an infinite slope, change the intersect calculation
          if (slope() == std::numeric_limits<double>::infinity()) {
            xintersect = _p1.getx();
            yintersect = other.m() * xintersect + other.b();
            if (xintersect >= other.getp1().getx() and xintersect <= other.getp2().getx()
                and yintersect >= _p1.gety() and yintersect <= _p2.gety())
              result.setxy(xintersect, yintersect);
          } else if (other.slope() == std::numeric_limits<double>::infinity()) {
            xintersect = other.getp1().getx();
            yintersect = m() * xintersect + b();
            if (xintersect >= _p1.getx() and xintersect <= _p2.getx()
                and yintersect >= other.getp1().gety() and yintersect <= other.getp2().gety())
              result.setxy(xintersect, yintersect);
          } else {   // Regular intercept calculation
            xintersect = (other.b() - b()) / (m() - other.m());
            yintersect = m() * xintersect + b();
            if (xintersect >= _p1.getx() and xintersect <= _p2.getx()
                and xintersect >= other.getp1().getx() and xintersect <= other.getp2().getx())
              result.setxy(xintersect, yintersect);
          }
          return result;
        }
    };


      inline std::string to_str(const LineSegment& lineseg) {
        std::stringstream ss;
        ss << to_str(lineseg.getp1()) << " -> " << to_str(lineseg.getp2());
        return ss.str();
      }
      inline std::ostream& operator <<(std::ostream& ostr, const LineSegment& lineseg) {
        ostr << to_str(lineseg);
        return ostr;
      }

  }
}
```


-------------------------------

Updated on 2022-07-20 at 17:18:46 +0000
