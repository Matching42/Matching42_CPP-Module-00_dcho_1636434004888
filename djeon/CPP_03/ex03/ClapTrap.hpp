/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:27:48 by djeon             #+#    #+#             */
/*   Updated: 2021/12/10 16:34:16 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
    public:
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void setHitpoints(int input);
        void setEnergyPoints(int input);
        void setAttackDamage(int input);
        
        ClapTrap(void);
        ClapTrap(std::string Name);
        ~ClapTrap(void);

    private:
        std::string Name;
        int Hitpoints;
        int EnergyPoints;
        int AttackDamage;
};

#endif