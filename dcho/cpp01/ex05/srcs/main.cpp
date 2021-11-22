#include "Karen.hpp"

std::string my_cin()
{
	std::string input;

	std::getline(std::cin, input);
	if (std::cin.eof() == true)
		exit(1);
	return (input);
}

int	main(void)
{
	Karen k;
	std::string input;
	int	select;

	while (true)
	{
		std::cout << "TEST KAREN!! 1. TEST 2. EXIT : ";
		std::stringstream ssInt(my_cin());
		ssInt >> select;
		if (select == 1)
		{
			std::cout << "LEVEL SELECT\nex) DEBUG, INFO, WARNING, ERROR : ";
			input = my_cin();
			k.complain(input);
		}
		else if (select == 2)
			break;
		else
			std::cout << "Not Vaild Command!!" << std::endl;
	}
	return (0);
}
