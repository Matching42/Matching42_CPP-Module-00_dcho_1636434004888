/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:04:32 by djeon             #+#    #+#             */
/*   Updated: 2021/12/14 10:02:05 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
    std::cout << "created animal" << std::endl;
}

Animal::Animal(std::string input) {
    type = input;
    std::cout << "created " << input << std::endl;
}

Animal::~Animal(void) {
    std::cout << "deleted animal" << std::endl;
}

std::string Animal::getType(void) const {
    return type;
}