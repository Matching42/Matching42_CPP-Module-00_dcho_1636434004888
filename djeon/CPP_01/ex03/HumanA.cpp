/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:37:03 by djeon             #+#    #+#             */
/*   Updated: 2021/11/22 16:55:13 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &wep) : name(str), weapon(wep) {}

HumanA::~HumanA(void) {}

void HumanA::attack(void) {
    std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}
