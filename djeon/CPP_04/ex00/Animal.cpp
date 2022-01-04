/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:04:32 by djeon             #+#    #+#             */
/*   Updated: 2021/12/13 20:31:13 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
    std::cout << "created animal" << std::endl;
}

Animal::Animal(std::string input) {
    type = input;
    std::cout << "created animal" << std::endl;
}

Animal::~Animal(void) {
    std::cout << "deleted animal" << std::endl;
}

std::string Animal::getType(void) const {
    return type;
}

void Animal::makeSound(void) const {
    std::cout << "empty sound" << std::endl;
}