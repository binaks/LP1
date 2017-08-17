#include <iostream>

using namespace std;

int fib (int n);

int fibDupla (int n, int a, int b);

int main () {
	int n;
	
	cout << "Digite uma posição: " << endl;
	cin >> n;
	cout << "fib(" << n << ") = " << fib(n) << "." << endl;
}

int fib (int n) {
		return fibDupla (n, 1, 1);
} 

int fibDupla (int n, int a, int b) {
	if (n <= 1) {
		return n;
	} else if (n == 2) {
		return b;
	} else {
		return fibDupla(n - 1, b, a + b);
	}
}
