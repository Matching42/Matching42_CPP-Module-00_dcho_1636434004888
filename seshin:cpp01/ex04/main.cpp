/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoyoung <seoyoung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 20:43:38 by seoyoung          #+#    #+#             */
/*   Updated: 2021/11/19 11:12:26 by seoyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char **argv)
{
    Input input(argc, argv);
    if (input.errorCheck())
        return -1;
    Replace replace(input);
    if (!replace.readFile() || !replace.makeFile())
        return -1;
    replace.replaceString();
    replace.fileClose();
}