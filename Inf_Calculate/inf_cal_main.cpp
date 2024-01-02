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

    vector<char> i = string_to_char_vector(test); // {"1","2","3",".","1","2","3"}

    vector<vector<char>> g = separate_char_vector_at_point(i);

    g.at(0).insert(g.at(0).begin(), '0');

    vector<vector<char>> hh = {{'1', '0'}, {'.'}, {'1', '1'}};

    vector<vector<char>> hi = {{'1', '1', '1'}, {'.'}, {'1', '1', '1'}};

    // print_vectors_cluster(hh);
    // print_vectors_cluster(hi);

    // equalise_length_char_vectors(hh, hi);

    // print_vectors_cluster(hh);
    // print_vectors_cluster(hi);

    char hd = '9';
    char hm = '1';

    int k = hd + hm;
    // cout << k;

    if (k < 106)
    {
        char j = char(k - 48);
        cout << j;
    }
    else if (k >= 106)
    {
        char j = char(k - 58);
        cout << '1' << j;
    }

    return 0;
}
