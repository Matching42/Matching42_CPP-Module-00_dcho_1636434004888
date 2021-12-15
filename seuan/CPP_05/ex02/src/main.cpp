// exceptions

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main ()
{
	// 1. Constructor try catch
	// std::cout << "Form constructor" << std::endl;
	// Form a("a", 235, 235); // GradeTooLowException
	// Form b("b", -42, -42); // GradeTooHighException
	ShrubberyCreationForm sform;
	RobotomyRequestForm rform;
	PresidentialPardonForm pform;
	std::cout << std::endl;

	std::cout << "Bureaucrat constructor" << std::endl;
	Bureaucrat jim("jim", -42);
	Bureaucrat james("james", 235);

	// 2. init data
	std::cout << std::endl;
	// Form c("c", 1, 2);
	// Form d("d", 100, 100);
	Bureaucrat amy("amy", 3);

	// 3. besigned, signform
	// sform
	// amy.signForm(sform);
	// amy.executeForm(sform);
	
	// rform
	// amy.signForm(rform);
	// amy.executeForm(rform);
	// std::cout << std::endl;

	// pform
	amy.signForm(pform);
	amy.executeForm(pform);
	// amy.signForm(c);
	std::cout << std::endl;
	// amy.signForm(d);

	return 0;
}