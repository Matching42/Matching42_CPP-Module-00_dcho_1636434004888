#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form("Shrubbery", S_SIGN, S_EXEC)
	{}

ShrubberyCreationForm::ShrubberyCreationForm(Bureaucrat const & executor)
	: Form("Shrubbery", S_SIGN, S_EXEC)
{
	(void)executor;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
	{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& sform)
{
	*this = sform;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm& sform)
{
	if (this == &sform)
		return (*this);
	setName(sform.getName());
	setGradeSign(sform.getGradeSign());
	setGradeExecute(sform.getGradeExecute());
	setIsSigned(sform.getIsSigned());
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ifstream fin("ASCII_Tree");
	std::ofstream	fout(executor.getName() + "_shrubbery");
	std::string     fc;

	if (getIsSigned() == false)
		throw (Form::SignException());
	if (executor.getGrade() >= getGradeExecute())
		throw (Form::ExecuteException());
	if (!fin.is_open())
	{
		std::cerr << "Can not find file!" << std::endl;
		exit(100);
	}
	fin.seekg(0, std::ios::end);
	int size = fin.tellg();
	fc.resize(size);
	fin.seekg(0, std::ios::beg);
	fin.read(&fc[0], size);
	if (fout.is_open())
		fout << fc << std::endl;
}
