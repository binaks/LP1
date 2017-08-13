#include <iostream>
#include <string>

using namespace std;

int fatorial (bool verboso, string phrase, int n);

int main (int argc, char *argv[]) {
	int n;
	string c;
	bool verboso = false;

	switch (argc) {
		case 1:
			cout << "Informe o valor de n: ";
			cin >> n;
			cout << "Modo verboso? (s/n) ";
			cin >> c;

			if (c.compare("s") == 0) {
				verboso = true;
			} 
			
			cout << "Fatorial(" << n << ") = " << fatorial (verboso, "", n) << endl;

			break;

		case 2:
			n = stoi (argv[1]);
			cout << "Modo verboso? (s/n) ";
			cin >> c;

			if (c.compare("s") == 0) {
				verboso = true;
			}

			cout << "Fatorial(" << n << ") = " << fatorial (verboso, "", n) << endl;
			
			break;

		case 3:
			n = stoi(argv[1]);
			c.assign(argv[2]);

			if (c.compare("s") == 0) {
				cout << fatorial (verboso, "", n) << endl;
			} 

			cout << "Fatorial(" << n << ") = " << fatorial (verboso, "", n) << endl;

			break;

		default:
			cout << "Numero de argumentos invalido!" << endl;
	
			return EXIT_FAILURE;
	}

}

int fatorial (bool verboso, string phrase, int n) {
	if (verboso) {
		if (n == 0) {
			cout << phrase << "1\n";
			return 1;
		} else {
			phrase = phrase + to_string(n) + " * ";
			cout << phrase << "fatorial(" << (n - 1) << ")\n";
			return n * fatorial (verboso, phrase, n - 1);
		}
	}

	if (n == 1 || n == 0) {
		return 1;
	} else {
		return fatorial (verboso, phrase, n - 1) * n;
	}
}
