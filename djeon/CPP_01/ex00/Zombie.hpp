/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:35:23 by djeon             #+#    #+#             */
/*   Updated: 2021/12/11 18:05:43 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
    public:
        void announce(void);
        void setName(std::string name);
        std::string getName(void);

        Zombie(void);
        Zombie(std::string name);
        ~Zombie(void);

    private:
        std::string name;
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif
