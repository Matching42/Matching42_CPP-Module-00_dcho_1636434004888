/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:27:39 by djeon             #+#    #+#             */
/*   Updated: 2021/12/13 15:49:08 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
        
ClapTrap::ClapTrap(void) {
    Hitpoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
    std::cout << "ClapTrap non-name created" << std::endl;
}
        
ClapTrap::ClapTrap(std::string Name) {
    Hitpoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
    this->Name = Name;
    std::cout << "ClapTrap name created" << std::endl;
}
        
ClapTrap::~ClapTrap(void) {
    std::cout << "ClapTrap " << Name << " deleted" << std::endl;
}

void ClapTrap::attack(std::string const & target) {
    std::cout << "ClapTrap " << Name \
    << " attack " << target << \
    " causing " << AttackDamage << \
    " points of damage!" << std::endl;
}
        
void ClapTrap::takeDamage(unsigned int amount) {
    if (Hitpoints - amount <= 0) {
        std::cout << Name << " is dead" << std::endl;
        this->~ClapTrap();
    }
    else {
        Hitpoints -= amount;
        std::cout << Name << " taked damage (current hp : " << Hitpoints << ")" << std::endl;
    }
}
        
void ClapTrap::beRepaired(unsigned int amount) {
    if (Hitpoints + amount > 10)
        Hitpoints = 10;
    else
        Hitpoints += amount;
}