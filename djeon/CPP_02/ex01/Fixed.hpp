/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:42:01 by djeon             #+#    #+#             */
/*   Updated: 2021/12/15 00:14:33 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
    public:
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat(void) const;
        int toInt(void) const;
        
        Fixed(void);
        Fixed(const Fixed &rhs);
        Fixed(const int integer);
        Fixed(const float floating);
        Fixed& operator = (const Fixed &rhs);
        ~Fixed(void);

    private:
        int fixed_value;
        static const int fractional_bits = 8;
};

std::ostream &operator << (std::ostream &out, const Fixed &rhs);

#endif