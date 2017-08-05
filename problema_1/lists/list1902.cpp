/** @file list1902 */
/** Listing 19-2. Separating Function Declarations from Definitions */
#include <iostream>
#include <istream>
#include <ostream>
#include <string>

void ignore_line();
int prompted_read(std::string prompt);
void print_result(int count, int sum);

/** Main program.
 * Read integers from the standard input and print statistics about them.
 */
int main()
{
	int sum(0);
	int count(0);

	while (std::cin)
	{
		int x(prompted_read("Value: "));
		if (std::cin)
		{
			sum = sum + x;
			++count;
		}
	}
	print_result(count, sum);
}
