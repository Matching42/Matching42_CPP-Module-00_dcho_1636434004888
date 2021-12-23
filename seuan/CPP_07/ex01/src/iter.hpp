#ifndef ITER_HPP
# define ITER_HPP

# include <array>
# include <iostream>
# include <string>

template <class T> void iter(T* arr, unsigned int len, void (*f)(T&))
{
    for (unsigned int i = 0; i < len; i++)
        (*f)(arr[i]);
}

template <class T> void add_five(T& val) { val += 5; }

#endif