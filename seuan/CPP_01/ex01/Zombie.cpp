/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuan <seuan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:17:39 by seuan             #+#    #+#             */
/*   Updated: 2021/11/22 16:38:12 by seuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout << "Zombie Constructor called" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << Zombie::get_name() << " is gone to Blackhole 😇" << std::endl;
}

std::string Zombie::get_name(void)
{
    return (this->name);
}

void Zombie::set_name(std::string str)
{
    this->name = str;
}

void Zombie::announce(void)
{
    std::cout << "<" << this->name << ">" <<" BraiiiiiiinnnzzzZ..." << std::endl;
}