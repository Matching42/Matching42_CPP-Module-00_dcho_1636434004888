// exceptions

#include "Bureaucrat.hpp"

int main ()
{
	Bureaucrat bur("James", 1);
	Bureaucrat bur2;

	std::cout << std::endl;

	std::cout <<  bur << std::endl;

	std::cout << std::endl;

	// bur2.incrementGrade();
	// bur2.decrementGrade();

	// // GradeTooLowException
	// bur2.decrementGrade();

	// // GradeTooHighException
	// // bur.incrementGrade();
	// std::cout << std::endl;
	return 0;
}