/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:53:17 by djeon             #+#    #+#             */
/*   Updated: 2022/01/08 18:42:03 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
    Hitpoints = 100;
    MaxHitpoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    std::cout << "ScavTrap non-name created" << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name) {
    Hitpoints = 100;
    MaxHitpoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    std::cout << "ScavTrap name created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &rhs) : ClapTrap(rhs) {
    std::cout << "copy ScavTrap created" << std::endl;
}

ScavTrap& ScavTrap::operator = (const ScavTrap &rhs) {
    ClapTrap::operator=(rhs);
    return *this;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap deleted" << std::endl;
}

void ScavTrap::attack(std::string const & target) {
    std::cout << "ScavTrap " << Name \
    << " attack " << target << \
    " causing " << AttackDamage << \
    " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void) {
    std::cout << "ScavTrap " << Name << " have enterred in Gate keeper mode" << std::endl;
}