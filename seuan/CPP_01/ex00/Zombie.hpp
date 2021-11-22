/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuan <seuan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:17:56 by seuan             #+#    #+#             */
/*   Updated: 2021/11/22 21:02:13 by seuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
    public:
        std::string get_name(void);
        void set_name(std::string str);
        void announce(void);
        Zombie(std::string str);
        ~Zombie(void);
    private:
        std::string name;
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif