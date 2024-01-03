#ifndef INF_CAL_FUNC_H
#define INF_CAL_FUNC_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// declare fuctions

// char to int
int chat_to_int(char input_char);

// convert string to char vector
vector<char> string_to_char_vector(const string &string_value); // --> output =  {'1','2','3','.','1','2','3'}

// separate char vector at point
vector<vector<char>> separate_char_vector_at_point(const vector<char> &char_vector);
// <-- input = {'1','2','3','.','1','2','3'}
// --> output = {{'1','2','3'},{'.'},{'1','2','3'}}

// equalize lenght char vector
void equalise_length_char_vectors(vector<vector<char>> &separate_char_vector_1, vector<vector<char>> &separate_char_vector_2);
// <-- input =  {{'1','2','3'},{'.'},{'1','2'}}
// <--          {{'2','3'},{'.'},{'1','2','3'}}

// --> output = {{'1','2','3'},{'.'},{'1','2','0'}}
// -->          {{'0','2','3'},{'.'},{'1','2','3'}}

// add char vectors
vector<vector<char>> add_char_vectors(const vector<vector<char>> &char_vector_1, const vector<vector<char>> &char_vector_2);
// <-- input =  {{'9','9','9'},{'.'},{'9','9','9'}}
// <--          {{'9','9','9'},{'.'},{'9','9','1'}}

// --> output ={{'1','9','9','9'},{'.'},{'9','9','0'}}

#endif