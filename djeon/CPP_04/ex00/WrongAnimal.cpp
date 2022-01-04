/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:04:32 by djeon             #+#    #+#             */
/*   Updated: 2021/12/13 20:58:32 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
    std::cout << "created WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(std::string input) {
    type = input;
    std::cout << "created WrongAnimal" << std::endl;
}

WrongAnimal::~WrongAnimal(void) {
    std::cout << "deleted WrongAnimal" << std::endl;
}

std::string WrongAnimal::getType(void) const {
    return type;
}

void WrongAnimal::makeSound(void) const {
    std::cout << "empty sound" << std::endl;
}