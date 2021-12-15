#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: Form("Shrubbery", R_SIGN, R_EXEC)
	{}

RobotomyRequestForm::RobotomyRequestForm(Bureaucrat const & executor)
	: Form("Shrubbery", R_SIGN, R_EXEC)
{
	(void)executor;
}

RobotomyRequestForm::~RobotomyRequestForm()
	{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rform)
{
	*this = rform;
}

RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm& rform)
{
	if (this == &rform)
		return (*this);
	setName(rform.getName());
	setGradeSign(rform.getGradeSign());
	setGradeExecute(rform.getGradeExecute());
	setIsSigned(rform.getIsSigned());
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (getIsSigned() == false)
		throw (Form::SignException());
	if (executor.getGrade() >= getGradeExecute())
		throw (Form::ExecuteException());
	srand((unsigned int)time(NULL));
	int num = rand();
	if (num % 2 == 0)
		std::cout << executor.getName() << " has been robotomized successfully " << std::endl;
	else
		std::cout << executor.getName() << " has been robotomized failure " << std::endl;
}