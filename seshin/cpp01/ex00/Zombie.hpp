/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoyoung <seoyoung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:44:16 by seoyoung          #+#    #+#             */
/*   Updated: 2021/11/16 19:11:54 by seoyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>

class Zombie
{
    private:
        std::string name;

    public:
       void announce();
       Zombie(std::string name);
       ~Zombie();      
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);


#endif