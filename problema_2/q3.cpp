#include <iostream>
#include <string>

using namespace std;

int fatorial (int n);
int fatorial_verboso (std::string phrase, int n);

int main(int argc, char const *argv[]) {
	int n;
	char c;
  
  	switch (argc) {
      case 1:
        cout<<"Informe o valor de n: ";
        cin>>n;
        cout << "Modo verboso(s/n)?";
        cin>>c;

        if(c == 's' || c == 'S') {
            cout<< fatorial_verboso("", n) << endl;
        }
        else {
            cout<<"Fatorial("<<n<<") = "<<fatorial(n)<<endl;
        }
      
        break;
        
      case 2:
		n = stoi(argv[1]);
        cout << "Modo verboso(s/n)?";
        cin>>c;
        
        if (c == 's' || c == 'S') {
            cout<< fatorial_verboso("", n) << endl;
		{
		else {
            cout<<"Fatorial("<<n<<") = "<<fatorial(n)<<endl;
        }
          
		break;
      
      case 3:
		n = stoi(argv[1]);
        c.assign(argv[2]);
          
        if (c.compare("S") == 0 || c.compare("s" == 0)) {  // isso ta errado :(
			cout<< fatorial_verboso("", n) << endl;
        }
        else {
			cout<<"Fatorial("<<n<<") = "<<fatorial(n)<<endl;
        }
          
		break;

      default:
		cout << "Numero de argumentos invalido" << endl;
        return EXIT_FAILURE;
	}

int fatorial(int n) {
	if (n==1 || n==0) {
		return 1;
	}
	else {
		return fatorial(n-1)*n;
	}
}

int fatorial_verboso(string phrase, int n){
	if (n == 0) {
		cout << phrase << "1\n";
		return 1;
	}
	else {
		phrase = phrase + std::to_string(n) + " * ";
		cout << phrase << "fatorial(" << (n-1) << ")\n";
		return n * fatorial_verboso(phrase, n-1);
	}
	
}
