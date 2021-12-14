/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:41:55 by djeon             #+#    #+#             */
/*   Updated: 2021/11/29 10:22:53 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
    std::cout << "Default constructor called" << std::endl;
    fixed_value = 0;
}

Fixed::Fixed(const Fixed &rhs) {
    std::cout << "Copy constructor called" << std::endl;
    *this = rhs;
}

Fixed::Fixed(const int integer) {
    std::cout << "Int constructor called" << std::endl;
    fixed_value = integer << fractional_bits;
}

Fixed::Fixed(const float floating) {
    std::cout << "Float constructor called" << std::endl;
    fixed_value = roundf(floating * (1 << fractional_bits));;
}

Fixed& Fixed::operator = (const Fixed &rhs) {
    std::cout << "Assignation operator called" << std::endl;
    fixed_value = rhs.getRawBits();
    return *this;
}

std::ostream &operator << (std::ostream &out, const Fixed &rhs) {
    out << rhs.toFloat();
    return out;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat(void) const {
    return (float)fixed_value/(1 << fractional_bits);
}

int Fixed::toInt(void) const {
    return (int)fixed_value >> fractional_bits;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return fixed_value;
}

void Fixed::setRawBits( int const raw ) {
    fixed_value = raw;
}