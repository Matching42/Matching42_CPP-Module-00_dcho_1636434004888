/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 20:25:19 by djeon             #+#    #+#             */
/*   Updated: 2021/12/14 17:00:33 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
    Dog::brain = new Brain();
    std::cout << "created dog" << std::endl;
}

Dog::Dog(Dog &input) {
    Dog::brain = new Brain();
    *this = input;
}

Dog::~Dog(void) {
    delete Dog::brain;
    Dog::brain = NULL;
    std::cout << "deleted dog" << std::endl;
}

void Dog::makeSound(void) const {
    std::cout << "woof" << std::endl;
}

Brain* Dog::getBrain(void) const {
    return brain;
}

Dog& Dog::operator = (const Dog &rhd) {
    for (int i = 0; i < MAXIDEAS; i++) {
        this->brain->ideas[i] = rhd.brain->ideas[i];
    }
    return *this;
}