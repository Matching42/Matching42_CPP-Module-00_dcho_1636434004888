/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:27:39 by djeon             #+#    #+#             */
/*   Updated: 2022/01/08 17:48:02 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
        
ClapTrap::ClapTrap(void) {
    Hitpoints = 10;
    MaxHitpoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
    std::cout << "ClapTrap non-name created" << std::endl;
}
        
ClapTrap::ClapTrap(std::string Name) {
    Hitpoints = 10;
    MaxHitpoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
    this->Name = Name;
    std::cout << "ClapTrap name created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs) {
    *this = rhs;
    std::cout << "copy ClapTrap created" << std::endl;
}

ClapTrap& ClapTrap::operator = (const ClapTrap &rhs) {
    Name = rhs.Name;
    Hitpoints = rhs.Hitpoints;
    EnergyPoints = rhs.EnergyPoints;
    AttackDamage = rhs.AttackDamage;
    return *this;
}
        
ClapTrap::~ClapTrap(void) {
    std::cout << "ClapTrap deleted" << std::endl;
}

void ClapTrap::attack(std::string const & target) {
    std::cout << "ClapTrap " << Name \
    << " attack " << target << \
    " causing " << AttackDamage << \
    " points of damage!" << std::endl;
}
        
void ClapTrap::takeDamage(unsigned int amount) {
    Hitpoints -= amount;
    if (Hitpoints <= 0)
        std::cout << Name << " is dead" << std::endl;
    else
        std::cout << Name << " taked damage (current hp : " << Hitpoints << ")" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (Hitpoints + amount > MaxHitpoints)
        Hitpoints = MaxHitpoints;
    else
        Hitpoints += amount;
    std::cout << Name << " is repaired (current hp : " << Hitpoints << ")" << std::endl;
}