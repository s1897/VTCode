#include "inf_cal_func.hpp"

void print_vectors(vector<char> h)
{
    for (char i : h)
    {
        cout << i;
    }
}

void print_vectors_cluster(vector<vector<char>> h)
{
    for (vector<char> i : h)
    {
        cout << "{ ";
        for (char l : i)
        {
            cout << l << " ";
        }
        cout << "} ";
    }
}

int main()
{
    string test = "10.100";

    vector<char> i = string_to_char_vector(test);

    vector<vector<char>> g = separate_char_vector_at_point(i);

    //{'1','2','3','.','1','2','3'}
    //{'1','2','.','1','2'}

    // char hd = '9';
    // char hm = '1';

    // int k = hd + hm;
    // // cout << k;

    // if (k < 106)
    // {
    //     char j = char(k - 48);
    //     cout << j;
    // }
    // else if (k >= 106)
    // {
    //     char j = char(k - 58);
    //     cout << '1' << j;
    // }

    // return 0;
}
