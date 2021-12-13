#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    public:
        Fixed( const Fixed& fix );
        Fixed( void );
        Fixed( int i );
        Fixed( float f );
        ~Fixed( void );
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed& operator = (const Fixed& fix);

    private:
        static const int _bits;
        int _fixed_val;
};

std::ostream& operator << ( std::ostream &out, const Fixed &Fixed );

#endif