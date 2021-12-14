/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:37:34 by djeon             #+#    #+#             */
/*   Updated: 2021/11/25 10:24:44 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon {
    public:
        const std::string& getType(void);
        void setType(std::string str);

        Weapon(std::string str);
        ~Weapon(void);

    private:
        std::string type;
};

#endif
