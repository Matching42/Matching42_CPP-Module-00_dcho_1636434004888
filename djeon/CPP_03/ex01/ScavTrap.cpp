/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:53:17 by djeon             #+#    #+#             */
/*   Updated: 2021/12/10 16:36:33 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
    setHitpoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
    std::cout << "ScavTrap non-name created" << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name) {
    setHitpoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
    std::cout << "ScavTrap name created" << std::endl;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap deleted" << std::endl;
}

void ScavTrap::guardGate(void) {
    std::cout << " ScavTrap have enterred in Gate keeper mode" << std::endl;
}