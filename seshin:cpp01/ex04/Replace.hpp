/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoyoung <seoyoung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:13:03 by seoyoung          #+#    #+#             */
/*   Updated: 2021/11/19 10:33:51 by seoyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include "Input.hpp"
#include <iostream>
#include <sstream>
#include <fstream>

class Replace
{
    private:
        std::ofstream _ofs;
        std::ifstream _ifs;
        std::stringstream _ss;
        std::string _newFileName;
        std::string _content;
        Input _input;
    public:
        int readFile();
        int makeFile();
        void fileClose();
        Replace(Input input);
        ~Replace();
        int replaceString();
        std::string getContent();
};

#endif