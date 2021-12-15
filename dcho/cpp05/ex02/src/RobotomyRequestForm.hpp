#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# define R_SIGN 72
# define R_EXEC 45

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm();
        RobotomyRequestForm(Bureaucrat const & executor);
        RobotomyRequestForm(std::string name, int gradeSign, int gradeExecute);
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm& rform);
        RobotomyRequestForm &operator = (const RobotomyRequestForm& rform);
        void execute(Bureaucrat const & executor) const;
};

#endif