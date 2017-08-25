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
	/*Precisa zerar se não dá problemas de acúmulo de lixo*/
	for (int i = 0; i < m.linhas; i++){
		for (int j = 0; j < m.colunas; ++j){
			m.elementos[i][j] = 0;
		}
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

template <typename T>
bool matrix_mult(Matrix<T>& m1, Matrix<T>& m2, Matrix<T>& m3){
	if(m1.colunas == m2.linhas){
		matrix_creator(m3,m1.linhas,m2.colunas);
		for (int i = 0; i < m3.linhas; i++)
		{
			for (int j = 0; j < m3.colunas; j++)
			{
				for (int k = 0; k < m1.colunas; k++)
				{
				m3.elementos[i][j] += (m1.elementos[i][k] * m2.elementos[k][j]);
				}
			}
		}
		return true;
	}
	else {
		cout<<"M3 = M1 x M2 nao existe";
		return false;
	}
}

int main(int argc, char const *argv[])
{
	Matrix<int> m1, m2, m3;
	int linhas, colunas;

	cout<<"Informe o numero de linhas da matriz M1: ";
	cin>>linhas;
	cout<<"Informe o numero de colunas da matriz M1: ";
	cin>>colunas;
	matrix_creator(m1,linhas,colunas);
	cout<<"Informar elementos da matriz M1"<<endl;
	matrix_read(m1);

	cout<<"Informe o numero de linhas da matriz M2: ";
	cin>>linhas;
	cout<<"Informe o numero de colunas da matriz M2: ";
	cin>>colunas;
	matrix_creator(m2,linhas,colunas);
	cout<<"Informar elementos da matriz M2"<<endl;
	matrix_read(m2);

	matrix_mult(m1,m2,m3);
	cout<<"\nM1:\n"; matrix_print(m1);
	cout<<"M2:\n"; matrix_print(m2);
	if(matrix_mult(m1,m2,m3)==true){
		cout<<"\nM3 = M1 x M2: \n";
		matrix_print(m3);
	}

	matrix_destructor(m1);
	matrix_destructor(m2);
	// matrix_destructor(m3);	//erro no destrutor do m3 WHAT THE HELL?! (perguntar para o professor)

	return 0;
}