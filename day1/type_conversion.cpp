#include <iostream>

int main()
{
    int question = 10;
    int correct = 8;
    // prefixing (double) to questions will convert it's type from int to double
    int score = correct / (double)question * 100;

    std::cout << score << "%";

    return 0;
}