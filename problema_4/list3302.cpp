#include <iostream>
#include <cmath>

struct point
{
public: 
	point() : point(0.0,0.0) {}
	point(double x, double y){
		angle_ = std::atan2(y, x);
		r_ = std::sqrt(x*x + y*y);
	}
	point(point const&) = default;
	~point() {std::cout<<"~point"<<std::endl;}

	double x() const {
		return r_*std::cos(angle_);
	}
	double y() const {
		return r_*std::sin(angle_);
	}

	double angle() const {return angle_;}
	double distance() const	{return r_;}

	void move_cartesian(double x, double y){
		move_polar(std::sqrt(x*x + y*y), std::atan2(y, x));
	}
	void move_polar(double r, double angle){
		r_ = r;
		angle_ = angle;
	}
	void scale_cartesian(double s) { scale_cartesian(s,s); }
	void scale_cartesian (double xs, double ys){
		move_cartesian(x() * xs, y() * ys);
	}
	void scale_polar(double r) {move_polar(distance()*r,angle());}
	void rotate(double a) {move_polar(distance(),angle()+a);}
	void offset(double o) {offset(o,o);}
	void offset(double xo, double yo) { move_cartesian(x()+xo,y()+yo);}

private:
	double angle_;
	double r_;
	
};

int main(){
	point p1, p2;
}