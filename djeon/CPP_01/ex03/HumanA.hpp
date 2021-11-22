/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:37:40 by djeon             #+#    #+#             */
/*   Updated: 2021/11/22 16:56:20 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
    public:
        void attack(void);

        HumanA(std::string str, Weapon &wep);
        ~HumanA(void);

    private:
        Weapon &weapon;
        std::string name;
};

#endif
