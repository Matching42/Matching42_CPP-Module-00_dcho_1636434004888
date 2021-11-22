#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{
	size = 0;
	std::cout << "Hello Phonebook!!" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Bye~~🥴!!" << std::endl;
}

std::string PhoneBook::my_cin()
{
	std::string input;

	std::getline(std::cin, input);
	if (std::cin.eof() == true)
		exit(1);
	return (input);
}

void PhoneBook::add(int i)
{
	if (size < 8)
		size++;
	std::cout << "Enter the First Name: ";
	contact[i].setfName(my_cin());
	std::cout << "Enter the Last Name: ";
	contact[i].setlName(my_cin());
	std::cout << "Enter the NickName: ";
	contact[i].setnName(my_cin());
	std::cout << "Enter the Phone Number: ";
	contact[i].setpNumber(my_cin());
	std::cout << "Enter the Darkest Secret: ";
	contact[i].setdSecret(my_cin());
}

static std::string ft_dot(std::string str)
{
	std::string res = str;
	if (res.size() >= 10)
	{
		res[9] = '.';
		res.erase(10);
	}
	return res;
}

void PhoneBook::search()
{
	std::string input;
	int index = 0;

	if (size == 0)
	{
		std::cout << "There's no Contact to Search..😵‍💫" << std::endl;
		return ;
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1 << "|"
		<< std::setw(10) << ft_dot(contact[i].getfName()) << "|"
		<< std::setw(10) << ft_dot(contact[i].getlName()) << "|"
		<< std::setw(10) << ft_dot(contact[i].getnName()) << "|"
		<< std::endl;
	}
	while (true)
	{
		std::cout << "Please Enter the Index :";
		input = my_cin();
		std::stringstream ssInt(input);
		ssInt >> index;
		if (index < 1 || index > size)
		{
			std::cout << "Cannot find..😵‍💫" << std::endl;
			continue;
		}
		std::cout << "No. " << index-- << std::endl;
		std::cout << "1. First Name :"<< contact[index].getfName() << std::endl;
		std::cout << "2. Last Name :"<< contact[index].getlName() << std::endl;
		std::cout << "3. NickName :"<< contact[index].getnName() << std::endl;
		std::cout << "4. PhoneNumber :"<< contact[index].getpNumber() << std::endl;
		std::cout << "5. Darkest Secret :"<< contact[index].getdSecret() << std::endl;
		break;
	}
}
