#ifndef ARRAY_HPP
#define ARRAY_HPP

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define DEFAULT "\033[0m"

#include <iostream>

template <class T> class Array
{
    public:
        Array(): _ptr(NULL), _n(0)
        {

        }
        ~Array()
        {
            delete [] _ptr;
        }
        Array(unsigned int n): _n(n)
        {
            _ptr = new T[n];
        }
        Array(const Array<T>& cpy)
        {
            this->_n = cpy._n;
            this->_ptr = new T[cpy._n];
            for (unsigned int i = 0; i < this->_n; i++)
                    this->_ptr[i] = cpy._ptr[i];
        }
        Array &operator=(const Array<T> &cpy)
        {
            if (this != &cpy)
            {
                if (this->_n != cpy._n)
                {
                    delete[] this->_ptr;
                    this->_n = cpy._n;
                    this->_ptr = new T[this->_n];
                }
                for (unsigned int i = 0; i < this->_n; i++)
                    this->_ptr[i] = cpy._ptr[i];
            }
            return (*this);
        }
        T &operator[](unsigned int i)
        {
            if (i >= this->_n)
                throw std::out_of_range("index is out of range");
            return (this->_ptr[i]);
        }
        unsigned int size() const
        {
            return (this->_n);
        }
    private:
        T *_ptr;
        unsigned int _n;
};

template <class T>
std::ostream &operator<<(std::ostream &ostr, Array<T> &array)
{
    unsigned int i;
    ostr << "[";
    for (i = 0; i < array.size() - 1; i++)
        ostr << array[i] << ", ";
    ostr << array[i] << "]";
    return (ostr);
}
#endif