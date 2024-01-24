#include <iostream>
#include <vector>
#include <string>

using namespace std;

// string char_vector_to_string(const vector<char> &char_vector)
// {
//     string string_output;
//     for (char i : char_vector)
//     {
//         string_output.push_back(i);
//     }

//     return string_output;
// }

// vector<char> combine_char_vector_at_point(const vector<vector<char>> &separate_char_vector)
// {
//     vector<char> char_vector_output;

//     for (vector<char> char_vector : separate_char_vector)
//     {
//         for (char char_output : char_vector)
//         {
//             char_vector_output.push_back(char_output);
//         }
//     }

//     return char_vector_output;
// }

// void print_vectors_cluster(vector<vector<char>> h)
// {
//     for (vector<char> i : h)
//     {
//         cout << "{ ";
//         for (char l : i)
//         {
//             cout << l << " ";
//         }
//         cout << "} ";
//     }
// }

int main()
{
    using nested_string_vector = vector<vector<string>>;
    nested_string_vector i = {{""}};

    string k = "32413987";

    k += 'i';

    i.at(0)[0] += 'i';

    cout << k << endl;

    return 0;
}
