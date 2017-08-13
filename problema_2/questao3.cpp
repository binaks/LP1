#include <iostream>
#include <string>

using namespace std;

int fatorial (int n);

int main (int argc, char *argv[]) {
	int n;

	switch (argc) {
		case 1:
			cout << "Informe o valor de n: ";
			cin >> n;
			cout << "Fatorial(" << n << ") = " << fatorial(n) << endl;
			break;

		case 2:
			n = stoi (argv[1]);
			cout << "Fatorial(" << n << ") = " << fatorial(n) << endl;
			break;

		default:
			cout << "Numero de argumentos invalido!" << endl;
			return EXIT_FAILURE;
	}

}

int fatorial (int n) {
		if (n == 1 || n == 0) {
			return 1;
		} else {
			return fatorial (n - 1) * n;
		}
}
