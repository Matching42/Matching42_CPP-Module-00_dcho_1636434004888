/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:37:47 by djeon             #+#    #+#             */
/*   Updated: 2021/11/21 16:37:48 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
    public:
        void attack(void);
        void setWeapon(Weapon &wep);

        HumanB(void);
        HumanB(std::string str);
        ~HumanB(void);

    private:
        Weapon *weapon;
        std::string name;
};

#endif
