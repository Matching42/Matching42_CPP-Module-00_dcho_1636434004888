/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoyoung <seoyoung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:51:05 by seoyoung          #+#    #+#             */
/*   Updated: 2021/11/16 18:20:24 by seoyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie zombie1("zombie1");
    zombie1.announce();

    randomChump("zombie2");

    Zombie *zombie3 = newZombie("zombie3");
    delete zombie3;
    
    return (0);
}