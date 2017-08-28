#include <iostream>
#include <fstream>
#include <string>

void arquivo_saida(std::ifstream& in, std::ofstream& out){
	std::string linha, palavra, num;
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
	std::ifstream in(argv[1]);
	if(not in)
		perror(argv[1]);
	std::ofstream out(argv[2]);
	arquivo_saida(in,out);
	in.close();
	out.close();

	return 0;
}
