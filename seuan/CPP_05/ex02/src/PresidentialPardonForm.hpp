// (Required grades: sign 25, exec 5). Action: Tells us
// <target> has been pardoned by Zafod Beeblebrox.

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# define P_SIGN 25
# define P_EXEC 5


class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm();
        PresidentialPardonForm(Bureaucrat const & executor);
        PresidentialPardonForm(std::string name, int gradeSign, int gradeExecute);
        ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm& pform);
        PresidentialPardonForm &operator = (const PresidentialPardonForm& pform);
        void execute(Bureaucrat const & executor) const;
};

#endif