/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 21:23:43 by djeon             #+#    #+#             */
/*   Updated: 2021/12/14 14:07:05 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# define MAXIDEAS 100

# include <string>

class Brain {
    public:
        std::string ideas[MAXIDEAS];

        Brain(void);
        ~Brain(void);
};

#endif