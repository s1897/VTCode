#include <iostream>
#include <vector>
#include <string>

using namespace std;

string char_vector_to_string(const vector<char> &char_vector)
{
    string string_output;
    for (char i : char_vector)
    {
        string_output.push_back(i);
    }

    return string_output;
}

vector<char> combine_char_vector_at_point(const vector<vector<char>> &separate_char_vector)
{
    vector<char> char_vector_output;

    for (vector<char> char_vector : separate_char_vector)
    {
        for (char char_output : char_vector)
        {
            char_vector_output.push_back(char_output);
        }
    }

    return char_vector_output;
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
    // vector<vector<char>> i = {{'1'}, {'2'}, {'3'}};

    // cout << char_vector_to_string(combine_char_vector_at_point(i));

    vector<vector<char>> l = {{}, {}, {}, {}};
    print_vectors_cluster(l);

    // for (int i = 2; i >= 0; i--)
    // {
    //     cout << i;
    // }

    // vector<char> ki = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    // vector<char> ki1 = {'9', '8', '7', '6', '5', '4', '3', '2', '1'};

    // vector<char>::reverse_iterator i = ki.rbegin();
    // vector<char>::reverse_iterator l = ki1.rbegin();

    // while (i != ki.rend())
    // {

    //     cout << *i << *l << endl;
    //     i++;
    //     l++;
    // }

    // int h = 9;

    // if (h >= 10)
    // {
    //     cout << ">=";
    // }

    return 0;
}
