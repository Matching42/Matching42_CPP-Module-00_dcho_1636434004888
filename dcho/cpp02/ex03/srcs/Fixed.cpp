#include "Fixed.hpp"

const int Fixed::_fbits = 8;

Fixed::Fixed(): _value(0) {}

Fixed::Fixed(const int param): _value(param << 8) {}

Fixed::Fixed(const float param): _value(roundf(param * (1 << 8))) {}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed& copy)
{
	*this = copy;
}

int Fixed::getRawBits(void) const
{
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

Fixed& Fixed::operator = (const Fixed& fixed)
{
	if (this == &fixed)
		return (*this);
	_value = fixed.getRawBits();
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

void Fixed::setValue(const float value)
{
	this->_value = value;
}

float Fixed::getValue(void) const
{
	return (this->_value);
}