#include "inf_cal_func.hpp"
#include <string>
// functions

// ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
//  ████  ████  █████ ████   ███  █████ ███  ████  █    █  ████     ████  █   █ █     █████  ████
// █    █ █   █ █     █   █ █   █   █    █  █    █ ██   █ █         █   █ █   █ █     █     █
// █    █ ████  ███   ████  █████   █    █  █    █ █ █  █  ███      ████  █   █ █     ███    ███
// █    █ █     █     █   █ █   █   █    █  █    █ █  █ █     █     █   █ █   █ █     █         █
//  ████  █     █████ █   █ █   █   █   ███  ████  █   ██ ████      █   █  ███  █████ █████ ████
// ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄

//     // B	[{( )}]	Brackets
//     // O	^2	^0.5 Order of Powers or Roots
//     // D	/	Division
//     // M	*	Multiplication
//     // A	+	Addition
//     // S	-	Subtraction

/*
{'(','4','+','2','*','3',')','^','2','-','(','4','^','0','.','5','-','5','/','2',')','+','2'}

(4+2*3)^2-(4^0.5-5/2)+2 = 102.5

1.
(4+2*3)^2-(4^0.5-5/2)+2 -> (4+2*3) -> (4+6)^2-(4^0.5-5/2)+2

2.
(4+6)^2-(4^0.5-5/2)+2 -> (4+6) -> (10)^2-(4^0.5-5/2)+2

3.
(10)^2-(4^0.5-5/2)+2 -> (10) -> 10^2-(4^0.5-5/2)+2

4.
(10)^2-(4^0.5-5/2)+2 -> 10^2 -> 100-(4^0.5-5/2)+2

5.
100-(4^0.5-5/2)+2 -> 100-(4^0.5 -> 100-(2-5/2)+2

6.
100-(2-5/2)+2 -> 100-(2-5/2) -> 100-(2-2.5)+2

7.
00-(2-2.5)+2 = 100-(2-2.5) = 100-(-0.5)+2

8.
100-(-0.5)+2 = 100-(-0.5) = 100--0.5+2

9.
100--0.5+2 = 100--0.5 = 100.5+2

10.
100.5+2 = 100.5+2 = 102.5




{
{'('},
{'4'},
'+',
'2',
'*',
'3',
')',
'^',
'2',
'-',
'(',
'4',
'^',
'0','.','5',
'-',
'5',
'/',
'2',
')',
'+',
'2'
}



*/

nested_char_vector bodmas(const vector<char> &char_vector)
{
    nested_char_vector bodmas;
    int brackets = 0;

    using it_string = vector<char>::const_iterator;
    it_string it = char_vector.begin();

    while (it != char_vector.end())
    {

        it++;
    }

    cout << brackets << endl;

    return bodmas;
}

// ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
//  ████  ████  █    █ █   █ █████ ████  █████ █████ ████   ████
// █     █    █ ██   █ █   █ █     █   █   █   █     █   █ █
// █     █    █ █ █  █ █   █ ███   ████    █   ███   ████   ███
// █     █    █ █  █ █  █ █  █     █   █   █   █     █   █     █
//  ████  ████  █   ██   █   █████ █   █   █   █████ █   █ ████
// ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄

int char_to_int(char input_char)
{
    return input_char - '0';
}

char int_to_char(char input_int)
{
    return char(input_int + '0');
}

vector<char> string_to_char_vector(const string &string_value)
{
    vector<char> char_vector;

    using it_string = string::const_iterator;
    it_string it = string_value.begin();

    while (it != string_value.end())
    {
        char_vector.push_back(*it);
        it++;
    }

    return char_vector;
}

// vector<char> string_to_char_vector(const string &string_value)
// {

//     vector<char> char_vector;
//     bool point = false;

//     using it_string = string::const_iterator;
//     it_string it = string_value.begin();

//     if (string_value.begin() == string_value.end())
//     {
//         char_vector = {'+', '0', '.', '0'};
//     }

//     while (it != string_value.end())
//     {

//         if (it == string_value.begin())
//         {
//             if (*it != '+' && *it != '-')
//             {
//                 char_vector.push_back('+');
//             }
//         }

//         if (*it == '.')
//         {
//             point = true;
//         }

