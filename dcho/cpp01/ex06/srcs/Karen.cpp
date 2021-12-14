#include "Karen.hpp"

Karen::Karen(){};

Karen::~Karen(){};

std::string str_toupper(std::string str)
{
	for (size_t i = 0; i < str.size(); i++)
		str[i] = toupper(str[i]);
	return str;
}

void Karen::complain(std::string level)
{
	std::string arrLevel[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	int index = -1;
	level = str_toupper(level);
	for (int i = 0; i < 4; i++)
	{
		if (level == arrLevel[i])
			index = i;
	}
	switch (index)
	{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break;
		default:
			except();
			break;
	}
}

void Karen::debug(void)
{
	std::cout << "[ DEBUG ]\nI love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon cost more money.\nYou don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::except(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
