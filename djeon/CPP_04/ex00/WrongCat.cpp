/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 20:25:09 by djeon             #+#    #+#             */
/*   Updated: 2021/12/13 21:01:10 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
    ;
}

WrongCat::~WrongCat(void) {
    ;
}

void WrongCat::makeSound(void) const {
    std::cout << "me~yaong~" << std::endl;
}