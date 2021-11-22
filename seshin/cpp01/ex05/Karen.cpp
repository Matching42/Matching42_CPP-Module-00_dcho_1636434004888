/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoyoung <seoyoung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:25:09 by seoyoung          #+#    #+#             */
/*   Updated: 2021/11/22 00:04:39 by seoyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
    _f[0] = &Karen::debug;
    _f[1] = &Karen::info;
    _f[2] = &Karen::warning;
    _f[3] = &Karen::error;
}

Karen::~Karen()
{
}

void Karen::debug(void)
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
    std::cout << "I just love it!" << std::endl;
}

void Karen::info(void)
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
    std::cout << "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
    std::cout << "[WARNING]" << std::endl;
    std::cout <<  "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "Ive been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
    std::string levelArr[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    for(int i = 0; i < 4; i++)
    {
        //called object type 'void (Karen::*)()' is not a function or function pointer
        if (levelArr[i] == level)
        {
            //Karen::_f[i]();
            //*_f[i]();e
            (this->*_f[i])();
            return ;
        }
    }
}