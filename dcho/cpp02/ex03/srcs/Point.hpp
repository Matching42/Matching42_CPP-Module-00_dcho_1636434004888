#ifndef POINT_HPP
#define POINT_HPP
#include <iostream>
#include "Fixed.hpp"

class Point {
	public:
		Point();
		~Point();
		Point(const Point& copy);
		Point(const float x, const float y);
		Point& operator = (const Point& point);
		const Fixed& getX(void) const;
    	const Fixed& getY(void) const;

	private:
		const Fixed x;
		const Fixed y;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);
void bspPrint(bool b);

#endif
