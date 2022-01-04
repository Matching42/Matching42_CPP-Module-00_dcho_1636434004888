/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:27:54 by djeon             #+#    #+#             */
/*   Updated: 2021/12/14 21:41:46 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

#define MAX 5

int main()
{
    Animal *animals[MAX];
    
    for (int i = 0; i < MAX; i++) {
        if (i < MAX / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < MAX; i++) {
        delete animals[i];
        animals[i] = NULL;
    }

    Dog *dog1 = new Dog();
    Cat *cat1 = new Cat();

    Dog *dog2 = new Dog(*dog1); // 복사 생성자는 const로 리턴받을 수 없음.
    Cat *cat2 = new Cat(*cat1);

    printf("%p\n", dog1->getBrain());
    printf("%p\n", dog2->getBrain());
    printf("%p\n", cat1->getBrain());
    printf("%p\n", cat2->getBrain());

    delete dog1;
    delete dog2;
    delete cat1;
    delete cat2;
}