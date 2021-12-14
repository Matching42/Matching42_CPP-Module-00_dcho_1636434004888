#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
    public:
        Fixed( const Fixed& fix );
        Fixed( void );
        Fixed( const int param );
        Fixed( const float param );
        ~Fixed( void );

		float toFloat(void) const;
		const static Fixed& max(const Fixed &a, const Fixed &b);
        const static Fixed& min(const Fixed &a, const Fixed &b);
        Fixed& operator = (const Fixed& fix);
        Fixed& operator ++ (void);
        Fixed operator ++ (int);
		Fixed& operator -- (void);
        Fixed operator -- (int);
        Fixed operator + (const Fixed& fix);
        Fixed operator - (const Fixed& fix);
        Fixed operator * (const Fixed& fix);
        Fixed operator / (const Fixed& fix);
        bool operator > (const Fixed& fix);
        bool operator < (const Fixed& fix);
        bool operator >= (const Fixed& fix);
        bool operator <= (const Fixed& fix);
        bool operator == (const Fixed& fix);
        bool operator != (const Fixed& fix);

    private:
		int _value;
		static const int _fbits;
};

std::ostream& operator << ( std::ostream &out, const Fixed &Fixed );

#endif