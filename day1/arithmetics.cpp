#include <iostream>

int main()
{
    // variable initialization
    int num1 = 12;
    int num2 = 22;

    // arithmetic calculation and assignment
    int sum = num2 + num1;
    int diff = num1 - num2;
    int prod = num1 * num2;
    int division = num1 / num2;

    // display of result
    std::cout << "Sum of the numbers: " << sum << "\n";
    std::cout << "Difference of the numbers: " << diff << "\n";
    std::cout << "Product of the numbers: " << prod << "\n";
    std::cout << "Division of the numbers: " << division << "\n";

    return 0;
}