/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:27:54 by djeon             #+#    #+#             */
/*   Updated: 2022/01/08 17:35:54 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
    ClapTrap djeon = ClapTrap("djeon");
    ScavTrap djeonScav = ScavTrap("djeonScav");
    ClapTrap zombie = ClapTrap("zombie");
    ScavTrap zombieScav = ScavTrap("zombieScav");
    ClapTrap copy(djeon);
    ScavTrap copyScav(djeonScav);

    // copy test
    std::cout << "-----copy test-----" << std::endl;
    copy.attack("zombie");
    zombie.takeDamage(0);
    copyScav.attack("zombieScav");
    zombieScav.takeDamage(20);

    // djeon attack zombie
    std::cout << "-----djeon attack zombie-----" << std::endl;
    djeon.attack("zombie");
    zombie.takeDamage(0);
    djeonScav.attack("zombieScav");
    zombieScav.takeDamage(20);

    // repair test
    std::cout << "-----repair test-----" << std::endl;
    zombie.takeDamage(5);
    zombie.beRepaired(7);
    zombie.takeDamage(0);
    zombieScav.takeDamage(50);
    zombieScav.beRepaired(95);
    zombieScav.takeDamage(0);

    // guardgate test
    std::cout << "-----guardgate test-----" << std::endl;
    djeonScav.guardGate();
    zombieScav.guardGate();
    copyScav.guardGate();
    return 0;
}