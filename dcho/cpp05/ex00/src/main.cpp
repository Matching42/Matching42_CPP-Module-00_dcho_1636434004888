// exceptions

#include "Bureaucrat.hpp"

int main ()
{
	try
	{
		Bureaucrat bur("James", 2);
		std::cout <<  bur << std::endl;
		bur.incrementGrade(); // 1
		std::cout << bur << std::endl;
		bur.incrementGrade(); // 0, error
		std::cout << bur << std::endl;

		// decrement example will add
		Bureaucrat bur2("dcho", 151);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}