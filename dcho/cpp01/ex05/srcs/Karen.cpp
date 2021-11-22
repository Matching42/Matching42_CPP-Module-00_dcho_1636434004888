#include "Karen.hpp"

Karen::Karen()
{
	std::cout << "Hi Karen 🤗" << std::endl;
}

Karen::~Karen()
{
	std::cout << "Bye Karen 😌" << std::endl;
}

std::string str_toupper(std::string str)
{
	for (size_t i = 0; i < str.size(); i++)
		str[i] = toupper(str[i]);
	return str;
}

void Karen::complain(std::string level)
{
	std::string arrLevel[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	int index;
	level = str_toupper(level);
	void (Karen::*ptr[])(void) =
    { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	for (int i = 0; i < 4; i++)
	{
		if (level == arrLevel[i])
			index = i;
			//(this->*ptr[i])();
	}

	switch (index)
	{
		case 0:
			(this->*ptr[index])();
			break;
		case 1:
			(this->*ptr[index])();
			break;
		case 2:
			(this->*ptr[index])();
			break;
		case 3:
			(this->*ptr[index])();
			break;
		default:
			except();
			break;
	}
}

void Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::except(void)
{
	std::cout << "Not Vaild Command!!" << std::endl;
}
