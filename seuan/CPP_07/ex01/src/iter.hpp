#ifndef ITER_HPP
# define ITER_HPP

# include <array>
# include <iostream>
# include <string>

// 함수 포인터의 변수가 const 형식인 경우 고려.
template <class T> void iter(T* arr, unsigned int len, void (*f)(T&))
{
    for (unsigned int i = 0; i < len; i++)
        (*f)(arr[i]);
}

template <class T> void add_five(T& val) { val += 5; }

#endif