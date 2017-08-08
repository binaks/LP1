#include <iostream>

int ackermann(int m, int n)
{
  if (m == 0)
    {
	return n + 1;
    }
  
  else if (m > 0 && n == 0)
    {
	return ackermann(m - 1, 1);
    }

  else if (m > 0 && n > 0)
    {
	return ackermann(m - 1, ackermann(m, n - 1));
    }

  return 0;
}

int main ()

{
  std::cout << "Função de Ackermann: ackermann(m, n)" << '\n';
  
  int m(0);
  int n(0);
  
  std::cout << "Informe o valor de m: " << '\n';
  std::cin >> m;
  std::cout << "Informe o valor de n: " << '\n';
  std::cin >> n;

  int resultado(0);

  resultado = ackermann(m, n);

  std::cout << "ackermann(" << m << ',' << n << ')' << '=' << resultado << '\n';

  char contin;

  std::cout << "Continuar (s/n)?" << '\n';
  std::cin >> contin;
  
  while(contin != 's' && contin != 'n')

	{
	  std::cout << "Continuar (s/n)?" << '\n';
	  std::cin >> contin;
	}

  while(contin == 's' || contin == 'n')
    {

    if(contin == 's')
      {
         std::cout << "Função de Ackermann: ackermann(m, n)" << '\n';
  
         int m(0);
         int n(0);
  
         std::cout << "Informe o valor de m: " << '\n';
         std::cin >> m;
         std::cout << "Informe o valor de n: " << '\n';
         std::cin >> n;

         int resultado(0);

         resultado = ackermann(m, n);

         std::cout << "ackermann(" << m << ',' << n << ')' << '=' << resultado << '\n';

         std::cout << "Continuar (s/n)?" << '\n';
         std::cin >> contin;
       }


     else if(contin == 'n')
	{
	  break;
	}

   }
      

 
}

