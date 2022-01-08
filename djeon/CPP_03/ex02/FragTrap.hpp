/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:08:49 by djeon             #+#    #+#             */
/*   Updated: 2022/01/05 17:57:08 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        void attack(std::string const & target);
        void highFivesGuys(void);

        FragTrap(void);
        FragTrap(const FragTrap &rhs);
        FragTrap& operator = (const FragTrap &rhs);
        FragTrap(std::string Name);
        ~FragTrap(void);

    private:
};

#endif