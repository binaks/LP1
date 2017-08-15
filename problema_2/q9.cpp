#include <iostream>

using namespace std;


bool par(int);


bool impar(int);


int main(int argc, char const *argv[])
{
   
	char letter;

	do {
     
		int n(0);
		cout << "Informe o valor de n: ";
		cin >> n;

		int valor(0);

	  	valor = par(n);

       		if(valor)
		  {
			cout<< n << " é um valor par" << endl;
		  }

		else
		  {
			cout<< n << " é um valor ímpar" << endl;
		  }
 
      		cout << "Continuar? (s/n)" << endl;
      		cin >> letter;
	
	   }while(letter == 's');
   
 }	


bool par(int n)
{
	if(n == 0)
		{
			return true;
		}
	
	else if(n > 0)
		{
			return impar(n-1);
		}

	else if(n < 0)
		{
			return par(-n);
		}

  return 0;

}


bool impar(int n)
{
	if(n == 0)
		{
			return false;
		}

	else if(n > 0)
		{
			return par(n-1);
		}

	else if(n < 0)

		{
			return impar(-n);
		}

 return 0;
  
}
