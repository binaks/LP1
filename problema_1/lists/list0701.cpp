list701.cpp
#include <iostream>
#include <ostream>

int main()
{
    int sum(0);

    for(int i = 10; i != 21; i++){
        sum = sum + i;
    }

    std::cout << "Sum of 10 to 20 = " << sum << '\n';
}
