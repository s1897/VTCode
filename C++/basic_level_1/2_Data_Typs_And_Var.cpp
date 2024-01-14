#include <iostream>

int whole_number = 1;
double floating_point_nuber = 1.001;
bool boolen_state = true; // true = 1; false = 0;
std::string text_string = "Hello";

const int Seconds = 3600;

int main()
{
    std::cout << "Whole Number = " << whole_number << std::endl;
    std::cout << "Floating Point Nuber = " << floating_point_nuber << std::endl;
    std::cout << "Boolen State = " << boolen_state << std::endl;
    std::cout << "Text String = " << text_string << std::endl;
    std::cout << "Seconds = " << Seconds << std::endl;

    return 0;
}