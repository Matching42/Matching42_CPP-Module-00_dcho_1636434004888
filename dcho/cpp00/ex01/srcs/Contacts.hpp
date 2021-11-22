#ifndef CONTACTS_HPP
#define CONTACTS_HPP
#include <iostream>


class Contacts
{
	private:
		std::string fName;
		std::string lName;
		std::string nName;
		std::string pNumber;
		std::string dSecret;
	public:
		Contacts();
		~Contacts();
		void setfName(std::string);
		void setlName(std::string);
		void setnName(std::string);
		void setpNumber(std::string);
		void setdSecret(std::string);
		std::string getfName(void);
		std::string getlName(void);
		std::string getnName(void);
		std::string getpNumber(void);
		std::string getdSecret(void);
};

#endif
