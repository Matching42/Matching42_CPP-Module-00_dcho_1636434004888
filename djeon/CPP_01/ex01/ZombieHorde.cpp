/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:36:35 by djeon             #+#    #+#             */
/*   Updated: 2021/12/11 18:44:04 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    Zombie *zombie_array = new Zombie[N]; // default 생성자를 정의해주어야 객체배열 동적할당이 가능
    std::string input_name;

    for (int i = 0; i < N; i++) {
        input_name = i + '0';
        input_name = name + input_name;
        zombie_array[i].setName(input_name);
    }
    return zombie_array;
}
