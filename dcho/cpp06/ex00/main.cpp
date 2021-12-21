#include <iostream>
#include <string>
#include <sstream>


int main(int argc, char *argv[])
{
	// float a = atof(argv[1]);

	char *pos = NULL;
	double a = std::strtod(argv[1], &pos);
	// auto b = std::stold(a);
	// float

	std::cout << std::fixed;
	std::cout.precision(1);
	std::cout << a << "f" << std::endl;


}