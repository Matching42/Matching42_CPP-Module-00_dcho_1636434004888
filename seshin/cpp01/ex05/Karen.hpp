/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoyoung <seoyoung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:25:26 by seoyoung          #+#    #+#             */
/*   Updated: 2021/11/21 23:46:04 by seoyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
class Karen
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        void (Karen::*_f[4])(void);
        //void (*_f[4])(void);
    public:
        void complain (std::string level);
        Karen();
        ~Karen();
};

#endif