/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:35:59 by djeon             #+#    #+#             */
/*   Updated: 2021/12/11 18:31:26 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    std::string stack[3] = {"juliet", "bravo", "charlie"};
    std::string heap[3] = {"delta", "fox", "golf"};
    Zombie* test;

    for (int i = 0; i < 3; i++) {
        test = newZombie(heap[i]);
        test->announce();
        delete test;
        test = NULL;
    }
    for (int i = 0; i < 3; i++) {
        randomChump(stack[i]);
    }
    return 0;
}
