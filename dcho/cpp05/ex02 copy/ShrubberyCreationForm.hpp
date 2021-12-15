// (Required grades: sign 145, exec 137). Action: Create
// a file called <target>_shrubbery, and write ASCII trees inside it, in the current
// directory.

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# define S_SIGN 145
# define S_EXEC 137

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm();
        ShrubberyCreationForm(Bureaucrat const & executor);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& sform);
        ShrubberyCreationForm &operator = (const ShrubberyCreationForm& sform);
        void execute(Bureaucrat const & executor) const;
        void beSigned(Bureaucrat const & executor);
        
	private:
};

#endif