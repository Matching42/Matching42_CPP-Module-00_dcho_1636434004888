/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:49:36 by djeon             #+#    #+#             */
/*   Updated: 2022/01/08 19:02:15 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) {
    Hitpoints = 100;
    MaxHitpoints = 100;
    EnergyPoints = 50;
    AttackDamage = 30;
    std::cout << "DiamondTrap non-name created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string Name) : FragTrap(Name), ScavTrap(Name) {
    DiamondTrap::Name = Name;
    ClapTrap::Name = (Name + "_clap_name");
    Hitpoints = 100;
    MaxHitpoints = 100;
    EnergyPoints = 50;
    AttackDamage = 30;
    std::cout << "DiamondTrap name created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &rhs) : ClapTrap(rhs) {
    *this = rhs;
    std::cout << "copy DiamondTrap created" << std::endl;
}

DiamondTrap& DiamondTrap::operator = (const DiamondTrap &rhs) {
    Name = rhs.Name;
    ClapTrap::operator=(rhs);
    return *this;
}

DiamondTrap::~DiamondTrap(void) {
    std::cout << "DiamondTrap deleted" << std::endl;
}

void DiamondTrap::attack(std::string const & target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void) {
    std::cout << "DiamondTrap Name : " << Name << std::endl;
    std::cout << "ClapTrap Name : " << ClapTrap::Name << std::endl;
}