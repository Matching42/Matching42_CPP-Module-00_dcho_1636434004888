/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 20:25:14 by djeon             #+#    #+#             */
/*   Updated: 2021/12/14 17:05:10 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
    public:
        void makeSound(void) const;
        Brain* getBrain(void) const;

        Dog& operator = (const Dog &rhs); // 생성된 인스턴스에만 사용될 수 있음.

        Dog(void);
        Dog(Dog &input);
        ~Dog(void);

    private:
        Brain *brain;
};

#endif