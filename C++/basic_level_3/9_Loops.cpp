#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<double> double_list = {1.1, 2.2, 3.3, 4.4};

    // while Loop
    // Use for not known length
    int i = 0;
    while (i < double_list.size())
    {
        double list = double_list.at(i);
        cout << list << endl;
        i++;
    }

    // Old C and C++ for Loop (loops through list)
    // for (int i = 0; i < double_list.size(); i++)
    // {
    //     double list = double_list.at(i);
    //     cout << list << endl;
    // }

    // New C++ for Loop (loops through list)
    // Use for known length
    for (double list : double_list)
    {
        cout << list << endl;
    }

    return 0;
}