/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:08:43 by djeon             #+#    #+#             */
/*   Updated: 2022/01/08 18:48:30 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
    Hitpoints = 100;
    MaxHitpoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << "FragTrap non-name created" << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name) {
    Hitpoints = 100;
    MaxHitpoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << "FragTrap name created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &rhs) : ClapTrap(rhs) {
    std::cout << "copy FragTrap created" << std::endl;
}

FragTrap& FragTrap::operator = (const FragTrap &rhs) {
    ClapTrap::operator=(rhs);
    return *this;
}

FragTrap::~FragTrap(void) {
    std::cout << "FragTrap deleted" << std::endl;
}

void FragTrap::attack(std::string const & target) {
    std::cout << "FragTrap " << Name \
    << " attack " << target << \
    " causing " << AttackDamage << \
    " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << Name << " : positive high fives request" << std::endl;
}
