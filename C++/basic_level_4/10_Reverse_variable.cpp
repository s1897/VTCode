#include <iostream>
#include <vector>

using namespace std;

// Passing non Rev Variabels,
// Copys the Variabel and distrois it after modif.
// Dosent pass it out of the scoup
void add_zeros_non_rev(vector<double> list, int zeros)
{
    for (int i = 0; i < zeros; i++)
    {
        list.push_back(0);
    }
    cout << "B.Size = " << list.size() << endl;
}

// Passing A Rev Variabels
// Dosen't Copy the Variabel it modif the given Variabel
// Passes the Varibel out of the scop
void add_zeros_rev(vector<double> &list, int zeros)
{
    for (int i = 0; i < zeros; i++)
    {
        list.push_back(0);
    }
    cout << "D.Size = " << list.size() << endl;
}
int main()
{
    vector<double> double_list = {1.1, 2.2, 3.3, 4.4};
    cout << "A.Size = " << double_list.size() << endl;
    add_zeros_non_rev(double_list, 4);
    cout << "C.Size = " << double_list.size() << endl;
    add_zeros_rev(double_list, 4);
    cout << "E.Size = " << double_list.size() << endl;
}