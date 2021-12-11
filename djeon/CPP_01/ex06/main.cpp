/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 02:06:37 by djeon             #+#    #+#             */
/*   Updated: 2021/12/11 17:59:06 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char *argv[]) {
    Karen karen;
    if (argc != 2) {
        std::cout << "please input arg" << std::endl;
        return -1;
    }
    for (int i = 0; i < argv[1][i] != '\0'; i++) {
        argv[1][i] = toupper(argv[1][i]);
    }
    std::string arg(argv[1]);
    karen.complain(arg);
}
