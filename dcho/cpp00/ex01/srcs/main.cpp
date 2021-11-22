#include <iostream>
#include "Phonebook.hpp"

int main(void)
{
	PhoneBook hollys;
	std::string input;
	int i;

	i = 0;
	while (1)
	{
		std::cout << "Please Enter The Command :";
		input = hollys.my_cin();
		for(size_t i = 0; i < input.size(); i++)
			input[i] = toupper(input[i]);
		if (input == "EXIT")
			return 0;
		else if (input == "ADD")
		{
			if (i == 8)
				i = 0;
			hollys.add(i++);
		}
		else if (input == "SEARCH")
			hollys.search();
		else
			std::cout << "Not Vaild Command!!" << std::endl;
	}
	return 0;
}
