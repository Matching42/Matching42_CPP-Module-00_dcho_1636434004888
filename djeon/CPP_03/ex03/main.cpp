/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:27:54 by djeon             #+#    #+#             */
/*   Updated: 2022/01/08 19:17:00 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) {
    ClapTrap djeon = ClapTrap("djeon");
    ScavTrap djeonScav = ScavTrap("djeonScav");
    FragTrap djeonFrag = FragTrap("djeonFrag");
    DiamondTrap djeonDiamond = DiamondTrap("djeonDiamond");
    ClapTrap zombie = ClapTrap("zombie");
    ScavTrap zombieScav = ScavTrap("zombieScav");
    FragTrap zombieFrag = FragTrap("zombieFrag");
    DiamondTrap zombieDiamond = DiamondTrap("zombieDiamond");
    ClapTrap copy(djeon);
    ScavTrap copyScav(djeonScav);
    FragTrap copyFrag(djeonFrag);
    DiamondTrap copyDiamond(djeonDiamond);

    // copy test
    std::cout << "-----copy test-----" << std::endl;
    copy.attack("zombie");
    zombie.takeDamage(0);
    copyScav.attack("zombieScav");
    zombieScav.takeDamage(20);
    copyFrag.attack("zombieFrag");
    zombieFrag.takeDamage(30);
    copyDiamond.attack("zombieDiamond");
    zombieDiamond.takeDamage(30);

    // djeon attack zombie
    std::cout << "-----djeon attack zombie-----" << std::endl;
    djeon.attack("zombie");
    zombie.takeDamage(0);
    djeonScav.attack("zombieScav");
    zombieScav.takeDamage(20);
    djeonFrag.attack("zombieFrag");
    zombieFrag.takeDamage(30);
    djeonDiamond.attack("zombieDiamond");
    zombieDiamond.takeDamage(30);

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
    zombieDiamond.takeDamage(30);
    zombieDiamond.beRepaired(95);
    zombieDiamond.takeDamage(0);

    // guardgate test
    std::cout << "-----guardgate test-----" << std::endl;
    djeonScav.guardGate();
    zombieScav.guardGate();
    copyScav.guardGate();
    djeonDiamond.guardGate();
    zombieDiamond.guardGate();
    copyDiamond.guardGate();

    // highFivesGuys test
    std::cout << "-----highFivesGuys test-----" << std::endl;
    djeonFrag.highFivesGuys();
    zombieFrag.highFivesGuys();
    copyFrag.highFivesGuys();
    djeonDiamond.highFivesGuys();
    zombieDiamond.highFivesGuys();
    copyDiamond.highFivesGuys();

    // whoAmI test
    std::cout << "-----whoAmI test-----" << std::endl;
    djeonDiamond.whoAmI();
    zombieDiamond.whoAmI();
    copyDiamond.whoAmI();
    return 0;
}