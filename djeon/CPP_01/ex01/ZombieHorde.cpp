/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:36:35 by djeon             #+#    #+#             */
/*   Updated: 2021/11/21 16:36:36 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    Zombie *zombie_array = new Zombie[N]; // default 생성자를 정의해주어야 객체배열 동적할당이 가능

    for (int i = 0; i < N; i++) {
        zombie_array[i].setName(name);
    }
    return zombie_array;
}
