#include "Fixed.hpp"

const int Fixed::_fbits = 8;

Fixed::Fixed():
	_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int param):
	_value(param << 8)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float param):
	_value(roundf(param * (1 << 8)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator = (const Fixed& fixed)
{
	if (this == &fixed)
		return (*this);
	std::cout << "Assignation operator called" << std::endl;
	_value = fixed._value;
	return (*this);
}

int Fixed::toInt(void) const
{
	return (_value >> 8);
}

float Fixed::toFloat(void) const
{
	return (float(_value) / (1 << 8));
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}