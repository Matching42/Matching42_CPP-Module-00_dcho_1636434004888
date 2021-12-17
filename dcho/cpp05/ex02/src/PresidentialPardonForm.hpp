#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# define P_SIGN 25
# define P_EXEC 5


class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& pform);
		PresidentialPardonForm &operator = (const PresidentialPardonForm& pform);
		void execute(Bureaucrat const & executor) const;
	private:
		std::string _target;

};

#endif