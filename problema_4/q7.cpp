#include <iostream>
#include <new>
using namespace std;

class Vector{
private:
	int tam_;
	double* elementos_;
	
public:
	Vector() : tam_(0), elementos_(0) {};
	// Vector() = delete;
	Vector(int tam){
		tam_ = tam;
		elementos_ = new (std::nothrow) double[tam];
		if(elementos_ == nullptr){
			cout<<"Erro de inicialização.";
		}
	}
	~Vector() {
		delete [] elementos_;
		elementos_ = nullptr;
	}
	int get_tam() { return tam_; }
	double* get_elementos() { return elementos_; }
	void set_tam(int tam) { tam_=tam; };
	void set_elementos(double* elementos) { elementos_ = elementos; }

	void vector_read(){
		for (int i = 0; i < tam_; i++)
		{
			cout<<"Elemento ["<<i+1<<"]: ";
			cin>>elementos_[i];
		}
	}
	void vector_print(){
		for (int i = 0; i < tam_; i++)
		{
			cout<<elementos_[i]<<" ";
		}
		cout<<endl;
	}
	double vector_sum(){
		double sum;
		for (int i = 0; i < tam_; i++)
		{
			sum += elementos_[i];
		}
		return sum;
	}

	bool vector_find(int key){
		for (int i = 0; i < tam_; i++)
		{
			if(elementos_[i] == key){
				return true;
			}
		}
		return false;
	}
};

int main()
{
	int n{0}, chave{0};

	cout<<"Quantos elementos sua lista armazenara? ";
	cin>>n;
	Vector vetor = n;
	vetor.vector_read();

	cout<<"\nVetor digitado: "; 
	vetor.vector_print();
	cout<<"Soma dos elementos informados: "<<vetor.vector_sum()<<endl;
	cout<<"\nInforme chave de busca: ";
	cin>>chave;
	if(vetor.vector_find(chave)==true)
		cout<<"Chave localizada!\n";
	else
		cout<<"Chave nao localizada!\n";
	return EXIT_SUCCESS;
}