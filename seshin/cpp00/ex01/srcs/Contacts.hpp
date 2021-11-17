/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoyoung <seoyoung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 11:26:05 by seoyoung          #+#    #+#             */
/*   Updated: 2021/11/15 13:43:11 by seoyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		Contacts(void){};
		~Contacts(){};
};

#endif