 #include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string name, int grade)
	: _name("Default"), _grade(150)
{
	if (isValidGrade(grade))
	{
		_name = name;
		_grade = grade;
		std::cout << _name << " constructor called." << std::endl;
	}
}

Bureaucrat::Bureaucrat()
{
	_name = "Default";
	_grade = 150;
	std::cout << _name << " constructor called." << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << _name << " destructor called." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bur)
{
	std::cout << _name << " copy constructor called." << std::endl;
	*this = bur;
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat &bur)
{
	if (this == &bur)
		return (*this);
	_name = bur._name;
	_grade = bur._grade;
	return (*this);
}

std::ostream& operator << ( std::ostream &out, const Bureaucrat &bur )
{
	out << bur.getName();
	out << ", bureaucrat grade ";
	out << bur.getGrade();
	return out;
}

std::string Bureaucrat::getName() const
{
	return (_name);
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}

void Bureaucrat::incrementGrade()
{
	try
	{
		if (_grade <= 1)
			throw (Bureaucrat::GradeTooHighException());
		else
			_grade--;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		exit (1);
	}
}

void Bureaucrat::decrementGrade()
{
	try
	{
		if (_grade >= 150)
			throw (Bureaucrat::GradeTooLowException());
		else
			_grade++;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		exit (1);
	}
}

int Bureaucrat::isValidGrade(int grade)
{
	try
	{
		if (grade > 150)
			throw (Bureaucrat::GradeTooLowException());
		else if (grade < 1)
			throw (Bureaucrat::GradeTooHighException());
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		exit (1);
	}
	return 1;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("GradeTooHighException");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("GradeTooLowException");
}




