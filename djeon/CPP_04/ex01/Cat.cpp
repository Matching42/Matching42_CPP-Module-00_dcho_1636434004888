/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 20:25:09 by djeon             #+#    #+#             */
/*   Updated: 2021/12/14 17:06:21 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
    Cat::brain = new Brain();
    std::cout << "created cat" << std::endl;
}

Cat::Cat(Cat &input) {
    Cat::brain = new Brain();
    *this = input;
}

Cat::~Cat(void) {
    delete Cat::brain;
    Cat::brain = NULL;
    std::cout << "deleted cat" << std::endl;
}

void Cat::makeSound(void) const {
    std::cout << "meow" << std::endl;
}

Brain* Cat::getBrain(void) const {
    return brain;
}

Cat& Cat::operator = (const Cat &input) {
    for (int i = 0; i < MAXIDEAS; i++) {
        this->brain->ideas[i] = input.brain->ideas[i];
    }
    return *this;
}