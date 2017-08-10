#include <iostream>
#include <string>

using namespace std;

int fatorial(bool verboso, string s, int n);
int fatorial(int n);
int fatorial(string s, int n);

int main(int argc, char const *argv[])
{
	int n;
	char c;
  	bool verboso = true;
  	string s="";
  
	cout<<"Informe o valor de n: ";
	cin>>n;
	cout<<"Modo verboso (s/n)? ";
  	cin>>c;
  
	if (c=='n'){
		verboso = false;
	}
    
	cout<< "Fatorial("<<n<<") = " << fatorial(verboso, s, n) << endl;
  
	return 0;
}

int fatorial(bool verboso, string s, int n){
	if (verboso) {
        if(n == 0){
            cout << s << "1\n";
            return 1;
        }
        else {
            s = s + std::to_string(n) + " * ";
            cout << s << "fatorial(" << (n-1) << ")\n";
            return n * fatorial(verboso, s, n-1);
        }
    }
  
    if(n==1 || n==0){
		return 1;
	}
	else {
		return fatorial(verboso, s, n-1)*n;
	}
}
