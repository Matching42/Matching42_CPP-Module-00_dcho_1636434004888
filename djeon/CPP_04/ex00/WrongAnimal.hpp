/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:04:25 by djeon             #+#    #+#             */
/*   Updated: 2021/12/13 20:58:51 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {
    public:
        std::string getType(void) const;
        void makeSound(void) const;

        WrongAnimal(void);
        WrongAnimal(std::string input);
        ~WrongAnimal(void);

    protected:
        std::string type;
};

#endif