#include <iostream>
#include <iomanip>
using namespace std;

template <typename T>
struct Matrix{
	int linhas;
	int colunas;
	T** elementos;
};

template <typename T>
void matrix_creator(Matrix<T>& m, int linhas, int colunas){
	m.linhas = linhas;
	m.colunas = colunas;
	m.elementos = new T*[linhas];
	for (int i = 0; i < linhas; i++)
	{
		m.elementos[i] = new T[colunas];
	}
}

template <typename T>
void matrix_destructor(Matrix<T>& m){
	for (int i = 0; i < m.linhas; i++)
	{
		delete [] m.elementos[i];
	}
	delete[] m.elementos;
	m.elementos = nullptr;
}

template <typename T>
void matrix_read(Matrix<T>& m){
	for (int i = 0; i < m.linhas; i++)
	{
		for (int j = 0; j < m.colunas; ++j)
		{	
			cout<<"M["<<i<<","<<j<<"]: ";
			cin>>m.elementos[i][j];
		}
	}
}

template <typename T>
void matrix_print(Matrix<T>& m){
	for (int i = 0; i < m.linhas; i++)
	{
		for (int j = 0; j < m.colunas; ++j)
		{	
			cout << std::setw(3);
			cout<<m.elementos[i][j];
		}
		cout<<endl;
	}
}

template <typename T>
void matrix_transpose(Matrix<T>& m1, Matrix<T>& m2){
	matrix_creator(m2,m1.colunas,m1.linhas);
	for (int i = 0; i < m2.linhas; i++)
	{
		for (int j = 0; j < m2.colunas; ++j)
		{
			m2.elementos[i][j] = m1.elementos[j][i];
		}
	}
}

int main(int argc, char const *argv[])
{
	Matrix<int> m1, m2;
	int linhas, colunas;
	cout<<"Informe o numero de linhas da matriz M: ";
	cin>>linhas;
	cout<<"Informe o numero de colunas da matriz M: ";
	cin>>colunas;
	matrix_creator(m1,linhas,colunas);
	cout<<"Informar elementos da matriz M"<<endl;
	matrix_read(m1);
	cout<<"\nMatriz informada:\n"; 
	matrix_print(m1);
	matrix_transpose(m1,m2);
	cout<<"\nMatriz transposta: \n";
	matrix_print(m2);
	matrix_destructor(m1);
	matrix_destructor(m2);

	return 0;
}