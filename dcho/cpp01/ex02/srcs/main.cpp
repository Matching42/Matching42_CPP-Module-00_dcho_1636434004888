#include <iostream>

int		main(void)
{
	std::string stringPTR = "HI THIS IS BRAIN";
	std::string& stringREF = stringPTR;

	std::cout << "stringPTR address: " << &stringPTR << std::endl;
	std::cout << "stringREF address: " << &stringREF << std::endl;
	return (0);
}