m (Required grades: sign 72, exec 45). Action: Makes some
drilling noises, and tell us that <target> has been robotomized successfully 50% of
the time. Otherwise, tell us it’s a failure.

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# define R_SIGN 72
# define R_EXEC 45

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm();
        RobotomyRequestForm(std::string name, int gradeSign, int gradeExecute);
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm& rform);
        RobotomyRequestForm &operator = (const RobotomyRequestForm& rform);
	private:

};

#endif