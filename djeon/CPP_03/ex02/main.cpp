/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:27:54 by djeon             #+#    #+#             */
/*   Updated: 2022/01/08 18:16:09 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    ClapTrap djeon = ClapTrap("djeon");
    ScavTrap djeonScav = ScavTrap("djeonScav");
    FragTrap djeonFrag = FragTrap("djeonFrag");
    ClapTrap zombie = ClapTrap("zombie");
    ScavTrap zombieScav = ScavTrap("zombieScav");
    FragTrap zombieFrag = FragTrap("zombieFrag");
    ClapTrap copy(djeon);
    ScavTrap copyScav(djeonScav);
    FragTrap copyFrag(djeonFrag);

    // copy test
    std::cout << "-----copy test-----" << std::endl;
    copy.attack("zombie");
    zombie.takeDamage(0);
    copyScav.attack("zombieScav");
    zombieScav.takeDamage(20);
    copyFrag.attack("zombieFrag");
    zombieFrag.takeDamage(30);

    // djeon attack zombie
    std::cout << "-----djeon attack zombie-----" << std::endl;
    djeon.attack("zombie");
    zombie.takeDamage(0);
    djeonScav.attack("zombieScav");
    zombieScav.takeDamage(20);
    djeonFrag.attack("zombieFrag");
    zombieFrag.takeDamage(30);

    // repair test
    std::cout << "-----repair test-----" << std::endl;
    zombie.takeDamage(5);
    zombie.beRepaired(7);
    zombie.takeDamage(0);
    zombieScav.takeDamage(50);
    zombieScav.beRepaired(95);
    zombieScav.takeDamage(0);
    zombieFrag.takeDamage(30);
    zombieFrag.beRepaired(95);
    zombieFrag.takeDamage(0);

    // guardgate test
    std::cout << "-----guardgate test-----" << std::endl;
    djeonScav.guardGate();
    zombieScav.guardGate();
    copyScav.guardGate();

    // highFivesGuys test
    std::cout << "-----highFivesGuys test-----" << std::endl;
    djeonFrag.highFivesGuys();
    zombieFrag.highFivesGuys();
    copyFrag.highFivesGuys();
    return 0;
}