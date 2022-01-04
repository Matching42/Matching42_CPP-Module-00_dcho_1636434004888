/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 20:25:09 by djeon             #+#    #+#             */
/*   Updated: 2021/12/14 09:54:44 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
    Cat::brain = new Brain();
    std::cout << "created cat" << std::endl;
}

// Cat::Cat(Cat &input) : Animal("Cat") {
//     Cat::brain = new Brain();
//     std::cout << "created copy cat" << std::endl;
// }

Cat::~Cat(void) {
    delete Cat::brain;
    Cat::brain = NULL;
    std::cout << "deleted cat" << std::endl;
}

void Cat::makeSound(void) const {
    std::cout << "meow" << std::endl;
}