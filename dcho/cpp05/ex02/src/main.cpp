#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main ()
{
	// sform
	try
	{
		Bureaucrat dcho("dcho", 4);
		ShrubberyCreationForm sform("ssform");

		dcho.signForm(sform);
		dcho.executeForm(sform);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	// rform
	try
	{
		Bureaucrat dcho("dcho", 1);
		RobotomyRequestForm rform("rform");

		dcho.signForm(rform);
		dcho.executeForm(rform);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	// pform
	try
	{
		Bureaucrat dcho("dcho", 4);
		PresidentialPardonForm pform("pform");

		dcho.signForm(pform);
		dcho.executeForm(pform);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}