#include <iostream>

using namespace std;

int ackermann (int m, int n);

bool continuar ();

int main () {
	int m, n;
	
	do {
		cout << "Função de Ackermann A(m,n)" << endl;

		cout << "Informe o valor de m: ";
		cin >> m;
		cout << "Informe o valor de n: ";
		cin >> n;

		cout << ackermann(m, n) << endl;	
	} while (continuar());

}

int ackermann (int m, int n) {
	if (m == 0) {
		return n + 1;
	} else if (m > 0 && n == 0) {
		return ackermann (m - 1, 1);
	} else if (m > 0 && n > 0){
		return ackermann (m - 1, ackermann(m, n - 1));
	} else {
		return -1;
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
