/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:37:21 by djeon             #+#    #+#             */
/*   Updated: 2021/11/21 16:37:22 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void) {
    ;
}

HumanB::HumanB(std::string str) {
    name = str;
}

HumanB::~HumanB(void) {
    ;
}

void HumanB::attack(void) {
    std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &wep) {
    weapon = &wep;
}
