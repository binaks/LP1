#include <iostream>
#include <iomanip>

int main(){
	using namespace std;

	cout << setfill('0') << setw(6) << 42 << '\n';
	cout << setw(6) << left << 42 << '\n';
	cout << setw(2) << 42 << '\n';
	cout << "-" << 42 << "-" << '\n';
}