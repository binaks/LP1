#include <cstdio>
#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	std::ifstream in("list1303.in");
	std::ofstream out("list1303.out");
	if(not in)
		std::perror("list1303.in");
	else
	{
		int x(0);
		while(in>>x)
			out<<x<<'\n';
//		in.close();
	}
//	out.close();
	if(out.is_open())
		cout << "ta aberto" << endl;
	return 0;
}
