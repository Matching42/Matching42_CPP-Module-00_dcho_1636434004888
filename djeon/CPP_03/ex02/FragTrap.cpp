/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:08:43 by djeon             #+#    #+#             */
/*   Updated: 2021/12/13 15:21:25 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
    Hitpoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << "FragTrap non-name created" << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name) {
    Hitpoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << "FragTrap name created" << std::endl;
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
    std::cout << "positive high fives request" << std::endl;
}
