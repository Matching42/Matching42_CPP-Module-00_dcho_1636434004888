/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuan <seuan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:17:12 by seuan             #+#    #+#             */
/*   Updated: 2021/11/22 16:33:39 by seuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::string name = "James";
    std::string name2 = "Joey";

    Zombie *zom = newZombie(name);
    zom->announce();
    delete zom;
    zom = NULL;

    randomChump(name2);
    return(0);
}