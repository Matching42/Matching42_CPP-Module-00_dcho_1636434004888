/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:42:01 by djeon             #+#    #+#             */
/*   Updated: 2021/12/14 14:08:52 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
    public:
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        
        Fixed(void);
        Fixed(const Fixed &rhs);
        Fixed& operator = (const Fixed &rhs);
        ~Fixed(void);

    private:
        int fixed_value;
        static const int fractional_bits = 8;
};

#endif