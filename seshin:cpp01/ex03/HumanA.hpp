/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoyoung <seoyoung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:46:54 by seoyoung          #+#    #+#             */
/*   Updated: 2021/11/17 11:29:44 by seoyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private :
        std::string name;
        Weapon& weapon;
    public:
        HumanA(std::string name_, Weapon& weapon_);
        ~HumanA();
        void attack();
};

#endif