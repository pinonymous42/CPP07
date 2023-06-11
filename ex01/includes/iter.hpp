#ifndef ITER_HPP
#define ITER_HPP

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define DEFAULT "\033[0m"

#include <iostream>

template <class Type> void iter(Type *addr, int length, void (*func)(const Type &))
{
    if (!addr || length < 0 || !func)
        return ;
    for (int i = 0; i < length; i++)
        func(addr[i]);
}
#endif