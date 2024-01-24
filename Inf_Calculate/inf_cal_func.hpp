#ifndef INF_CAL_FUNC_H
#define INF_CAL_FUNC_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;
using nested_char_vector = vector<vector<char>>;
using nested_string_vector = vector<vector<string>>;

// declare fuctions

// ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
//  ████  ████  █████ ████   ███  █████ ███  ████  █    █  ████     ████  █   █ █     █████  ████
// █    █ █   █ █     █   █ █   █   █    █  █    █ ██   █ █         █   █ █   █ █     █     █
// █    █ ████  ███   ████  █████   █    █  █    █ █ █  █  ███      ████  █   █ █     ███    ███
// █    █ █     █     █   █ █   █   █    █  █    █ █  █ █     █     █   █ █   █ █     █         █
//  ████  █     █████ █   █ █   █   █   ███  ████  █   ██ ████      █   █  ███  █████ █████ ████
// ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄

nested_string_vector string_to_nested_string_vector(string imput_string);

void bodmas(string math_string);

// B	[{( )}]	Brackets
// O	^2 ^2	^0.5 ^0.5 Order of Powers or Roots
// D	/	Division
// M	*	Multiplication
// A	+	Addition
// S	-	Subtraction

// exampel ((2*3+4)^2-(4^0.5-5/2))
//
//  (4+2*3)^2-(4^0.5-5/2)+2
//  (4+6)^2-(4^0.5-5/2)+2    < 2*3 = 6
//  ((10)^2-(4^0.5-5/2)+2)    < 6+4 = 10
//  100-(4^0.5-5/2)+2         < (10)^2 = 100
//  100-(2-5/2)+2              < 4^0.5 = 2
//  100-(2-2.5)+2              < 5/2 = 2.5
//  100--0.5+2                 < (2-2.5) = -0.5
//  100.5+2                      < (100--0.5) = 100.5
//  102.5

// imput < "(4+2*3)^2-(4^0.5-5/2)+2"
//
//

//
// ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
//  ████  ████  █    █ █   █ █████ ████  █████ █████ ████   ████
// █     █    █ ██   █ █   █ █     █   █   █   █     █   █ █
// █     █    █ █ █  █ █   █ ███   ████    █   ███   ████   ███
// █     █    █ █  █ █  █ █  █     █   █   █   █     █   █     █
//  ████  ████  █   ██   █   █████ █   █   █   █████ █   █ ████
// ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄

// char to int
int char_to_int(char input_char);

// int to char
char int_to_char(char input_int);

// convert string to char vector
vector<char> string_to_char_vector(const string &string_value);
// <-- imput  =  "123.123"
//            =  "-123.123"
// --> output =  {'+',1','2','3','.','1','2','3'}
//            =  {'-',1','2','3','.','1','2','3'}

// convert char vector to string
string char_vector_to_string(const vector<char> &char_vector);

// --> output = "123.123"

// ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
// █   █ █████  ████ █████  ████  ████      █    █  ████  ████  ███ █████ ███ █████ ████
// █   █ █     █       █   █    █ █   █     ██  ██ █    █ █   █  █  █      █  █     █   █
// █   █ ███   █       █   █    █ ████      █ ██ █ █    █ █   █  █  ███    █  ███   ████
//  █ █  █     █       █   █    █ █   █     █    █ █    █ █   █  █  █      █  █     █   █
//   █   █████  ████   █    ████  █   █     █    █  ████  ████  ███ █     ███ █████ █   █
// ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄

// separate char vector at point
nested_char_vector separate_char_vector_at_point(const vector<char> &char_vector);
// <-- input = {'+','1','2','3','.','1','2','3'}
//           = {'-','1','2','3','.','1','2','3'}

// --> output = {{'+'},{'1','2','3'},{'.'},{'1','2','3'}}
//            = {{'-'},{'1','2','3'},{'.'},{'1','2','3'}}

// combaind char vector at point
vector<char> combine_char_vector_at_point(const nested_char_vector &separate_char_vector);
// <-- input = {{'+'},{'1','2','3'},{'.'},{'1','2','3'}}
//           = {{'-'},{'1','2','3'},{'.'},{'1','2','3'}}

// --> output = {'+',1','2','3','.','1','2','3'}
//            = {'-',1','2','3','.','1','2','3'}

// equalize lenght char vector1
void equalise_length_char_vectors(nested_char_vector &separate_char_vector_1, nested_char_vector &separate_char_vector_2);
// <-- input =  {{'+'},{'1','2','3'},{'.'},{'1','2'}}
//           =  {{'+'},{'2','3'},{'.'},{'1','2','3'}}
//           =  {{'-'},{'1','2','3'},{'.'},{'1','2'}}
//           =  {{'-'},{'2','3'},{'.'},{'1','2','3'}}

// --> output = {{'+'},{'1','2','3'},{'.'},{'1','2','0'}}
//            = {{'+'},{'0','2','3'},{'.'},{'1','2','3'}}
//            = {{'-'},{'1','2','3'},{'.'},{'1','2','0'}}
//            = {{'-'},{'0','2','3'},{'.'},{'1','2','3'}}

// ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
// █   █ █████  ████ █████  ████  ████       ████  ████  █████ ████   ███  █████ █████ ████   ████
// █   █ █     █       █   █    █ █   █     █    █ █   █ █     █   █ █   █   █   █     █   █ █
// █   █ ███   █       █   █    █ ████      █    █ ████  ███   ████  █████   █   ███   ████   ███
//  █ █  █     █       █   █    █ █   █     █    █ █     █     █   █ █   █   █   █     █   █     █
//   █   █████  ████   █    ████  █   █      ████  █     █████ █   █ █   █   █   █████ █   █ ████
// ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄

// add char vectors
nested_char_vector
add_char_vectors(const nested_char_vector &char_vector_1, const nested_char_vector &char_vector_2);
// <-- input =  {{'9','9','9'},{'.'},{'9','9','9'}}
// <--          {{'9','9','9'},{'.'},{'9','9','1'}}
// --> output = {{'1','9','9','9'},{'.'},{'9','9','0'}}

//    11111 1110 remainder
//     9999.9999 value 1
//    +9999.9991 value 2
//    19999.9990

nested_char_vector sub_char_vectors(const nested_char_vector &char_vector_1, const nested_char_vector &char_vector_2);

//    111 000 remainder
//    987.789 value 1
//  - 789.987 value 2
//    197.802
//
//        110 remainder
//    789.987 value 1
//  - 987.789 value 2

// ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
//  ████  ████  █████ ████   ███  █████ █████  ████  ████   ████
// █    █ █   █ █     █   █ █   █   █   █     █    █ █   █ █
// █    █ ████  ███   ████  █████   █   ███   █    █ ████   ███
// █    █ █     █     █   █ █   █   █   █     █    █ █   █     █
//  ████  █     █████ █   █ █   █   █   █████  ████  █   █ ████
// ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄

// add two strings
string add_two_strings(const string &string_1, const string &string_2);

// subtraction two strings
string sub_two_string(const string &string_1, const string &string_2);

#endif