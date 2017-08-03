/** @list0801.cpp */
/** Listing 8-1. Print a Table of Squares and Cubes */
#include <iomanip>
#include <iostream>
#include <ostream>

int main()
{
	std::cout << " N  N^2 N^3\n";
	for (int i = 1; i != 21; i++)
	{
		//fill in the loop body here
		std::cout << " " 
		<< std::setw(4) << std::left << i 
		<< std::setw(4) << std::left << i*i 
		<< std::setw(4) << std::left << i*i*i 
		<< std::endl;
	}
}