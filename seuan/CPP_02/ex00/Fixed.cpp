#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed( const Fixed& fix )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fix;
}

Fixed::Fixed(void)
{
    this->setRawBits(0);
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator = (const Fixed& fix)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_fixed_val = fix.getRawBits();
    return (*this);
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixed_val);
}

void Fixed::setRawBits( int const raw )
{
    this->_fixed_val = raw;
}