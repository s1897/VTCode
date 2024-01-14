#include <iostream>
#include <vector>

int main()
{
    // Normel Array
    double array[4] = {1.0, 2.0, 3.0, 2.0};
    std::cout << array[3] << std::endl;
    array[3] = 4.0;
    std::cout << array[3] << std::endl;

    // Vectors
    std::vector<double> vector_array = {1.0, 2.0, 3.0};
    std::cout << vector_array.at(0) << std::endl;
    vector_array.push_back(2.0);
    std::cout << vector_array.at(3) << std::endl;
    vector_array.at(3) = 4.0;
    std::cout << vector_array.at(3) << std::endl;

    std::cout << vector_array.size() << std::endl;

    return 0;
}
