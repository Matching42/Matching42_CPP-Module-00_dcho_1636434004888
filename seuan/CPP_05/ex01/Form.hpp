#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form : public Bureaucrat
{
    public:
        Form();
        Form(std::string name, int gradeSign, int gradeExecute);
        ~Form();
        Form(const Form& form);
        Form &operator = (const Form& form);
        std::string getName() const;
        int getGradeSign() const;
        int getGradeExecute() const;
        bool getIsSigned() const;
        int isValidGrades(int gradeSign, int gradeExecute);
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