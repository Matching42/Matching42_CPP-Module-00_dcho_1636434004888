/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoyoung <seoyoung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:32:06 by seoyoung          #+#    #+#             */
/*   Updated: 2021/11/21 14:59:08 by seoyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombie = new Zombie[5];
    std::stringstream sstream;
    std::string temp;

    for(int i = 0; i < N; i++)
    {
        sstream << i;
        zombie[i].setName(name + sstream.str());
        sstream.str("");    
    }
    return (zombie);
}
