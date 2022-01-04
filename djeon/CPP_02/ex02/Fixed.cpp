/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:41:55 by djeon             #+#    #+#             */
/*   Updated: 2022/01/04 17:29:29 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
    fixed_value = 0;
}

Fixed::Fixed(const Fixed &rhs) {
    *this = rhs;
}

Fixed::Fixed(const int integer) {
    fixed_value = integer << fractional_bits;
}

Fixed::Fixed(const float floating) {
    fixed_value = roundf(floating * (1 << fractional_bits));
}

Fixed& Fixed::operator = (const Fixed &rhs) {
    fixed_value = rhs.getRawBits();
    return *this;
}

Fixed& Fixed::operator ++ (void) {
    ++fixed_value;
    return *this;
}

Fixed Fixed::operator ++ (int) {
    Fixed tmp(*this);
    ++fixed_value;
    return tmp;
}

Fixed Fixed::operator + (const Fixed &rhs) {
    Fixed result;
    result.setRawBits(fixed_value + rhs.fixed_value);
    return result;
}

Fixed Fixed::operator - (const Fixed &rhs) {
    Fixed result;
    result.setRawBits(fixed_value - rhs.fixed_value);
    return result;
}

Fixed Fixed::operator * (const Fixed &rhs) {
    Fixed result;
    long long multiply = (long long)fixed_value * (long long)rhs.fixed_value;
    result.setRawBits((int)(multiply / (1 << fractional_bits)));
    return result;
}

Fixed Fixed::operator / (const Fixed &rhs) {
    Fixed result;
    float divide = (float)fixed_value / (float)rhs.fixed_value;
    result.setRawBits((int)(divide * (1 << fractional_bits)));
    return *this;
}

std::ostream &operator << (std::ostream &out, const Fixed &rhs) {
    out << rhs.toFloat();
    return out;
}

bool Fixed::operator < (const Fixed &rhs) const {
    return (fixed_value < rhs.fixed_value);
}

bool Fixed::operator > (const Fixed &rhs) const {
    return (fixed_value > rhs.fixed_value);
}

bool Fixed::operator <= (const Fixed &rhs) {
    return (fixed_value <= rhs.fixed_value);
}

bool Fixed::operator >= (const Fixed &rhs) {
    return (fixed_value >= rhs.fixed_value);
}

bool Fixed::operator == (const Fixed &rhs) {
    return (fixed_value == rhs.fixed_value);
}

bool Fixed::operator != (const Fixed &rhs) {
    return (fixed_value != rhs.fixed_value);
}

Fixed::~Fixed(void) {
    ;
}

float Fixed::toFloat(void) const {
    return (float)fixed_value/(1 << fractional_bits);
}

int Fixed::toInt(void) const {
    return (int)fixed_value >> fractional_bits;
}

int Fixed::getRawBits( void ) const {
    return fixed_value;
}

void Fixed::setRawBits( int const raw ) {
    fixed_value = raw;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
    if (a > b)
        return b;
    else
        return a;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
    if (a > b)
        return a;
    else
        return b;
}