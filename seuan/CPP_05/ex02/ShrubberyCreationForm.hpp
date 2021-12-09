(Required grades: sign 145, exec 137). Action: Create
a file called <target>_shrubbery, and write ASCII trees inside it, in the current
directory.

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# define S_SIGN 145
# define S_EXEC 137

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm();
        ShrubberyCreationForm(std::string name, int gradeSign, int gradeExecute);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& sform);
        ShrubberyCreationForm &operator = (const ShrubberyCreationForm& sform);
	private:

};

#endif