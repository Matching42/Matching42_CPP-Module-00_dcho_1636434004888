/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:36:39 by djeon             #+#    #+#             */
/*   Updated: 2021/11/21 16:36:40 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    int N[3] = {1, 5, 3};
    std::string name[3] = {"heeeeeello", "hiiiiiiii", "byeeeeeee"};
    Zombie* zombie_array;

    for (int i = 0; i < 3; i++) {
        zombie_array = zombieHorde(N[i], name[i]);
        for (int j = 0; j < N[i]; j++) {
            zombie_array[j].announce();
        }
        delete[] zombie_array; // []를 생략하면 비정상적인 반환 why?
    }
    return 0;
}
