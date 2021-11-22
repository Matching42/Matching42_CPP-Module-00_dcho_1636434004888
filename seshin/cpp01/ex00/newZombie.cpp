/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoyoung <seoyoung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:50:56 by seoyoung          #+#    #+#             */
/*   Updated: 2021/11/21 14:43:43 by seoyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie *zombie = new Zombie(name);
    if (zombie == 0)
    {
        std::cout << "Dynamic Allocation Error" << std::endl;
        return 0;
    }
    zombie->announce();
    return (zombie);
}