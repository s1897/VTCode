#include "inf_cal_func.hpp"
#include <string>
// functions

int chat_to_int(char input_char)
{
    return 0;
}

vector<int> string_to_char_vector(const string &string_value)
{

    vector<char> char_vector;

    for (char i : string_value)
    {
        char_vector.push_back(i);
    }

    return char_vector;
}

vector<vector<char>> separate_char_vector_at_point(const vector<char> &char_vector)
{
    vector<vector<char>> separate_char_vector = {{}, {'.'}, {}};
    int char_vecto_count = 0;

    for (char c : char_vector)
    {
        if (c != '.')
        {
            separate_char_vector.at(char_vecto_count).push_back(c);
        }
        else if (c == '.')
        {
            char_vecto_count = 2;
        }
    }

    return separate_char_vector;
}

void equalise_length_char_vectors(vector<vector<char>> &separate_char_vector_1, vector<vector<char>> &separate_char_vector_2)
{
    for (int i = 0; i < 3; i++)
    {
        cout << i;
        if ((separate_char_vector_1.at(i).size() == 0) && (separate_char_vector_2.at(i).size() == 0))
        {
            separate_char_vector_1.at(i).push_back('0');
            separate_char_vector_2.at(i).push_back('0');
        }

        while (separate_char_vector_1.at(i).size() != separate_char_vector_2.at(i).size())
        {
            if (separate_char_vector_1.at(i).size() < separate_char_vector_2.at(i).size())
            {
                if (i == 0)
                {
                    separate_char_vector_1.at(i).insert(separate_char_vector_1.at(i).begin(), '0');
                }
                else if (i == 2)
                {
                    separate_char_vector_1.at(i).push_back('0');
                }
            }

            if (separate_char_vector_1.at(i).size() > separate_char_vector_2.at(i).size())
            {
                if (i == 0)
                {
                    separate_char_vector_2.at(i).insert(separate_char_vector_2.at(i).begin(), '0');
                }
                else if (i == 2)
                {
                    separate_char_vector_2.at(i).push_back('0');
                }
            }
        }
    }
}

vector<vector<char>> add_char_vectors(const vector<vector<char>> &char_vector_1, const vector<vector<char>> &char_vector_2)
{
    vector<vector<char>> output_vector = {{}, {'.'}, {}};

    for (int i = 2; i >= 0; i--)
    {
        cout << i;
    }

    return output_vector;
}
