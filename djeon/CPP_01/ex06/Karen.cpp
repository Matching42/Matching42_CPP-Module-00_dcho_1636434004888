/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 02:06:00 by djeon             #+#    #+#             */
/*   Updated: 2021/12/11 17:57:47 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void) {
    complain_list[0].f2 = &Karen::debug;
    complain_list[0].type = "DEBUG";
    complain_list[1].f2 = &Karen::info;
    complain_list[1].type = "INFO";
    complain_list[2].f2 = &Karen::warning;
    complain_list[2].type = "WARNING";
    complain_list[3].f2 = &Karen::error;
    complain_list[3].type = "ERROR";
}

Karen::~Karen(void) {
    ;
}

std::string to_upper(std::string str) {
    for (int j = 0; j < str.length(); j++) {
        str[j] = toupper(str[j]);
    }
    return str;
}

void Karen::complain( std::string level ) {
    if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR") {
        level = to_upper(level);
        if (level == "DEBUG" || level == "INFO" || level == "WARNING" || level == "ERROR") {
            std::cout << "please input upper string" << std::endl;
            return ;
        }
        else {
            std::cout << "invalid input" << std::endl;
            return ;
        }
    }

    int num_level = -1;
    for (int i = 0; i < 4; i++) {
        if (complain_list[i].type == level) {
            num_level = i;
            break ;
        }
    }
    switch (num_level) {
        case 0:
            (this->*complain_list[0].f2)();
        case 1:
            (this->*complain_list[1].f2)();
        case 2:
            (this->*complain_list[2].f2)();
        case 3:
            (this->*complain_list[3].f2)();
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

void Karen::debug( void ) {
    std::cout << "I love to get extra bacon " <<
    "for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << 
    "I just love it!" << std::endl;
}

void Karen::info( void ) {
    std::cout << "I cannot believe adding extra bacon cost more money. " <<
    "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning( void ) {
    std::cout << "I think I deserve to have some extra bacon for free. " <<
    "I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error( void ) {
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
