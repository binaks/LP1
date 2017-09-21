#include <iostream>
#include <new>


class Vector
{
  public:

  Vector() = delete;

  Vector(int tam)
	{
    tam_ = tam;
		elementos_ = new (std::nothrow) double[tam_];
  
    if(elementos_ == nullptr)
			{
				std::cout << "Falha na alocação" << std::endl;
				exit(EXIT_FAILURE);
			}
	}
  
  ~Vector()
  {
    delete [] elementos_;
		elementos_ = nullptr;
    std::cout << "Vetor desalocado. " << std::endl;
  }

  void vector_read()
  {
    int i;
    for(i = 0; i < tam_; i++)
			{
        std::cout << "Elementos[" << i+1 << "]: ";
				std::cin >> elementos_[i];
			}
	}

  double vector_sum()
	{
		double sum = 0;
		int i;
		for(i = 0; i < tam_; i++)
			{
				sum = sum + elementos_[i];
			}
   return sum;
	}

  bool vector_find(double key)
	{
    int i = 0;
		for(i = 0; i < tam_; i++)
			{
				if(elementos_[i] == key)
				{
					return true;
				}
			}
		return false;
	}		

  private:
	int tam_;
	double* elementos_;

 
	
};

int main()
{
  int n{0};
	double chave{0};
	
	std::cout << "Entre com o número de elementos da sua lista: " << std::endl;
	std::cin >> n;

	Vector p1(n);
  
  p1.vector_read();

  std::cout << "Soma dos elementos informados: " << p1.vector_sum() << std::endl;

  std::cout <<"Informe a chave de busca: "<< std::endl;
	std::cin >> chave;

  bool f;
  f = p1.vector_find(chave);
	
 if(f)
		{
			std::cout << "Chave Localizada!" << std::endl;
		}
	else
		{
			std::cout << "Chave não localizada!" << std::endl;
		}


  return EXIT_SUCCESS;
  
}




