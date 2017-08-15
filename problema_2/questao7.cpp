#include <iostream>

using namespace std;

int fatorial (int n);

int fatorialIter (int n, int result);

int main () {
	int n;

	cout << "Digite um número natural: " << endl;
	cin >> n;
	cout << fatorial (n) << endl;
}

int fatorial (int n) {
	return fatorialIter (n, 1);
}

int fatorialIter (int n, int result) {
	if (n == 0) {
		return result;
	} else {
		return fatorialIter (n - 1, n * result);
	}
}
