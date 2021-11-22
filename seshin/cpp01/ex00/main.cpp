/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoyoung <seoyoung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:51:05 by seoyoung          #+#    #+#             */
/*   Updated: 2021/11/21 14:44:29 by seoyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    randomChump("zombie1");

    Zombie *zombie2 = newZombie("zombie2");
    if (zombie2 != 0)
        delete zombie2;
    return (0);
}