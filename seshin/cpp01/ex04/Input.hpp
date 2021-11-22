/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Input.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoyoung <seoyoung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 20:57:04 by seoyoung          #+#    #+#             */
/*   Updated: 2021/11/19 10:42:07 by seoyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUT_HPP
#define INPUT_HPP

#include <iostream>

class Input
{
    private:
        int _argc;
        char **_argv;
        std::string _fileName;
        std::string _s1;
        std::string _s2;
    public:
        std::string getFileName();
        std::string getS1();
        std::string getS2();
        Input(int argc, char **argv);
        ~Input();
        void initPrivateValue();
        int errorCheck();
};

#endif