/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:08:49 by djeon             #+#    #+#             */
/*   Updated: 2021/12/14 14:08:06 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
    public:
        void attack(std::string const & target);
        void highFivesGuys(void);

        FragTrap(void);
        FragTrap(std::string Name);
        ~FragTrap(void);

    private:
};

#endif