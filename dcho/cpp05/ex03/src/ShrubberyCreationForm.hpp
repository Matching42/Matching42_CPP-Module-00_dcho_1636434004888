#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# define S_SIGN 145
# define S_EXEC 137

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& sform);
		ShrubberyCreationForm& operator = (const ShrubberyCreationForm& sform);
		void execute(Bureaucrat const & executor) const;
	private:
		std::string _target;
};

#endif