#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(Intern& copy);
		Intern& operator = (const Intern& intern);
		Form* makeForm(std::string str1, std::string str2);
	private:
	/* data */
};

#endif