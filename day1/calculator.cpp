#include <iostream>

int main()
{
    double first_number;
    double second_number;
    double result;
    char op;

    std::cout << "\n********** calculator **********\n";

    std::cout << "Enter operator ( + - / % * ) \n";
    std::cin >> op;

    std::cout << "Enter first number: ";
    std::cin >> first_number;

    std::cout << "Enter second number: ";
    std::cin >> second_number;

    switch (op)
    {
    case '+':
        result = first_number + second_number;
        std::cout << result << "\n";
        break;
    case '-':
        result = first_number - second_number;
        std::cout << result << "\n";
        break;
    case '/':
        result = first_number / second_number;
        std::cout << result << "\n";
        break;
    case '*':
        result = first_number * second_number;
        std::cout << result << "\n";
        break;

    default:
        std::cout << "Invalid operator!";
        break;
    }

    std::cout << "********************************\n";
}