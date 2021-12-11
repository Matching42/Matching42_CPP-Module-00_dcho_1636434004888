/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:27:39 by djeon             #+#    #+#             */
/*   Updated: 2021/12/10 14:51:36 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
        
ClapTrap::ClapTrap(void) {
    Hitpoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
    std::cout << "non-name created" << std::endl;
}
        
ClapTrap::ClapTrap(std::string Name) {
    Hitpoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
    this->Name = Name;
    std::cout << "name created" << std::endl;
}
        
ClapTrap::~ClapTrap(void) {
    std::cout << "deleted" << std::endl;
}

void ClapTrap::attack(std::string const & target) {
    std::cout << "ClapTrap " << Name \
    << " attack " << target << \
    " causing " << AttackDamage << \
    " points of damage!" << std::endl;
}
        
void ClapTrap::takeDamage(unsigned int amount) {
    ;
}
        
void ClapTrap::beRepaired(unsigned int amount) {
    ;
}