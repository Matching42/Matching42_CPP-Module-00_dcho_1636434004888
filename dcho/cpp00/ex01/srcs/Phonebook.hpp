#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <iomanip>
#include <sstream>
#include "Contacts.hpp"

class PhoneBook
{
	private:
		Contacts contact[8];
		int	size;
	public:
		PhoneBook();
		~PhoneBook();
		void add(int i);
		void search();
		std::string my_cin();
};

#endif
