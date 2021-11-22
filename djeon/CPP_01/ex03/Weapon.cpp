/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:37:52 by djeon             #+#    #+#             */
/*   Updated: 2021/11/21 16:37:53 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {
    ;
}

Weapon::Weapon(std::string str) {
    type = str;
}

Weapon::~Weapon(void) {
    ;
}

std::string& Weapon::getType(void) {
    std::string& ref = type;
    return ref;
}

void Weapon::setType(std::string str) {
    type = str;
}
