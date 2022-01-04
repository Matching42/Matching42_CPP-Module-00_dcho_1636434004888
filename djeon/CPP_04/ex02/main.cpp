/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:27:54 by djeon             #+#    #+#             */
/*   Updated: 2021/12/16 22:29:17 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // Animal* test = new Animal();
    // delete test;
    // test = NULL;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    Animal *animals[50];
    
    for (int i = 0; i < 50; i++) {
        if (i < 25)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < 50; i++) {
        delete animals[i];
        animals[i] = NULL;
    }
    
    delete j;//should not create a leak
    delete i;
    j = NULL;
    i = NULL;
}