/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoyoung <seoyoung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:44:16 by seoyoung          #+#    #+#             */
/*   Updated: 2021/11/16 19:15:17 by seoyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>
#include <sstream>

class Zombie
{
    private:
        std::string name;

    public:
       void announce();
       void setName(std::string);
       Zombie();
       ~Zombie();      
};

Zombie* zombieHorde( int N, std::string name );

#endif