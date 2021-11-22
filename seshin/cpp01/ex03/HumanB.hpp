/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoyoung <seoyoung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:48:48 by seoyoung          #+#    #+#             */
/*   Updated: 2021/11/21 22:00:27 by seoyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private :
        std::string name;
        Weapon *weapon;
    public:
    HumanB(std::string name_);
    void attack() const;
    void setWeapon(Weapon& weapon_);
    ~HumanB();
};

#endif