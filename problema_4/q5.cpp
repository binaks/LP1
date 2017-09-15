#include <iostream>

using namespace std;

struct point
{
	point() = default;
	point(point const&) = delete;
	int x, y;
};

int main () {
	point p{};
	point q{p};

	cout << q.x << endl;
}