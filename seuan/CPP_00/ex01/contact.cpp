/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuan <seuan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:02:39 by seuan             #+#    #+#             */
/*   Updated: 2021/11/16 14:02:43 by seuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contact(void)
{
    std::cout << "Created contact successfully" << std::endl;
}

contact::~contact(void)
{
    std::cout << "Goodbye my contact" << std::endl;
}

void contact::set_first_name(std::string str)
{
    first_name = str;
}

void contact::set_last_name(std::string str)
{
    last_name = str;
}

void contact::set_nick_name(std::string str)
{
    nick_name = str;
}
        
void contact::set_phone_number(std::string str)
{
    phone_number = str;
}
        
void contact::set_darkest_secret(std::string str)
{
    darkest_secret = str;
}

std::string contact::get_first_name()
{
    return first_name;
}
    
std::string contact::get_last_name()
{
    return last_name;
}
    
std::string contact::get_nick_name()
{
    return nick_name;
}

std::string contact::get_phone_number()
{
    return phone_number;
}
    
std::string contact::get_darkest_secret()
{
    return darkest_secret;
}