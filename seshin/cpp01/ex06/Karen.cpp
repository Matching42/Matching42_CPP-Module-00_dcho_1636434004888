/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoyoung <seoyoung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 12:20:22 by seoyoung          #+#    #+#             */
/*   Updated: 2021/11/22 10:46:27 by seoyoung         ###   ########.fr       */
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
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
    std::cout << "I just love it!" << std::endl;
}

void Karen::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
    std::cout << "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout <<  "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "Ive been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
    std::string levelArr[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    int idx = -1;
    for (int i = 0; i < 4; i++)
    {
        if (levelArr[i] == level)
            idx = i;
    }
    switch (idx)
    {
        case 0:
            (this->*_f[0])();
        case 1:
            (this->*_f[1])();
        case  2:
            (this->*_f[2])();
        case 3:
            (this->*_f[3])();
            break;
        default :
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}