//         char_vector.push_back(*it);

//         if ((it + 1) == (string_value.end()))
//         {
//             if ((*(char_vector.end() - 1) != '.') && (point == false))
//             {
//                 char_vector.push_back('.');
//                 char_vector.push_back('0');
//             }

//             else if ((*(char_vector.end() - 1) == '.') && (point == true))
//             {
//                 char_vector.push_back('0');
//             }
//         }

//         if (((char_vector[0] == '+') || (char_vector[0] == '-')) && (char_vector[1] == '.'))
//         {
//             char_vector.insert(char_vector.begin() + 1, '0');
//         }

//         it++;
//     }

//     return char_vector;
// }

string char_vector_to_string(const vector<char> &char_vector)
{
    string string_output;
    for (char i : char_vector)
    {
        string_output.push_back(i);
    }
    return string_output;
}

// ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
// █   █ █████  ████ █████  ████  ████      █    █  ████  ████  ███ █████ ███ █████ ████
// █   █ █     █       █   █    █ █   █     ██  ██ █    █ █   █  █  █      █  █     █   █
// █   █ ███   █       █   █    █ ████      █ ██ █ █    █ █   █  █  ███    █  ███   ████
//  █ █  █     █       █   █    █ █   █     █    █ █    █ █   █  █  █      █  █     █   █
//   █   █████  ████   █    ████  █   █     █    █  ████  ████  ███ █     ███ █████ █   █
// ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄

nested_char_vector separate_char_vector_at_point(const vector<char> &char_vector)
{
    nested_char_vector separate_char_vector = {{}, {}, {}, {}};
    int position_char_vector = 0;

    using it_char_vector = vector<char>::const_iterator;

    it_char_vector it = char_vector.begin();

    while (it != char_vector.end())
    {
        if (it == char_vector.begin())
        {
            separate_char_vector.at(position_char_vector).push_back(*it);
            position_char_vector = 1;
        }
        else if (*it == '.')
        {
            position_char_vector = 2;
            separate_char_vector.at(position_char_vector).push_back(*it);
            position_char_vector = 3;
        }
        else
        {
            separate_char_vector.at(position_char_vector).push_back(*it);
        }
        it++;
    }
    return separate_char_vector;
}

vector<char> combine_char_vector_at_point(const nested_char_vector &separate_char_vector)
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

void equalise_length_char_vectors(nested_char_vector &separate_char_vector_1, nested_char_vector &separate_char_vector_2)
{

    bool equalised_before_point = false;
    bool equalised_after_point = false;

    while ((equalised_before_point != true) || (equalised_after_point != true))
    {
        if (separate_char_vector_1.at(1).size() < separate_char_vector_2.at(1).size())
        {
            separate_char_vector_1.at(1).insert(separate_char_vector_1.at(1).begin(), '0');
        }
        else if (separate_char_vector_1.at(1).size() > separate_char_vector_2.at(1).size())
        {
            separate_char_vector_2.at(1).insert(separate_char_vector_2.at(1).begin(), '0');
        }
        else if (separate_char_vector_1.at(1).size() == separate_char_vector_2.at(1).size())
        {
            equalised_before_point = true;
        }

        if (separate_char_vector_1.at(3).size() < separate_char_vector_2.at(3).size())
        {
            separate_char_vector_1.at(3).push_back('0');
        }
        else if (separate_char_vector_1.at(3).size() > separate_char_vector_2.at(3).size())
        {
            separate_char_vector_2.at(3).push_back('0');
        }
        else if (separate_char_vector_1.at(3).size() == separate_char_vector_2.at(3).size())
        {
            equalised_after_point = true;
        }
    }
}

// ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
// █   █ █████  ████ █████  ████  ████       ████  ████  █████ ████   ███  █████ █████ ████   ████
// █   █ █     █       █   █    █ █   █     █    █ █   █ █     █   █ █   █   █   █     █   █ █
// █   █ ███   █       █   █    █ ████      █    █ ████  ███   ████  █████   █   ███   ████   ███
//  █ █  █     █       █   █    █ █   █     █    █ █     █     █   █ █   █   █   █     █   █     █
//   █   █████  ████   █    ████  █   █      ████  █     █████ █   █ █   █   █   █████ █   █ ████
// ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄

