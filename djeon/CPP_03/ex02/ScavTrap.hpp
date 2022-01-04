/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:53:26 by djeon             #+#    #+#             */
/*   Updated: 2021/12/14 14:08:20 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        void attack(std::string const & target);
        void guardGate(void);

        ScavTrap(void);
        ScavTrap(std::string Name);
        ~ScavTrap(void);

    private:
};

#endif