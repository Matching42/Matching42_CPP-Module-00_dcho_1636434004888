/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Input.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoyoung <seoyoung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 20:57:15 by seoyoung          #+#    #+#             */
/*   Updated: 2021/11/19 09:46:14 by seoyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Input.hpp"

Input::Input(int argc, char **argv)
{
    _argc = argc;
    _argv = argv;
}

void Input::initPrivateValue()
{
    _fileName = _argv[1];
    _s1 = _argv[2];
    _s2 = _argv[3];
}

int Input::errorCheck()
{
    if (_argc < 4)
    {
        std::cout << "Please enter input without exception" << std::endl; 
        return -1;
    }
    if (_argc > 4)
    {
        std::cout << "Too many input" << std::endl;
        return -1;
    }
    initPrivateValue();
    if (_fileName.empty() == true)
    {
        std::cout << "Please enter the non-empty file name" << std::endl;
        return -1;
    }
    else if (_s1.empty() == true)
    {
        std::cout << "Please enter the non-empty string 1" << std::endl;
        return -1;
    }
    else if (_s2.empty() == true)
    {
        std::cout << "Please enter the non-empty string 2" << std::endl;
        return -1;
    }
    return 0;
}

std::string Input::getFileName()
{
    return _fileName;
}

std::string Input::getS1()
{
    return _s1;
}

std::string Input::getS2()
{
    return _s2;
}

Input::~Input(){}