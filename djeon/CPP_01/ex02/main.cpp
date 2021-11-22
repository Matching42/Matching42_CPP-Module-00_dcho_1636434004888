/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:36:52 by djeon             #+#    #+#             */
/*   Updated: 2021/11/22 14:45:04 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {
    std::string zombie = "HI THIS IS BRAIN";
    std::string *stringPTR = &zombie;
    std::string &stringREF = zombie;

    std::cout << "stringPTR : " << stringPTR << std::endl;
    std::cout << "stringREF : " << &stringREF << std::endl;
    std::cout << "--------------------------" << std::endl;
    std::cout << "stringPTR : " << *stringPTR << std::endl;
    std::cout << "stringREF : " << stringREF << std::endl;
}
