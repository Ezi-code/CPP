#include <iostream>

int main()
{
    // using switch case;

    int month;

    std::cout << "Select a month \n1.January \n2.February \n:";
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "January \n";
        break;
    case 2:
        std::cout << "February \n";
        break;
    default:
        std::cout << "Invalid month selected! \n";
        break;
    }
}