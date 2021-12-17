#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(std::string name, int gradeSign, int gradeExecute);
		virtual ~Form();
		Form(const Form& form);
		Form &operator = (const Form& form);

		std::string getName() const;
		int getGradeSign() const;
		int getGradeExecute() const;
		bool getIsSigned() const;

		void isValidGrades(int gradeSign, int gradeExecute);
		virtual void beSigned(Bureaucrat& bur);
		// Define pure virtual method
		virtual void execute(Bureaucrat const & executor) const = 0;

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
		class ExecuteException : public std::exception
		{
			public:
				const char* what(void) const throw();
		};
		class SignException : public std::exception
		{
			public:
				const char* what(void) const throw();
		};
	private:
		const std::string _name;
		const int _gradeSign;
		const int _gradeExecute;
		bool _isSigned;
};

#endif