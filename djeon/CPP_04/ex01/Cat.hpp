/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 20:25:03 by djeon             #+#    #+#             */
/*   Updated: 2021/12/14 17:01:01 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
    public:
        void makeSound(void) const;
        Brain* getBrain(void) const;

        Cat& operator = (const Cat &input);

        Cat(void);
        Cat(Cat &input);
        ~Cat(void);
    
    private:
        Brain *brain;
};

#endif