#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class GradeTooHighException : public std::exception
{
	public:
		const char* what(void) const throw()
		{
			return ("GradeTooHighException");
		}
};

class GradeTooLowException : public std::exception
{
	public:
		const char* what(void) const throw()
		{
			return ("GradeTooLowException");
		}
};

class Bureaucrat
{
    public:

        Bureaucrat(std::string name, int grade);
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat& bur);
        Bureaucrat &operator = (const Bureaucrat& bur);
        GradeTooHighException GradeTooHighException;
        GradeTooLowException GradeTooLowException;
        std::string getName();
        int getGrade();
        void incrementGrade();
        void decrementGrade();
        int isValidGrade(int grade);

    private:
        std::string _name;
        int _grade;
};

#endif