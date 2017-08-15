#include <iostream>

template <class T>
T my_min(T a, T b)
{
	if(a < b)
		return a;
	else if(b < a)
		return b ;
	else
		return a; // a and b are equivalent, so return a
}

int main( )
{
	int x{10};
	long y{20};
	std::cout << my_min((long) x, y) << std::endl;
}
