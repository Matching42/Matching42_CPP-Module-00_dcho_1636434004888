#include "Fixed.hpp"

const int Fixed::_fbits = 8;

Fixed::Fixed( const Fixed& fix )
{
    *this = fix;
}

Fixed::Fixed(void): _value(0) {}

Fixed::Fixed( const int param )
{
    _value = param << 8;
}

Fixed::Fixed( const float param )
{
    _value = roundf(param * (1 << 8));
}

Fixed::~Fixed(void) {}

Fixed& Fixed::operator ++ (void)
{
    _value++;
    return (*this);
}

Fixed Fixed::operator ++ (int)
{
    Fixed fix = *this;
    _value++;
    return(fix);
}

Fixed& Fixed::operator -- (void)
{
    _value--;
    return (*this);
}

Fixed Fixed::operator -- (int)
{
    Fixed fix = *this;
    _value--;
    return(fix);
}

Fixed& Fixed::operator = (const Fixed& fix)
{
    _value = fix._value;
    return (*this);
}

Fixed Fixed::operator + (const Fixed& fix)
{
	return (Fixed(this->toFloat() + fix.toFloat()));
}

Fixed Fixed::operator - (const Fixed& fix)
{
	return (Fixed(this->toFloat() - fix.toFloat()));
}

Fixed Fixed::operator * (const Fixed& fix)
{
    return (Fixed(this->toFloat() * fix.toFloat()));
}

Fixed Fixed::operator / (const Fixed&  fix)
{
	return (Fixed(this->toFloat() / fix.toFloat()));
}

bool Fixed::operator > (const Fixed& fix)
{
    if (_value > fix._value)
        return (true);
    else
        return (false);
}

bool Fixed::operator < (const Fixed& fix)
{
    if (_value < fix._value)
        return (true);
    else
        return (false);
}

bool Fixed::operator >= (const Fixed& fix)
{
    if (_value >= fix._value)
        return (true);
    else
        return (false);
}

bool Fixed::operator <= (const Fixed& fix)
{
    if (_value <= fix._value)
        return (true);
    else
        return (false);
}

bool Fixed::operator != (const Fixed& fix)
{
    if (_value != fix._value)
        return (true);
    else
        return (false);
}

bool Fixed::operator == (const Fixed& fix)
{
    if (_value == fix._value)
        return (true);
    else
        return (false);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.toFloat() > b.toFloat())
		return (a);
	else
		return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.toFloat() < b.toFloat())
		return (a);
	else
		return (b);
}

float Fixed::toFloat( void ) const
{
    return(float(_value) / (1 << 8));
}

std::ostream& operator << ( std::ostream &out, const Fixed &Fixed )
{
    out << Fixed.toFloat();
	return out;
}
