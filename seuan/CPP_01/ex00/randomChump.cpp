/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuan <seuan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:17:34 by seuan             #+#    #+#             */
/*   Updated: 2021/11/18 14:47:12 by seuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie *tmp;

    
    // allocate memory for the object;
    tmp = newZombie(name);

    // Program
    tmp->announce();

    // Deallocate memory for the object
    delete tmp;
    tmp = NULL;
    return ;
}