/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuan <seuan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:02:49 by seuan             #+#    #+#             */
/*   Updated: 2021/11/16 14:02:50 by seuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class contact
{
    private:
        std::string first_name;
        std::string last_name; 
        std::string nick_name;
        std::string phone_number;
        std::string darkest_secret;

    public:
        void set_first_name(std::string str);
        void set_last_name(std::string str);
        void set_nick_name(std::string str);
        void set_phone_number(std::string str);
        void set_darkest_secret(std::string str);
        std::string get_first_name();
        std::string get_last_name();
        std::string get_nick_name();
        std::string get_phone_number();
        std::string get_darkest_secret();

        contact(void);
        ~contact(void);

};

#endif