#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed( const Fixed& fix )
{
    *this = fix;
}

Fixed::Fixed(void)
{
    this->setRawBits(0);
}

Fixed::Fixed( int i )
{
    this->_fixed_val = i << 8;
}

Fixed::Fixed( float f )
{
    this->_fixed_val = roundf(f * (1 << 8));
}

Fixed::~Fixed(void)
{
    ;
}

Fixed& Fixed::operator ++ (void)
{
    this->_fixed_val++;
    return (*this);
}

Fixed Fixed::operator ++ (int)
{
    Fixed fix = *this;
    this->_fixed_val++;
    
    return(fix);
}

Fixed& Fixed::operator = (const Fixed& fix)
{
    this->_fixed_val = fix.getRawBits();
    return (*this);
}

float Fixed::operator + (const Fixed& fix)
{   
    return (this->toFloat() + fix.toFloat());
}

float Fixed::operator - (const Fixed& fix)
{   
    return (this->toFloat() - fix.toFloat());
}

float Fixed::operator * (const Fixed& fix)
{   
    return (this->toFloat() * fix.toFloat());
}

float Fixed::operator / (const Fixed& fix)
{   
    return (this->toFloat() / fix.toFloat());
}

bool Fixed::operator > (const Fixed& fix)
{   
    if (this->_fixed_val > fix._fixed_val)
        return (true);
    else 
        return (false);
}

bool Fixed::operator < (const Fixed& fix)
{   
    if (this->_fixed_val < fix._fixed_val)
        return (true);
    else 
        return (false);
}

bool Fixed::operator >= (const Fixed& fix)
{   
    if (this->_fixed_val >= fix._fixed_val)
        return (true);
    else 
        return (false);
}

bool Fixed::operator <= (const Fixed& fix)
{   
    if (this->_fixed_val <= fix._fixed_val)
        return (true);
    else 
        return (false);
}

bool Fixed::operator != (const Fixed& fix)
{   
    if (this->_fixed_val != fix._fixed_val)
        return (true);
    else 
        return (false);
}

bool Fixed::operator == (const Fixed& fix)
{   
    if (this->_fixed_val == fix._fixed_val)
        return (true);
    else 
        return (false);
}

float Fixed::max(const Fixed &a, const Fixed &b)
{
    float res;
    return (res = a.toFloat() > b.toFloat() ? a.toFloat() : b.toFloat());
}

float Fixed::min(const Fixed &a, const Fixed &b)
{
    float res;
    return (res = a.toFloat() < b.toFloat() ? a.toFloat() : b.toFloat());
}


int Fixed::getRawBits( void ) const
{
    return (this->_fixed_val);
}

void Fixed::setRawBits( int const raw )
{
    this->_fixed_val = raw;
}

float Fixed::toFloat( void ) const
{
    return(float(this->getRawBits()) / (1 << 8));
}

int Fixed::toInt( void ) const
{
    return(this->getRawBits() >> 8);
}

std::ostream& operator << ( std::ostream &out, const Fixed &Fixed )
{
    out << Fixed.toFloat();
	return out;
}
