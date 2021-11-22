/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:35:23 by djeon             #+#    #+#             */
/*   Updated: 2021/11/21 16:35:29 by djeon            ###   ########.fr       */
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

        Zombie(std::string name);
        ~Zombie(void);

    private:
        std::string name;
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif
