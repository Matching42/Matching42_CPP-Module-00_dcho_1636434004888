#include "Point.hpp"

int main(void)
{
	Point a(15, 15), b(23, 30), c(10, 40);

	Point d(15, 15), d1(15, 16);
	Point d2(23, 30), d3(22, 30);
	Point d4(10, 40), d5(11, 39);

	std::cout << bsp(a, b, c, d) << std::endl;
	std::cout << bsp(a, b, c, d1) << std::endl;
	std::cout << bsp(a, b, c, d2) << std::endl;
	std::cout << bsp(a, b, c, d3) << std::endl;
	std::cout << bsp(a, b, c, d4) << std::endl;
	std::cout << bsp(a, b, c, d5) << std::endl;
}
