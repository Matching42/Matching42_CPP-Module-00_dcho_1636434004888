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
		int size;
	public:
		PhoneBook(){
			size = 0;
			std::cout << "Hello Phonebook!!" << std::endl;
		}
		void add(int i);
		void search();
		std::string my_cin();
		~PhoneBook(){
			std::cout << "Bye~~🥴!!" << std::endl;
		}
};

#endif
