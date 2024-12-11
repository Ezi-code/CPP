#include <iostream>
#include <cmath>

int main()
{
    /*
    to calculate the length of the longest side of a triangle, you have to use the formula below
    c = square root of a-square + b-square
     */

    int a;
    int b;
    double c;

    std::cout << "Enter side a: ";
    std::cin >> a;

    std::cout << "Enter side b: ";
    std::cin >> b;

    c = sqrt(pow((double)a, 2) + pow(b, 2));

    std::cout << "Length of c: " << c << "\n";
}