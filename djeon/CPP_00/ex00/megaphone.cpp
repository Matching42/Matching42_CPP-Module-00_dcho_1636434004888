/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:53:13 by djeon             #+#    #+#             */
/*   Updated: 2021/11/25 10:58:11 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
    std::string str;
    if (argc <= 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else {
        for (int i = 1; i < argc; i++) {
            str = argv[i];
            for (int j = 0; j < str.length(); j++) {
                str[j] = toupper(str[j]);
            }
            std::cout << str;
            if (i != argc - 1)
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}