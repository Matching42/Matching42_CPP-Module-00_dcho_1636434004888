/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoyoung <seoyoung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:00:43 by seoyoung          #+#    #+#             */
/*   Updated: 2021/11/16 19:12:54 by seoyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie = zombieHorde(5, "zombie");

    for (int i = 0; i < 5; i++)
    {
        zombie[i].announce();
    }

    delete[] zombie;
}