/** @file list3301.cpp */
/** Listing 33-1. The point Class with Access Level Specifiers */
#include <iostream>
#include <cmath>

struct point
{
public:
  point() : point{0.0, 0.0} {}
  point(double angle, double r) : angle_{angle}, r_{r} {}
  point(point const&) = default;
  ~point() { std::cout << "~point" << std::endl; } // destrutor da classe point

  double x() const { return r_*cos(angle()); }
  double y() const { return r_*sin(angle()); }

  double angle()    const { return angle_; }
  double distance() const { return r_; }

  void move_cartesian(double x, double y)
  {
  	angle_=std::atan2(y,x);
  	r_=sqrt(pow(x,2)*pow(y,2));
  }
  void move_polar(double r, double angle)
  {
    angle_ = angle;
    r_ = r;
  }

  void scale_cartesian(double s)       { scale_cartesian(s, s); }
  void scale_cartesian(double xs, double ys)
  {
    move_cartesian(x() * xs, y() * ys);
  }
  void scale_polar(double r)           { move_polar(distance() * r, angle()); }
  void rotate(double a)                { move_polar(distance(), angle() + a); }
  void offset(double o)                { offset(o, o); }
  void offset(double xo, double yo)    { move_cartesian(x() + xo, y() + yo); }

private:
  double angle_;
  double r_;
};

int main(){ 
  point p1, p2;

}
