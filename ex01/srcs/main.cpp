#include "iter.hpp"

template <class Type> void func1(const Type &elem)
{
    std::cout << RED << elem << DEFAULT;
}

template <class Type> void func2(const Type &elem)
{
    std::cout << BLUE << elem << DEFAULT;
}

int main(void)
{
    std::cout << "int array" << std::endl;
    int int_array[] = {1, 2, 3, 4, 5};
    iter(int_array, 5, func1<int>);
    std::cout << std::endl;
    iter(int_array, 5, func2);
    std::cout << std::endl;

    std::cout << "String array" << std::endl;
    std::string string_array[] = {"1", "2", "3", "4", "5"};
    iter(string_array, 5, func1<std::string>);
    std::cout << std::endl;
    iter(string_array, 5, func2);
    std::cout << std::endl;
    return (0);
}