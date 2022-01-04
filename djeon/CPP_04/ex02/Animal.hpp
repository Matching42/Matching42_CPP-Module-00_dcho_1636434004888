/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:04:25 by djeon             #+#    #+#             */
/*   Updated: 2021/12/16 22:29:30 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal {
    public:
        std::string getType(void) const;
        virtual void makeSound(void) const = 0;

        Animal(void);
        Animal(std::string input);
        virtual ~Animal(void);

    protected:
        std::string type;
};

#endif