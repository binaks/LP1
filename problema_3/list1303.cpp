#include <cstdio>
#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
<<<<<<< HEAD
	std::ifstream in("list1303.in");
	std::ofstream out("list1303.out");
=======
	std::ifstream in("list1301.txt");
	std::ofstream out("list1301out.txt");
>>>>>>> 1320951f26ae634e27c224e8649e9bf8e285ba2e
	if(not in)
		std::perror("list1303.in");
	else
	{
		int x(0);
		while(in>>x)
			out<<x<<'\n';
<<<<<<< HEAD
//		in.close();
=======
		in.close();
		out.close();
>>>>>>> 1320951f26ae634e27c224e8649e9bf8e285ba2e
	}
//	out.close();
	if(out.is_open())
		cout << "ta aberto" << endl;
	return 0;
}
