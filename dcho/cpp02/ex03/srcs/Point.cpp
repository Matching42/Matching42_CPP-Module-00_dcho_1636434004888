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

void bspPrint(bool b)
{
	if (b == 1)
		std::cout << "[True  !!], point는 a, b, c 세 점으로 만든 삼각형 안에 있습니다." << std::endl;
	else
		std::cout << "[False !!], point는 a, b, c 세 점으로 만든 삼각형 안에 없습니다." << std::endl;
}



