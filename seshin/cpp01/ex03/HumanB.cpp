/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoyoung <seoyoung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:51:45 by seoyoung          #+#    #+#             */
/*   Updated: 2021/11/21 22:21:14 by seoyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name_)
: name(name_) {};


void HumanB::setWeapon(Weapon& weapon_)
{
    weapon = &weapon_;
}

void HumanB::attack() const
{
    std::cout << name 
                << " attacks with his "
                << weapon->getType() << std::endl;
}

HumanB::~HumanB()
{
}