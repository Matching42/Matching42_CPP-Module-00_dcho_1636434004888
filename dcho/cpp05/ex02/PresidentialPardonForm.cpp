#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    : Form("Shrubbery", P_SIGN, P_EXEC)
    {}

PresidentialPardonForm::PresidentialPardonForm(Bureaucrat const & executor)
    : Form("Shrubbery", P_SIGN, P_EXEC)
    {}

PresidentialPardonForm::~PresidentialPardonForm()
    {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& pform)
{
    *this = pform;
}

PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm& pform)
{
    if (this == &pform)
        return (*this);
    setName(pform.getName());
    setGradeSign(pform.getGradeSign());
    setGradeExecute(pform.getGradeExecute());
    setIsSigned(pform.getIsSigned());
    return (*this);
}


void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (getIsSigned() == false)
        throw (Form::SignException());
    if (executor.getGrade() >= getGradeExecute())
        throw (Form::ExecuteException());

    
}