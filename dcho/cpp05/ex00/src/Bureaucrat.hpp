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
		std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		int isValidGrade(int grade);

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what(void) const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what(void) const throw();
		};

	private:
		std::string _name;
		int _grade;
};

std::ostream& operator << ( std::ostream &out, const Bureaucrat &bur );

#endif