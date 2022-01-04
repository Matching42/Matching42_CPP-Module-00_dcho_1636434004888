/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:27:54 by djeon             #+#    #+#             */
/*   Updated: 2021/12/13 15:55:56 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    ClapTrap djeon = ClapTrap("djeon");
    ClapTrap zombie = ClapTrap("zombie");

    djeon.attack("zombie");
    zombie.takeDamage(15);
    return 0;
}