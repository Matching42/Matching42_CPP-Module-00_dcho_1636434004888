/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:37:21 by djeon             #+#    #+#             */
/*   Updated: 2021/12/12 14:53:59 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void) {
    ;
}

HumanB::HumanB(std::string str) {
    name = str; // weapon도 null로 초기화하는게 좋을듯
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
