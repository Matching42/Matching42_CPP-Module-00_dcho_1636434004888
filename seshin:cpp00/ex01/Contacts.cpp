/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoyoung <seoyoung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:52:04 by seoyoung          #+#    #+#             */
/*   Updated: 2021/11/16 17:54:41 by seoyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

Contacts::Contacts(){}

Contacts::~Contacts(){}

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

std::string Contacts::getfName()
{
	return fName;
}

std::string Contacts::getlName()
{
	return lName;
}

std::string Contacts::getnName()
{
	return nName;
}

std::string Contacts::getpNumber()
{
	return pNumber;
}

std::string Contacts::getdSecret()
{
	return dSecret;
}