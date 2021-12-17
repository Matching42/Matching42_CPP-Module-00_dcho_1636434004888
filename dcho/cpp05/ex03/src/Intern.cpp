#include "Intern.hpp"

Intern::Intern()
{

}

Intern::~Intern()
{

}

Intern::Intern(const Intern& copy)
{
	*this = copy;
}

Intern &Intern::operator = (const Intern& intern)
{
	if (this == &intern)
		return (*this);
	return (*this);
}

Form* Intern::makeForm(std::string fname, std::string target)
{

	Form *form;
	std::string arrForm[3] = { "shrubbery creation", "robotomy request", "presidential pardon"};

	Form* (Intern::*ptr[])(std::string) =
    { &Intern::shrubberyNew, &Intern::robotomyNew, &Intern::presidentialNew};
	for (int i = 0; i < 3; i++)
	{
		if (fname == arrForm[i])
		{
			form = ((this->*ptr[i])(target));
			std::cout << "Intern creates " << form->getName() << std::endl;
			return form;
		}
	}
	throw (InternException());
	return NULL;
}

Form* Intern::shrubberyNew(std::string target)
{
	Form *form = new ShrubberyCreationForm(target);
	return form;
}

Form* Intern::robotomyNew(std::string target)
{
	Form *form = new RobotomyRequestForm(target);
	return form;
}

Form* Intern::presidentialNew(std::string target)
{
	Form *form = new PresidentialPardonForm(target);
	return form;
}

const char* Intern::InternException::what() const throw()
{
	return ("Cannot makes form");
}
