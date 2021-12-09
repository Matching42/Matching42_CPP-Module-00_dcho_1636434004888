#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

# define ERRSIGN -1
# define ERREXECUTE -2

class Bureaucrat
{
    public:

        Bureaucrat(std::string name, int grade);
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat& bur);
        Bureaucrat &operator = (const Bureaucrat& bur);
        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        int isValidGrade(int grade);
        int signForm(int gradeSign, int gradeExecute);

        class Exception : public std::exception
        {
            public:
                virtual const char* what(void) const throw();
        };
        class GradeTooHighException : public Bureaucrat::Exception
        {
            public:
                virtual const char* what(void) const throw();
        };
        class GradeTooLowException : public Bureaucrat::Exception
        {
            public:
                virtual const char* what(void) const throw();
        };

    private:
        std::string _name;
        int _grade;
};

std::ostream& operator << ( std::ostream &out, const Bureaucrat &bur );

#endif