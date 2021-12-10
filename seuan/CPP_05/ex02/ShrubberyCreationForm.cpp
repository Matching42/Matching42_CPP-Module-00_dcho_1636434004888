#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    setGradeSign(S_SIGN);
    setGradeExecute(S_EXEC);
    // beSigned(executor);
}

ShrubberyCreationForm::ShrubberyCreationForm(Bureaucrat const & executor)
{
    setGradeSign(S_SIGN);
    setGradeExecute(S_EXEC);
    beSigned(executor);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& sform)
{

}

// ShrubberyCreationForm &operator = (const ShrubberyCreationForm& sform);
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    std::cout << "Run ShrubberyCreationForm" << std::endl;
    
    std::cout << "       *             ," << std::endl;
    std::cout << "                   _/^\\_" << std::endl;
    std::cout << "                  <     >" << std::endl;
    std::cout << " *                 /.-.\\         *" << std::endl;
    std::cout << "          *        `/&\\`                   *" << std::endl;
    std::cout << "                  ,@.*;@," << std::endl;
    std::cout << "                 /_o.I %_\\    *" << std::endl;
    std::cout << "    *           (`'--:o(_@;" << std::endl;
    std::cout << "               /`;--.,__ `')             *" << std::endl;
    std::cout << "              ;@`o % O,*`'`&\"" << std::endl;
    std::cout << "        *    (`'--)_@ ;o %'()\\      *" << std::endl;
    std::cout << "             /`;--._`''--._O'@;" << std::endl;
    std::cout << "            /&*,()~o`;-.,_ `""`)" << std::endl;
    std::cout << " *          /`,@ ;+& () o*`;-';\"" << std::endl;
    std::cout << "           (`\"\"--.,_0 +% @' &()\"" << std::endl;
    std::cout << "           /-.,_    ``''--....-'`)  *" << std::endl;
    std::cout << "  *       /@%;o`:;'--,.__   __.'\"" << std::endl;
    std::cout << "          ;*,&(); @ % &^;~``~``*();         *" << std::endl;
    std::cout << "          /(); o^~; & ().o@*&`;&%O\"" << std::endl;
    std::cout << "      __.----.(\\-''#####---...___...-----._" << std::endl;
    std::cout << "              `      \\)_`               " << std::endl;
    std::cout << "              `      \\)_`               " << std::endl;
    std::cout << "              `      \\)_`               " << std::endl;
    std::cout << "              `      \\)_`               " << std::endl;
    std::cout << "              `      \\)_`               " << std::endl;
}

void ShrubberyCreationForm::beSigned(Bureaucrat const & executor)
{
    std::cout << getGradeSign() << " | " << getGradeExecute() << std::endl;
	int res = Bureaucrat::signForm(executor.getGrade(), getGradeSign(), getGradeExecute());
	if ((res) == ERRSIGN || (res) == ERREXECUTE)
	{
		switch (res)
		{
		case ERRSIGN:
			std::cout << executor.getName() << " cannot sign " << getName() << " because the grade is less than the sign value." << std::endl;
			break;
		default:
			std::cout << executor.getName() << " cannot sign " << getName() << " because the grade is less than the execute value." << std::endl;
			break;
		}
	}
	else
	{
		setIsSigned(true);
		std::cout << executor.getName() << " sign " << getName() << std::endl;
        execute(executor);
	}
	setIsSigned(false);
}
