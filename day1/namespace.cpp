#include <iostream>

namespace first
{
    int x = 1;
    int y = 6;
    int sum = x + y;
}

namespace second
{
    int x = 2;
    int y = 4;
    int sum = x + y;
}

int main()
{
    int x = 0;

    std::cout << "default value of x: " << x << "\n";
    std::cout << "first namespace value of sum: " << first::sum << "\n";
    std::cout << "second namespace value of sum: " << second::sum;

    return 0;
}