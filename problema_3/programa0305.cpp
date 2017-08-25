#include <iostream>
#include <new>
using namespace std;

struct Vector{
	int tam;
	double* elementos;
};

void vector_init(Vector& v, int tam){
	v.tam = tam;
	v.elementos = new (std::nothrow) double[tam];
	if(v.elementos == nullptr){
		cout<<"Erro de inicialização.";
	}
}

void vector_free(Vector& v){
	delete v.elementos;
	v.elementos = nullptr;
}

void vector_read(Vector& v){
	for (int i = 0; i < v.tam; i++)
	{
		cout<<"Elemento ["<<i+1<<"]: ";
		cin>>v.elementos[i];
	}
}
void vector_print(Vector& v){
	for (int i = 0; i < v.tam; i++)
	{
		cout<<v.elementos[i]<<" ";
	}
}
double vector_sum(Vector& v){
	double sum;
	for (int i = 0; i < v.tam; i++)
	{
		sum += v.elementos[i];
	}
	return sum;
}

bool vector_find(Vector& v, int key){
	for (int i = 0; i < v.tam; i++)
	{
		if(v.elementos[i] == key){
			return true;
		}
	}
	return false;
}

int main(int argc, char const *argv[])
{
	int n{0}, chave{0};
	Vector vetor;

	cout<<"Quantos elementos sua lista armazenara? ";
	cin>>n;
	vector_init(vetor,n);
	vector_read(vetor);
	//cout<<"\nVetor lido: "; vector_print(vetor); //apenas para testes
	cout<<"Soma dos elementos informados: "<<vector_sum(vetor);
	cout<<"\nInforme chave de busca: ";
	cin>>chave;
	if(vector_find(vetor,chave)==true)
		cout<<"Chave localizada!";
	else
		cout<<"Chave nao localizada!";
	vector_free(vetor);
	return EXIT_SUCCESS;
}
