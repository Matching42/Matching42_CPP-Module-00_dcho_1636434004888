/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoyoung <seoyoung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:49:11 by seoyoung          #+#    #+#             */
/*   Updated: 2021/11/21 22:07:11 by seoyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) 
: name(name), weapon(weapon) {};



void HumanA::attack() const
{
    std::cout << name 
                << " attacks with his "
                << weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
}