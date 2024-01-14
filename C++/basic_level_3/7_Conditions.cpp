#include <iostream>

using namespace std;

int main()
{
    cout << boolalpha;

    cout << "(1 == 1) is " << (1 == 1) << endl;
    cout << "(1 == 2) is " << (1 == 2) << endl;
    cout << endl;

    cout << "(1 != 1) is " << (1 != 1) << endl;
    cout << "(1 != 2) is " << (1 != 2) << endl;
    cout << endl;

    cout << "(1 < 0) is " << (1 < 0) << endl;
    cout << "(1 < 1) is " << (1 < 1) << endl;
    cout << "(1 < 2) is " << (1 < 2) << endl;
    cout << endl;

    cout << "(1 <= 0) is " << (1 <= 0) << endl;
    cout << "(1 <= 1) is " << (1 <= 1) << endl;
    cout << "(1 <= 2) is " << (1 <= 2) << endl;
    cout << endl;

    cout << "(1 > 0) is " << (1 > 0) << endl;
    cout << "(1 > 1) is " << (1 > 1) << endl;
    cout << "(1 > 2) is " << (1 > 2) << endl;
    cout << endl;

    cout << "(1 >= 0) is " << (1 >= 0) << endl;
    cout << "(1 >= 1) is " << (1 >= 1) << endl;
    cout << "(1 >= 2) is " << (1 >= 2) << endl;
    cout << endl;

    cout << "((1 == 1) || (1 == 1)) is " << ((1 == 1) || (1 == 1)) << endl;
    cout << "((1 == 1) || (1 == 2)) is " << ((1 == 1) || (1 == 2)) << endl;
    cout << "((1 == 2) || (1 == 1)) is " << ((1 == 2) || (1 == 1)) << endl;
    cout << "((1 == 2) || (1 == 2)) is " << ((1 == 2) || (1 == 2)) << endl;
    cout << endl;

    cout << "((1 == 1) && (1 == 1)) is " << ((1 == 1) && (1 == 1)) << endl;
    cout << "((1 == 0) && (1 == 1)) is " << ((1 == 0) && (1 == 1)) << endl;
    cout << "((1 == 1) && (1 == 0)) is " << ((1 == 1) && (1 == 0)) << endl;
    cout << "((1 == 0) && (1 == 0)) is " << ((1 == 0) && (1 == 0)) << endl;
    cout << endl;

    return 0;
}
