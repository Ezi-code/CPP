#include <iostream>

int main()
{

    std::string name;
    int age;

    std::cout << "What is your name? ";
    // the getline function is used to accept input that contains whitespaces
    // you can add std::ws to strip white spaces
    std::getline(std::cin >> std::ws, name);

    std::cout << "What is your age? ";
    std::cin >> age;

    if (age < 18)
    {
        std::cout << "You are a minor \n";
    }
    else
    {
        std::cout << "You are an adult \n";
    }

    return 0;
}