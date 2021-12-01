#include "Point.hpp"

int main(void)
{
	Point a(15, 15), b(23, 30), c(10, 40);

	Point d(15, 15), d1(15, 16);
	Point d2(23, 30), d3(22, 30);
	Point d4(10, 40), d5(11, 39);

	bspPrint(bsp(a, b, c, d));
	bspPrint(bsp(a, b, c, d1));
	bspPrint(bsp(a, b, c, d2));
	bspPrint(bsp(a, b, c, d3));
	bspPrint(bsp(a, b, c, d4));
	bspPrint(bsp(a, b, c, d5));
}
