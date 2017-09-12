#include <iostream>
#include <cmath>

using namespace std;

struct point {
	double distance () {
		return sqrt (x*x + y*y);
	}

	double x;
	double y;
};

int main () {
	point a;
	point b;
	
	cout << "Digite as coordenadas do ponto A: " << endl;

	cout << "x: ";
	cin >> a.x;

	cout << "y: ";
	cin >> a.y;

	cout << "Digite as coordenadas do ponto B: " << endl;

	cout << "x: ";
	cin >> b.x;

	cout << "y: ";
	cin >> b.y;

	cout << "A: " << a.distance() << endl;
	cout << "B: " << b.distance() << endl;
}
