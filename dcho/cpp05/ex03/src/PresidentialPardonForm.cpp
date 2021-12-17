#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: Form("PresidentialPardon", P_SIGN, P_EXEC), _target("defaultTarget")
	{}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form("PresidentialPardon", P_SIGN, P_EXEC), _target(target)
	{}

PresidentialPardonForm::~PresidentialPardonForm()
	{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& pform)
	: Form("PresidentialPardon", P_SIGN, P_EXEC), _target(pform._target)
{
	*this = pform;
}

PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm& pform)
{
	if (this == &pform)
		return (*this);
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (getIsSigned() == false)
		throw (Form::SignException());
	if (executor.getGrade() >= getGradeExecute())
		throw (Form::ExecuteException());

	std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}