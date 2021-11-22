#include <iostream>

int		main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "stringPTR str		: " << *stringPTR << std::endl;
	std::cout << "stringPTR address	: " << stringPTR << std::endl;
	std::cout << "stringREF str		: " << stringREF << std::endl;
	std::cout << "stringREF address	: " << &stringREF << std::endl;
	return (0);
}
