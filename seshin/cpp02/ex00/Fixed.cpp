#include "Fixed.hpp"

const int Fixed::_fBits = 8;

Fixed::Fixed()
{
    _value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_value);
}

void Fixed::setRawBits(const int& raw)
{
    _value = raw;
}

Fixed& Fixed::operator = (const Fixed& fixed)
{
    if (this == &fixed)
        return *this;
    std::cout << "Assignation operator called" << std::endl;
    _value = fixed.getRawBits();
    return *this;

}