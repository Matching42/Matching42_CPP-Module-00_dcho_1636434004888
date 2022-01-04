/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 20:25:19 by djeon             #+#    #+#             */
/*   Updated: 2021/12/14 09:54:47 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
    Dog::brain = new Brain();
    std::cout << "created dog" << std::endl;
}

// Dog::Dog(Dog &input) : Animal("Dog") {
//     Dog::brain = new Brain();
//     std::cout << "created copy dog" << std::endl;
// }

Dog::~Dog(void) {
    delete Dog::brain;
    Dog::brain = NULL;
    std::cout << "deleted dog" << std::endl;
}

void Dog::makeSound(void) const {
    std::cout << "woof" << std::endl;
}