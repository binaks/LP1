#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void arquivo_saida(ifstream& in, ofstream& out){ //não faz sentindo passar o valor por parametro
	string linha, palavra, num;
	size_t found, s, tam;
	int n;
	while(!in.eof()){
		getline(in,linha);
		found = linha.find(":");
		tam = linha.size();
		palavra.assign(linha,0,found-1);
		num.assign(linha,found+1,tam);
		n = stoi(num);

		if(out.is_open()){
			for (int i = 0; i < n; i++)
			{
				out<<palavra<<" ";
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	ifstream in("input.txt");
	if(not in)
		perror("input.txt");
	ofstream out("output.txt");
	arquivo_saida(in,out);
	in.close();
	out.close();

	return 0;
}