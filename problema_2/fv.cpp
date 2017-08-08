#include <iostream>
#include <string>

int fatorial_verboso(std::string phrase, int n);

int main(){
	std::cout << fatorial_verboso(" ", 2);
}

int fatorial_verboso(std::string phrase, int n){
	if(n == 0){
		std::cout << phrase << "1\n";
		return 1;
	}
	else{
		phrase = phrase + std::to_string(n) + "*";
		std::cout << phrase << "fatorial(" << (n-1) << ")\n";
		return n * fatorial_verboso(phrase, n-1);
	}
	
}