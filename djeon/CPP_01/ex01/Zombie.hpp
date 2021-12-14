/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:36:28 by djeon             #+#    #+#             */
/*   Updated: 2021/11/21 16:36:29 by djeon            ###   ########.fr       */
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

Zombie* zombieHorde(int N, std::string name);

#endif
