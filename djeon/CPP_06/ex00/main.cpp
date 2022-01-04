/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:00:25 by djeon             #+#    #+#             */
/*   Updated: 2021/12/18 12:27:02 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Casting.hpp"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cout << "please input one arg" << std::endl;
        return -1;
    }
    for (int i = 0; argv[1][i] != '\0'; i++) {
        if (argv[1][i] < 32) {
            std::cout << "non-printable arg" << std::endl;
            return -1;
        }
    }
    
    Casting cast = Casting(argv[1]);

    cast.printChar();
    cast.printInt();
    cast.printFloat();
    cast.printDouble();
    return 0;
}