nested_char_vector add_char_vectors(const nested_char_vector &char_vector_1, const nested_char_vector &char_vector_2)
{
    // <-- input =  {{'9','9','9'},{'.'},{'9','9','9'}}
    // <--          {{'9','9','9'},{'.'},{'9','9','1'}}

    // --> output ={{'1','9','9','9'},{'.'},{'9','9','0'}}

    nested_char_vector output_vector = {{}, {'.'}, {}};
    bool remainder = false;

    using vvc_reverse_iterator = nested_char_vector::reverse_iterator;
    using vvc_const_reverse_iterator = nested_char_vector::const_reverse_iterator;

    using vc_reverse_iterator = vector<char>::reverse_iterator;
    using vc_const_reverse_iterator = vector<char>::const_reverse_iterator;

    vvc_reverse_iterator vvc_it_output_vector = output_vector.rbegin();

    vvc_const_reverse_iterator vvc_it_char_vector_1 = char_vector_1.rbegin();
    vvc_const_reverse_iterator vvc_it_char_vector_2 = char_vector_2.rbegin();

    while (
        (vvc_it_char_vector_1 != char_vector_1.rend()) &&
        (vvc_it_char_vector_2 != char_vector_2.rend()))
    {

        vc_reverse_iterator vc_it_output_vector = (*vvc_it_output_vector).rbegin();
        vc_const_reverse_iterator vc_it_char_vector_1 = (*vvc_it_char_vector_1).rbegin();
        vc_const_reverse_iterator vc_it_char_vector_2 = (*vvc_it_char_vector_2).rbegin();

        while (
            (vc_it_char_vector_1 != (*vvc_it_char_vector_1).rend()) &&
            (vc_it_char_vector_2 != (*vvc_it_char_vector_2).rend()))
        {

            int add_value;
            int value_int_1 = char_to_int(*vc_it_char_vector_1);
            int value_int_2 = char_to_int(*vc_it_char_vector_2);

            if (*vc_it_char_vector_1 != '.')

            {
                if (remainder)
                {
                    add_value = value_int_1 + value_int_2 + 1;
                    remainder = false;
                }
                else
                {
                    add_value = value_int_1 + value_int_2;
                }

                if (add_value >= 10)
                {
                    remainder = true;
                    add_value -= 10;
                }

                (*vvc_it_output_vector).insert((*vvc_it_output_vector).begin(), int_to_char(add_value));
            }

            vc_it_output_vector++;
            vc_it_char_vector_1++;
            vc_it_char_vector_2++;
        }

        vvc_it_output_vector++;
        vvc_it_char_vector_1++;
        vvc_it_char_vector_2++;
    }
    if (remainder)
    {
        output_vector[0].insert(output_vector[0].begin(), '1');
    }

    return output_vector;
}

nested_char_vector sub_char_vectors(const nested_char_vector &char_vector_1, const nested_char_vector &char_vector_2)
{
    return nested_char_vector();
}

// ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
//  ████  ████  █████ ████   ███  █████ █████  ████  ████   ████
// █    █ █   █ █     █   █ █   █   █   █     █    █ █   █ █
// █    █ ████  ███   ████  █████   █   ███   █    █ ████   ███
// █    █ █     █     █   █ █   █   █   █     █    █ █   █     █
//  ████  █     █████ █   █ █   █   █   █████  ████  █   █ ████
// ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄

string add_two_strings(const string &string_1, const string &string_2)
{

    nested_char_vector char_vector_1 = separate_char_vector_at_point(string_to_char_vector(string_1));
    nested_char_vector char_vector_2 = separate_char_vector_at_point(string_to_char_vector(string_2));

    equalise_length_char_vectors(char_vector_1, char_vector_2);

    return char_vector_to_string(combine_char_vector_at_point(add_char_vectors(char_vector_1, char_vector_2)));
}

string sub_two_string(const string &string_1, const string &string_2)
{
    nested_char_vector char_vector_1 = separate_char_vector_at_point(string_to_char_vector(string_1));
    nested_char_vector char_vector_2 = separate_char_vector_at_point(string_to_char_vector(string_2));

    equalise_length_char_vectors(char_vector_1, char_vector_2);

    return string(); // s
}
