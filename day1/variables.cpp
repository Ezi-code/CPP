#include <iostream>

int main()
{
    // integer variable setting
    int score = 88;
    bool is_student = true;
    bool is_first_class = true;

    double gpa = 3.5;

    // constant variables must have their names written in caps.
    const int PI = 3.1472;

    // Setting character variable requires you to strictly use single quotes, unlike python.
    char grade = 'A';

    // string is a method in the standard library, to use it you must reference it from the std lib.
    std::string course = "Infomation";

    // displaying text with variables
    std::cout << "Course: " << course << "\n";
    std::cout << "score: " << score << "\n";
    std::cout << "GPA: " << gpa << "\n";
    std::cout << "is_student" << is_student << "\n";
    std::cout << "grade: " << grade << "\n";

    return 0;
}