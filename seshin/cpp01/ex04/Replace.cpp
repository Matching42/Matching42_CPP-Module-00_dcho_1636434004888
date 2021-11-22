/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoyoung <seoyoung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:10:52 by seoyoung          #+#    #+#             */
/*   Updated: 2021/11/19 11:08:30 by seoyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int Replace::readFile()
{
    _ifs.open(_input.getFileName(), std::ios::in);
    if (_ifs.fail())
    {
        std::cerr << "Error: " << strerror(errno) << std::endl;
        return 0;
    }
    _ss << _ifs.rdbuf();
    _content = _ss.str();
    return 1;
}

int Replace::makeFile()
{    
    _newFileName = _input.getFileName();
    
    for (size_t i = 0; i < _newFileName.size(); i++)
        _newFileName[i] = std::toupper(_newFileName[i]);

    _newFileName += ".replace";
   _ofs.open(_newFileName, std::ios::out);

   if (_ofs.fail())
   {
       	std::cerr << "Error!" << std::endl;
   	    return 0;
   }
   return 1;
   
}

void Replace::fileClose()
{
    _ofs.close();
    _ifs.close();
}

std::string Replace::getContent()
{
    return(_content);
}

int Replace::replaceString()
{
    int idx = -1;
    std::string s1 = _input.getS1();

    while (_content.find(s1) != std::string::npos)
    {
        idx = _content.find(s1);
        _content.erase(idx, s1.size());
        _content.insert(idx, _input.getS2());
    }
    if (idx == -1)
    {
        std::cout << "There's no string to replace" << std::endl;
        return 0;
    }
    _ofs << _content;
    return 1;
}

Replace::Replace(Input input)
: _input(input){};


Replace::~Replace(){}