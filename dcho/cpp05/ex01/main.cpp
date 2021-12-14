// exceptions

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	// 1. Constructor try catch
	std::cout << "Form constructor" << std::endl;
	Form a("a", 235, 235); // GradeTooLowException
	Form b("b", -42, -42); // GradeTooHighException
	
	std::cout << std::endl;

	std::cout << "Bureaucrat constructor" << std::endl;
	Bureaucrat jim("jim", -42);
	Bureaucrat james("james", 235);

	// 2. init data
	std::cout << std::endl;
	Form c("c", 1, 2);
	Form d("d", 100, 100);
	Bureaucrat amy("amy", 5);

	// 3. besigned, signform
	std::cout << std::endl;
	amy.signForm(c);
	std::cout << std::endl;
	amy.signForm(d);

	return 0;
}