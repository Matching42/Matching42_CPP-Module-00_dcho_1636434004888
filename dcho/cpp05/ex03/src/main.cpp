#include "Intern.hpp"

int main ()
{
	try
	{
		Intern someRandomIntern;
		Form* rrf;
		// rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		// rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		// rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		rrf = someRandomIntern.makeForm("invalid form", "Bender");
		delete rrf;
		rrf = NULL;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// system("leaks a.out");
	return 0;
}