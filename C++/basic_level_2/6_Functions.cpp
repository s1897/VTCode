#include <iostream>

namespace abc
{
    void say_hello(std::string user_name)
    {
        std::cout << "Hello " << user_name << std::endl;
    }
};

int triple_number(int number) // returns set int value
{
    return number * 3;
}

void print_triple_nuber(int number) // returns no value
{
    std::cout << triple_number(number) << std::endl;
    return;
}

int main()
{
    abc::say_hello("Bob");

    using namespace abc;
    using namespace std;

    say_hello("bob");

    int result = triple_number(4);
    cout << result << endl;

    print_triple_nuber(5);

    return 0;
}