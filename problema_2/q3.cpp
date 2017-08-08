#include <iostream>
using namespace std;
int fatorial(int n);
int main(int argc, char const *argv[])
{
	int n;
	cout<<"Informe o valor de n: ";
	cin>>n;
	cout<<"Fatorial("<<n<<") = "<<fatorial(n)<<endl;
	
	return 0;
}

int fatorial(int n){
	if(n==1 || n==0){
		return 1;
	}
	else{
		return fatorial(n-1)*n;
	}
}
