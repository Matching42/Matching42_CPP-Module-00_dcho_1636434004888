/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:08:43 by djeon             #+#    #+#             */
/*   Updated: 2021/12/10 16:54:10 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
    setHitpoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
    std::cout << "FragTrap non-name created" << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name) {
    setHitpoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
    std::cout << "FragTrap name created" << std::endl;
}

FragTrap::~FragTrap(void) {
    std::cout << "FragTrap deleted" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "positive high fives request" << std::endl;
}
