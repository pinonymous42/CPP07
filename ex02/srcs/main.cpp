#include "Array.hpp"

int main(void)
{
    try
    {
        int i;
        Array<int> first(5);
        std::cout << RED << "initialized" << DEFAULT << std::endl;
        std::cout << first << std::endl;
        for (i = 0; i < 5; i++)
            first[i] = i;
        std::cout << BLUE << "first" << DEFAULT << std::endl;
        std::cout << first << std::endl;

        std::cout << BLUE << "second" << DEFAULT << std::endl;
        Array<int> second(first);
        std::cout << second << std::endl;

        std::cout << BLUE << "third" << DEFAULT << std::endl;
        Array<int> third(3);
        third = first;
        std::cout << third << std::endl;
        
        first[2] = 100;
        std::cout << GREEN << "first" << DEFAULT << std::endl;
        std::cout << first << std::endl;
        std::cout << GREEN << "second" << DEFAULT << std::endl;
        std::cout << second << std::endl;
        std::cout << GREEN << "third" << DEFAULT << std::endl;
        std::cout << third << std::endl;

        std::cout << first[100] << std::endl;
    }
    catch (std::out_of_range &e)
    {
        std::cout << RED << e.what() << DEFAULT << std::endl;
    }
}