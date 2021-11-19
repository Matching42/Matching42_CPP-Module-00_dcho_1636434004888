/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuan <seuan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:02:54 by seuan             #+#    #+#             */
/*   Updated: 2021/11/16 14:02:55 by seuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string str_to_upper(std::string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = std::toupper(str[i]);
    }
    return (str);
}

int main()
{
    phonebook book = phonebook();
    std::string cmd;
    int idx;
    int flag;

    idx = 0;
    flag = 0;
    while (1) {
        std::cout << "Enter your command: ";
        cmd = str_to_upper(get_line_cpp());
        if (idx == 8)
        {
            idx = 0;
            flag = 1;
        }
        if (cmd == "ADD")
            book.add(idx++);
        else if (cmd == "SEARCH")
            book.search(idx, flag);
        else if (cmd == "EXIT")
            break ;
    }
    return (0);
}