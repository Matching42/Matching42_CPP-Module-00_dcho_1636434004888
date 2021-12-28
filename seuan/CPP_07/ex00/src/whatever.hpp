#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

template <class T> T max (T a, T b) { return (a > b ? a : b); }
template <class T> T min (T a, T b) { return (a < b ? a : b); }
template <class T> void swap (T& a, T& b) 
{
    T tmp = a;
    a = b;
    b = tmp;
}

#endif