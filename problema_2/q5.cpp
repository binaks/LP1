//QUESTÃO 5 ( ͡° ͜ʖ ͡°)

#include <iostream>
#include <string>

using namespace std;

int fatorial(int n);
int fatorial(string s, int n);

int main(int argc, char const *argv[])
{
	int n;
	char c;
  	string s="";
	cout<<"Informe o valor de n: ";
	cin>>n;
	cout<<"Modo verboso (s/n)? ";
  	cin>>c;
	if (c=='n'){
		cout<<"Fatorial("<<n<<") = "<<fatorial(n)<<endl;
	}
  	else if (c=='s'){
		cout<<"Fatorial("<<n<<") = "<<fatorial(s, n)<<endl;
  	}
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

int fatorial(string s, int n){
	if(n == 0){
		cout << s << "1\n";
		return 1;
	}
	else{
		s = s + std::to_string(n) + " * ";
		cout << s << "fatorial(" << (n-1) << ")\n";
		return n * fatorial(s, n-1);
	}

}
