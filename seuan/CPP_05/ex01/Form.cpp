#include "Form.hpp"

Form::Form(std::string name, int grade)
    : _name("Default"), _grade(75)
{
    if (isValidGrade(grade))
    {
        _name = name;
        _grade = grade;
        _isSigned = false;
        std::cout << _name << " constructor called." << std::endl;
    }
}

Form::Form()
{
    _name = "Default";
    _grade = 75;
    _isSigned = false;
    std::cout << _name << " constructor called." << std::endl;
}

Form::~Form()
{
    std::cout << _name << " destructor called." << std::endl;
}

Form::Form(const Form &form)
{ 
    std::cout << _name << " copy constructor called." << std::endl;
    *this = form; 
}

Form& Form::operator = (const Form &form)
{
    if (this == &form)
        return (*this);
    _name = form._name;
    _grade = form._grade;
    return (*this);
}

std::ostream& operator << ( std::ostream &out, const Form &form )
{
    out << form.getName();
    out << ", Form grade ";
    out << form.getGrade();
    return out;
}

std::string Form::getName() const { return _name; }
int Form::getGrade() const { return _grade; }
bool Form::getIsSigned() const { return _isSigned; }

void Form::beSigned(const Bureaucrat& bur)
{
    if (_grade < bur.getGrade())
        _isSigned = true;
}

int Form::isValidGrade(int grade)
{
    try
    {
        if (grade > 150)
            throw (Form::GradeTooLowException());
        else if (grade < 1)
            throw (Form::GradeTooHighException());
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        exit (1);
    }
    return 1;
}