#include "Point.hpp"

Point::Point (void): x(0), y(0) {}

Point::Point (const float p1, const float p2): x(p1), y(p2) {}

Point::~Point(void) {}

Point::Point(const Point &copy): x(copy.x), y(copy.y) {}

Point& Point::operator = (const Point& point)
{
	if (this == &point)
		return (*this);
	return (*this);
}

const Fixed& Point::getX(void) const
{
	return (x);
}

const Fixed& Point::getY(void) const
{
	return (y);
}





