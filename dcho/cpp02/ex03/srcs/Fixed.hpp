#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const int param);
		Fixed(const float param);
		Fixed(const Fixed& copy);
		~Fixed();
		Fixed& operator = (const Fixed& fixed);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		int toInt(void) const;
		float toFloat(void) const;
		void setValue(const float value);
		float getValue(void) const;
	private:
		int _value;
		static const int _fbits;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
