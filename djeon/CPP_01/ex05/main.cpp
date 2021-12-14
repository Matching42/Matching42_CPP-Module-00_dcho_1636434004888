/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:38:46 by djeon             #+#    #+#             */
/*   Updated: 2021/12/11 17:42:38 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(void) {
    Karen karen;
    karen.complain("");
    karen.complain("hi");
    std::cout << "--------------DEBUG--------------" << std::endl;
    karen.complain("DEBUG");
    karen.complain("debug");
    std::cout << "--------------INFO--------------" << std::endl;
    karen.complain("INFO");
    karen.complain("info");
    std::cout << "--------------WARNING--------------" << std::endl;
    karen.complain("WARNING");
    karen.complain("warning");
    std::cout << "--------------ERROR--------------" << std::endl;
    karen.complain("ERROR");
    karen.complain("error");
}
