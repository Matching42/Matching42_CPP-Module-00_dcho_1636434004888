#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form : public Bureaucrat
{
    public:
        Form();
        ~Form();
        Form(const Form& form);
        Form &operator = (const Form& form);
        void beSigned(const Bureaucrat& bur);

        class GradeTooHighException : public Bureaucrat::Exception
        {
            public:
                const char* what(void) const throw();
        };
        class GradeTooLowException : public Bureaucrat::Exception
        {
            public:
                const char* what(void) const throw();
        };

    private:
        std::string _name;
        bool _isSigned;
};

#endif