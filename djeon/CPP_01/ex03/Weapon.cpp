/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:37:52 by djeon             #+#    #+#             */
/*   Updated: 2021/11/25 10:25:14 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str) {
    type = str;
}

Weapon::~Weapon(void) {
    ;
}

const std::string& Weapon::getType(void) {
    const std::string& ref = type;
    return ref;
}

void Weapon::setType(std::string str) {
    type = str;
}
