#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat
{
    public:

        Bureaucrat(std::string name, int grade);
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat& bur);
        Bureaucrat &operator = (const Bureaucrat& bur);
        std::string getName();
        int getGrade();
        void incrementGrade();
        void decrementGrade();
        int isValidGrade(int grade);

        
        class Exception : public std::exception
        {
            public:
                const char* what(void) const throw();
        };
        class GradeTooHighException : public Bureaucrat::Exception
        {
            public:
                //  const char* what(void) const throw() { return ("GradeTooHighException"); }
                const char* what(void) const throw();
        };
        class GradeTooLowException : public Bureaucrat::Exception
        {
            public:
                //  const char* what(void) const throw() { return ("GradeTooLowException"); }
                const char* what(void) const throw();
        };

    private:
        std::string _name;
        int _grade;
};

#endif