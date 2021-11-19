/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuan <seuan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:03:08 by seuan             #+#    #+#             */
/*   Updated: 2021/11/16 14:03:09 by seuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"

std::string get_line_cpp(void);

class phonebook
{
    private:
        contact cont_list[8];

    public:
        void add(int idx);
        void search(int idx, int flag);

        phonebook(void);
        ~phonebook(void);
};

#endif