/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:27:54 by djeon             #+#    #+#             */
/*   Updated: 2021/12/10 16:56:13 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    ClapTrap djeon = ClapTrap("djeon");
    ScavTrap djeon2 = ScavTrap("djeon2");
    FragTrap djeon3 = FragTrap("djeon3");

    djeon.attack("zombie");
    djeon2.attack("zombie2");
    djeon2.guardGate();
    djeon3.attack("zombie3");
    djeon3.highFivesGuys();
    return 0;
}