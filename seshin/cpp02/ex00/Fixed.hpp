#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private :
        int _value;
        static const int _fBits;
    public :
        Fixed();
        ~Fixed();
        Fixed(const Fixed& fixed);
        Fixed& operator = (const Fixed& fixed);
        int getRawBits(void) const;
        void setRawBits(const int& raw);
};

#endif