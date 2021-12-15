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
		void setName(std::string name);
		void setGradeSign(int gradeSign);
		void setGradeExecute(int gradeExecute);
		void setIsSigned(bool isSigned);
		

		int isValidGrades(int gradeSign, int gradeExecute);
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
		std::string _name;
		int _gradeSign;
		int _gradeExecute;
		bool _isSigned;
};

#endif