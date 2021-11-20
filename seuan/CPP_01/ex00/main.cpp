/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuan <seuan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:17:12 by seuan             #+#    #+#             */
/*   Updated: 2021/11/19 20:00:27 by seuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main()
{
    std::string name = "James";
    std::string name2 = "Joey";
    std::string name3 = "Chump";
    Zombie zom = Zombie(name);
    zom.announce();

    Zombie *zom2 = newZombie(name2);
    delete zom2;
    zom2 = NULL;

    randomChump(name3);
    return(0);
}