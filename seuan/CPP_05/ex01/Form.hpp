#ifndef FORM_HPP
# define FORM_HPP

# define FORMMAX 125
# define FORMMIN 25

#include "Bureaucrat.hpp"

class Form : public Bureaucrat
{
    public:
        Form(std::string name, int gradeSign, int gradeExecute);
        Form();
        ~Form();
        Form(const Form& form);
        Form &operator = (const Form& form);
        std::string getName() const;
        int getGrade() const;
        int isValidGrade(int grade);
        bool getIsSigned() const;
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
        int _gradeSign;
        int _gradeExecute;
        bool _isSigned;
};

#endif