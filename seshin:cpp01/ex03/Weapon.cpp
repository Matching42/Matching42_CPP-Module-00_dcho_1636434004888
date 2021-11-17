/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoyoung <seoyoung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:42:47 by seoyoung          #+#    #+#             */
/*   Updated: 2021/11/17 11:28:19 by seoyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType()
{
    return type;
}

void Weapon::setType(std::string type_)
{
    type = type_;
}

Weapon::Weapon(std::string type_)
{
    type = type_;
}

Weapon::~Weapon()
{
}

