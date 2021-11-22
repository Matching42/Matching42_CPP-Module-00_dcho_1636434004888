/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:35:45 by djeon             #+#    #+#             */
/*   Updated: 2021/11/21 16:35:47 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    Zombie::name = name;
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
    std::cout << Zombie::getName() << std::endl;
}
