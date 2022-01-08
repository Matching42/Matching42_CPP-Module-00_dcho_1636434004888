/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:49:41 by djeon             #+#    #+#             */
/*   Updated: 2022/01/08 18:47:37 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
    public:
        void attack(std::string const & target);
        void whoAmI(void);

        DiamondTrap(void);
        DiamondTrap(const DiamondTrap &rhs);
        DiamondTrap& operator = (const DiamondTrap &rhs);
        DiamondTrap(std::string Name);
        ~DiamondTrap(void);

    private:
        std::string Name;
};

#endif