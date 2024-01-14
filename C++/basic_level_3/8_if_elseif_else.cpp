#include <iostream>

using namespace std;

int main()
{
    int user_age = 23;

    if (user_age < 18)
    {
        cout << "You are not an adult yet." << endl;
    }
    else if ((user_age >= 18) && (user_age < 30))
    {
        cout << "You are an adult below 30." << endl;
    }
    else if ((user_age >= 30) && (user_age < 40))
    {
        cout << "You ar in your thirties" << endl;
    }
    else
    {
        cout << "You are 40 or more" << endl;
    }

    cout << "End of program" << endl;
    return 0;
}