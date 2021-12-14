// exceptions

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	// 1. Constructor try catch
	// Form a("a", 235, 235); // Too low
	// Form b("b", -42, -42); // Too high

	// 2. init data
	Form a("a", 1, 2);
	Form c("c", 100, 100);

	Bureaucrat jim("jim", 30);

	// can not sign
	// a.beSigned(jim);

	// can sign
	// c.beSigned(jim);

	// 3. signForm



	return 0;
}