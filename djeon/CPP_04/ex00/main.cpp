/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:27:54 by djeon             #+#    #+#             */
/*   Updated: 2021/12/13 21:10:10 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* test = new WrongCat();
    const WrongAnimal* test2 = new WrongAnimal();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << test->getType() << " " << std::endl;
    std::cout << test2->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    test->makeSound();
    test2->makeSound();
    meta->makeSound();
    
    delete meta;
    delete j;
    delete i;
    delete test;
    delete test2;
    meta = NULL;
    j = NULL;
    i = NULL;
    test = NULL;
    test2 = NULL;
    return 0;
}