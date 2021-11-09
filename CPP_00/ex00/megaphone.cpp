/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuan <seuan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:11:35 by seuan             #+#    #+#             */
/*   Updated: 2021/11/09 16:15:03 by seuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

std::string str_to_upper(std::string str)
{
    // Using str.length(), toupper(char)
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = std::toupper(str[i]);
    }
    return (str);
}

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < ac; i++)
            std::cout << str_to_upper(av[i]);
        std::cout << std::endl;
    }
    return (0);
}
