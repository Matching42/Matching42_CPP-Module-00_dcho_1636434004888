/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoyoung <seoyoung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 11:22:07 by seoyoung          #+#    #+#             */
/*   Updated: 2021/11/15 11:22:28 by seoyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string ft_upper(std::string str)
{
    for (size_t i = 0; i < str.size(); i++)
        str[i] = std::toupper(str[i]);
    return str;
}

int main(int argc, char **argv)
{
    std::string upper_string;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for(int i = 1; i < argc; i++)
        {
            upper_string = ft_upper(argv[i]);
            std::cout << upper_string;
        }
        std::cout << std::endl;
    }
    return 0;
}
