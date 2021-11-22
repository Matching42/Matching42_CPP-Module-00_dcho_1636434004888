/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:35:59 by djeon             #+#    #+#             */
/*   Updated: 2021/11/22 15:07:00 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    std::string stack[3] = {"a", "b", "c"};
    std::string heap[3] = {"d", "f", "g"};
    Zombie* test;

    for (int i = 0; i < 3; i++) {
        test = newZombie(heap[i]);
        test->announce();
        delete test; // test에 null을 넣어줘야하는지?
    }
    for (int i = 0; i < 3; i++) {
        randomChump(stack[i]);
    }
    return 0;
}
