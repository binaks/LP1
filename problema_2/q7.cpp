#include <iostream>
#include <string>

using namespace std;

int fatorial(int n);
int fatorialIter(int n, int result);

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
			
			cout << "Fatorial(" << n << ") = " << fatorial(n) << endl;

			break;

		case 2:
			n = stoi (argv[1]);
			cout << "Modo verboso? (s/n) ";
			cin >> c;

			if (c.compare("s") == 0) {
				verboso = true;
			}

			cout << "Fatorial(" << n << ") = " << fatorial(n) << endl;
			
			break;

		case 3:
			n = stoi(argv[1]);
			c.assign(argv[2]);

			if (c.compare("s") == 0) {
				cout << fatorial(n) << endl;
			} 

			cout << "Fatorial(" << n << ") = " << fatorial(n) << endl;

			break;

		default:
			cout << "Numero de argumentos invalido!" << endl;
	
			return EXIT_FAILURE;
	}

}

int fatorial(int n){
    cout << "Fatorial("<<n<<") = " << "FatorialIter("<<n<<", "<<1<<")\n";
	return fatorialIter(n, 1); 
}

int fatorialIter(int n, int result){
	if(n == 0){
		return result;
	}
	else{
        cout << "= FatorialIter("<<n-1<<", "<<n<<" * "<<result<<")\n";
		return fatorialIter(n-1, result*n);
	}
}
