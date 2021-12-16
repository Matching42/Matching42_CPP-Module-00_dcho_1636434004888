#include "Form.hpp"

Form::Form()
	: _name("Default"), _gradeSign(70), _gradeExecute(70), _isSigned(false)
{
	std::cout << "<" << _name << "> constructor called.\n👉  This is Form Name : " << _name << ", Sign Control Point: " << _gradeSign << ", Execute Control Point: " << _gradeExecute << std::endl;
}

Form::Form(std::string name, int gradeSign, int gradeExecute)
	: _name(name), _gradeSign(gradeSign), _gradeExecute(gradeExecute), _isSigned(false)
{
	isValidGrades(gradeSign, gradeExecute);
	std::cout << "<" << _name << "> constructor called. \n👉  This is Form Name : " << _name << ", Sign Control Point: " << _gradeSign << ", Execute Control Point: " << _gradeExecute << std::endl;
}

Form::~Form()
{
	std::cout << "<" << _name << "> destructor called." << std::endl;
}

Form::Form(const Form &form)
	: _name(form._name), _gradeSign(form._gradeSign), _gradeExecute(form._gradeExecute), _isSigned(form._isSigned)
{
	*this = form;
	std::cout << "<" << _name << "> copy constructor called." << std::endl;
}

Form& Form::operator = (const Form &form)
{
	if (this == &form)
		return (*this);
	return (*this);
}

std::ostream& operator << ( std::ostream &out, const Form &form )
{
	out << form.getName();
	out << ", Form gradeSign ";
	out << form.getGradeSign();
	out << ", Form gradeSign ";
	out << form.getGradeExecute();
	out << ", Form isSigned ";
	out << form.getIsSigned();
	return out;
}

std::string Form::getName() const { return _name; }

int Form::getGradeSign() const { return _gradeSign; }

int Form::getGradeExecute() const { return _gradeExecute; }

bool Form::getIsSigned() const { return _isSigned; }

void Form::beSigned(Bureaucrat& bur)
{
	if (bur.getGrade() >= _gradeSign)
		throw Form::GradeTooLowException();
	else
		_isSigned = true;
}

void Form::isValidGrades(int gradeSign, int gradeExecute)
{
	if (gradeSign > 150 || gradeExecute > 150)
		throw (Form::GradeTooLowException());
	else if (gradeSign < 1 || gradeExecute < 1)
		throw (Form::GradeTooHighException());
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("GradeTooHighException");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("GradeTooLowException");
}