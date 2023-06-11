#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <class Type> void swap(Type &a, Type &b)
{
    Type tmp = a;
    a = b;
    b = tmp;
}

template <class Type> Type min(Type a, Type b)
{
    return (a < b ? a : b);
}

template <class Type> Type max(Type a, Type b)
{
    return (a > b ? a : b);
}
#endif