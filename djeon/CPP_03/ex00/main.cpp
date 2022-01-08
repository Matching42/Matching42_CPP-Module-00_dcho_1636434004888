/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:27:54 by djeon             #+#    #+#             */
/*   Updated: 2022/01/07 14:30:20 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    ClapTrap djeon = ClapTrap("djeon");
    ClapTrap zombie = ClapTrap("zombie");
    ClapTrap copy(djeon);

    // copy test
    std::cout << "-----copy test-----" << std::endl;
    copy.attack("zombie");
    zombie.takeDamage(0);

    // djeon attack zombie
    std::cout << "-----djeon attack zombie-----" << std::endl;
    djeon.attack("zombie");
    zombie.takeDamage(0);

    // repair test
    std::cout << "-----repair test-----" << std::endl;
    zombie.takeDamage(5);
    zombie.beRepaired(7);
    zombie.takeDamage(0);
    return 0;
}