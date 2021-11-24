#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    public:
        Fixed( const Fixed& fix );
        Fixed( void );
        ~Fixed( void );
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        Fixed& operator = (const Fixed& fix);

    private:
        static const int _bits;
        int _fixed_val;
};

#endif