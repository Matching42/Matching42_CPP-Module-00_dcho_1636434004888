/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:38:38 by djeon             #+#    #+#             */
/*   Updated: 2021/11/25 09:58:30 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <string>
#include <iostream>

class Karen {
    class Mapping {
        public:
            void (Karen::*f2)();
            std::string type;
    };

    public:
        void complain( std::string level );

        Karen(void);
        ~Karen(void);

    private:
        Mapping complain_list[4];
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
};

#endif