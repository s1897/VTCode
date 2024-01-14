#include "inf_cal_func.hpp"

void print_vectors(vector<char> h)
{
    cout << "{'";

    for (int i = 0; i < h.size(); i++)
    {
        cout << h[i];
        if (i != (h.size() - 1))
        {
            cout << "','";
        }
    }

    cout << "'}";
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
    string st = "-234.54345";
    // print_vectors(string_to_char_vector(st));
    print_vectors_cluster(separate_char_vector_at_point(string_to_char_vector(st)));
}

// string v1;
// string v2;

// cout << "Enter first number: ";
// cin >> v1;
// cout << "Enter Secend number: ";
// cin >> v2;

// cout << "The result is : " << add_two_strings(v1, v2) << endl;

// vector<char> vector_1 = string_to_char_vector(v1);
// vector<char> vector_2 = string_to_char_vector(v2);

// vector<vector<char>> vector_1_sep = separate_char_vector_at_point(vector_1);
// vector<vector<char>> vector_2_sep = separate_char_vector_at_point(vector_2);

// vector<vector<char>> out_add = add_char_vectors(vector_1_sep, vector_2_sep);

// print_vectors_cluster(out_add);

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