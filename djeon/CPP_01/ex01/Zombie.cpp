/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:36:21 by djeon             #+#    #+#             */
/*   Updated: 2021/12/12 12:17:16 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
    ;
}

Zombie::Zombie(std::string name) {
    Zombie::name = name; // : name(name) 바람직
}

Zombie::~Zombie(void) {
    std::cout << "gooebye~ " << Zombie::name << std::endl;
}

void Zombie::setName(std::string name) {
    Zombie::name = name;
}

std::string Zombie::getName(void) {
    return (Zombie::name);
}

void Zombie::announce(void) {
    std::cout << Zombie::name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
