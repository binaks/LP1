#include <iostream>

using namespace std;

bool par (int n); 

bool impar (int n);

bool continuar ();

int main () {
	int n;

	do {
		cout << "Informe o valor de n: ";
		cin >> n;
		if (par(n)) {
			cout << n << " é um número par."  << endl;
		} else {
			cout << n << " é um número ímpar." << endl;
		}

	} while (continuar());
}

bool par (int n) {
	if (n == 0) {
		return true;
	} else if (n > 0) {
		return impar (n - 1);
	} else {
		return impar (n + 1);
	}
}

bool impar (int n) {
	if (n == 0) {
		return false;
	} else if (n > 0) {
		return par (n - 1);
	} else {
		return par (n + 1);
	}
}

bool continuar () {
	char c;	

	cout << "Continuar (s/n)? ";
	cin >> c;

	if (c == 's' || c == 'S') {
		return true; 
	} else if (c == 'n' || c == 'N') {
		return false;
	} else {
		return continuar();
	}
}
