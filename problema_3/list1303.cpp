#include <cstdio>
#include <fstream>
#include <iostream>

int main(int argc, char const *argv[])
{
	std::ifstream in("list1301.txt");
	std::ofstream out("list1301out.txt");
	if(not in)
		std::perror("list1301.in");
	else
	{
		int x(0);
		while(in>>x)
			out<<x<<'\n';
		in.close();
		out.close();
	}
	return 0;
}
