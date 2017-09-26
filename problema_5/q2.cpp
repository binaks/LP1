#include <iostream>
using namespace std;
template<class T>
class conjunto
{
public:
	conjunto(int n){
		n_ = n;
		v_ = new T[n];
	}
	conjunto() = default;
	void n(int n);
	void ler_conjunto();
	void escrever_conjunto();

private:
	int n_;
	int na_;
	T* v_;
	
};

template<class T>
void conjunto<T>::n(int n)
{
	n_ = n;
}

template<class T>
void conjunto<T>::ler_conjunto()
{
	for (int i = 0; i < n_; i++)
	{
		cout<<"Element "<<i+1<<": ";
		cin>>v_[i];
		for (int j = 0; j < n_; j++)
		{
			if(v_[i]==v_[j])
				na_ = n_-1;
		}
	}
}

template<class T>
void conjunto<T>::escrever_conjunto()
{
	cout<<"{";
	for (int i = 0; i < n_; i++)
	{
		cout<<v_[i];
		if(i<n_-1)
			cout<<", ";
	}
	cout<<"}";
}
int main()
{
	int a, b;
	cout<<"Cardinalidade de A: ";
	cin>>a;
	cout<<"Cardinalidade de B: ";
	cin>>b;
	conjunto<int> cA{a}, cB{b};
	cout<<"Informe elementos de A: \n";
	cA.ler_conjunto();
	cout<<"Informe elementos de B: \n";
	cB.ler_conjunto();
	cout<<"A = ";
	cA.escrever_conjunto();
	cout<<"B = ";
	cB.escrever_conjunto();
	return 0;
}