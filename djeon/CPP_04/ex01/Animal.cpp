/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:04:32 by djeon             #+#    #+#             */
/*   Updated: 2021/12/14 16:51:01 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
    std::cout << "created animal" << std::endl;
}

Animal::Animal(Animal &input) {
    *this = input;
}

Animal::Animal(std::string input) {
    type = input;
    std::cout << "created " << input << std::endl;
}

Animal::~Animal(void) {
    std::cout << "deleted animal" << std::endl;
}

Animal& Animal::operator = (const Animal &rhs) {
    type = rhs.type;
    return *this;
}

std::string Animal::getType(void) const {
    return type;
}

void Animal::makeSound(void) const {
    std::cout << "empty sound" << std::endl;
}