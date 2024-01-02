#ifndef INF_CAL_FUNC_H
#define INF_CAL_FUNC_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// declare fuctions

// convert string to vector
vector<char> string_to_char_vector(const string &string_value);

vector<vector<char>> separate_char_vector_at_point(const vector<char> &char_vector);

void equalise_length_char_vectors(vector<vector<char>> &separate_char_vector_1, vector<vector<char>> &separate_char_vector_2);

#endif