/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:04:25 by djeon             #+#    #+#             */
/*   Updated: 2021/12/14 14:07:31 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal {
    public:
        std::string getType(void) const;
        virtual void makeSound(void) const;

        Animal(void);
        Animal(std::string input);
        ~Animal(void);

    protected:
        std::string type;
};

#endif