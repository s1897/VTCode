#include <iostream>
#include <vector>
#include <numeric>

int main()
{

    std::vector<double> vector_array = {1.01, 2.01, 3.01};

    double sum = accumulate(vector_array.begin(), vector_array.end(), 0.0);
    double average = sum / vector_array.size();

    std::cout << average << std::endl;

    return 0;
}
