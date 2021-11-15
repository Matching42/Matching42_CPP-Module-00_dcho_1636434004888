#include "Contacts.hpp"

void Contacts::setfName(std::string f_name)
{
	fName = f_name;
}

void Contacts::setlName(std::string l_name)
{
	lName = l_name;
}

void Contacts::setnName(std::string n_name)
{
	nName = n_name;
}

void Contacts::setpNumber(std::string p_n)
{
	pNumber = p_n;
}

void Contacts::setdSecret(std::string d_s)
{
	dSecret = d_s;
}

std::string Contacts::getfName(void)
{
	return (fName);
}

std::string Contacts::getlName(void)
{
	return(lName);
}

std::string Contacts::getnName(void)
{
	return(nName);
}

std::string Contacts::getpNumber(void)
{
	return(pNumber);
}

std::string Contacts::getdSecret(void)
{
	return(dSecret);
}
