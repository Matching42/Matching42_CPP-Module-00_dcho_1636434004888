/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Casting.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 16:14:15 by djeon             #+#    #+#             */
/*   Updated: 2021/12/18 18:49:56 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Casting.hpp"

Casting::Casting(void) : input("default") {
    isNan = false;
}

Casting::Casting(char* str) : input(str) {
    if (input == "nan")
        isNan = true;
    else
        isNan = false;
    if (input == "+inf" || input == "-inf" || input == "inf")
        isInf = true;
    else
        isInf = false;
}

Casting::Casting(const Casting &input) {
    *this = input;
}

Casting::~Casting(void) { }

Casting &Casting::operator = (const Casting &input) {
    isNan = input.isNan;
    return *this;
}

std::string Casting::getInput(void) {
    return input;
}

void Casting::printChar(void) {
    double double_tmp;
    int flag;

    // flag setting
    if (input[0] >= '0' && input[0] <= '9') {
        double_tmp = stod(input);
        if (double_tmp < 32 || double_tmp > 127)
            flag = 3;
        else if (double_tmp - (int)double_tmp > 0)
            flag = 2;
        else
            flag = 0;
    }
    else if ((input[0] == '+' || input[0] == '-')
    && input[1] >= '0' && input[1] <= '9') {
        double_tmp = stod(input);
        if (double_tmp < 32 || double_tmp > 127)
            flag = 3;
        else if (double_tmp - (int)double_tmp > 0)
            flag = 2;
        else
            flag = 0;
    }
    else if (strlen(input.c_str()) == 1)
        flag = 1;
    else
        flag = 2;

    // print
    std::cout << "char: ";
    switch (flag) {
        case 0:
            std::cout << "'" << static_cast<char>(double_tmp) << "'" << std::endl;
            break ;
        case 1:
            std::cout << "'" << input.c_str() << "'" << std::endl;
            break ;
        case 2:
            std::cout << "impossible" << std::endl;
            break ;
        case 3:
            std::cout << "Non displayable" << std::endl;
            break ;
        default:
            std::cout << "error" << std::endl;
    }
}

void Casting::printInt(void) {
    double double_tmp;
    int flag;

    // flag setting
    if (input[0] >= '0' && input[0] <= '9') {
        double_tmp = stod(input);
        if (double_tmp < MIN_INT || double_tmp > MAX_INT)
            flag = 2;
        else
            flag = 0;
    }
    else if ((input[0] == '+' || input[0] == '-')
    && input[1] >= '0' && input[1] <= '9') {
        double_tmp = stod(input);
        if (double_tmp < MIN_INT || double_tmp > MAX_INT)
            flag = 2;
        else
            flag = 0;
    }
    else
        flag = 2;

    // print
    std::cout << "int: ";
    switch (flag) {
        case 0:
            std::cout << static_cast<int>(double_tmp) << std::endl;
            break ;
        case 1:
            std::cout << "'" << input.c_str() << "'" << std::endl;
            break ;
        case 2:
            std::cout << "impossible" << std::endl;
            break ;
        case 3:
            std::cout << "Non displayable" << std::endl;
            break ;
        default:
            std::cout << "error" << std::endl;
    }
}

void Casting::printFloat(void) {
    double double_tmp;
    double dZero = 0.0;
    float float_tmp;
    int flag;
    std::string tail = "f";
    std::string head = "";

    // flag setting
    if (input[0] >= '0' && input[0] <= '9') {
        double_tmp = stod(input);
        if (double_tmp < MIN_FLOAT || double_tmp > MAX_FLOAT)
            flag = 2;
        else
            flag = 0;
    }
    else if ((input[0] == '+' || input[0] == '-')
    && input[1] >= '0' && input[1] <= '9') {
        double_tmp = stod(input);
        if (double_tmp < MIN_FLOAT || double_tmp > MAX_FLOAT)
            flag = 2;
        else
            flag = 0;
    }
    else if (isNan == true) {
        float_tmp = 0 / dZero;
        flag = 1;
    }
    else if (isInf == true) {
        if (input[0] == '-')
            float_tmp = -1 / dZero;
        else {
            float_tmp = 1 / dZero;
            head = "+";
        }
        flag = 4;
    }
    else
        flag = 2;

    // print format setting
    if (flag == 0 && double_tmp - (int)double_tmp == 0)
        tail = ".0f";

    // print
    std::cout << "float: ";
    switch (flag) {
        case 0:
            std::cout << static_cast<float>(double_tmp) << tail << std::endl;
            break ;
        case 1:
            std::cout << float_tmp << tail << std::endl;
            break ;
        case 2:
            std::cout << "impossible" << std::endl;
            break ;
        case 3:
            std::cout << "Non displayable" << std::endl;
            break ;
        case 4:
            std::cout << head << float_tmp << tail << std::endl;
            break ;
        default:
            std::cout << "error" << std::endl;
    }
}

void Casting::printDouble(void) {
    double double_tmp;
    double dZero = 0.0;
    int flag;
    std::string tail = "";
    std::string head = "";

    // flag setting
    if (input[0] >= '0' && input[0] <= '9') {
        double_tmp = stod(input);
        if (double_tmp < MIN_DOUBLE || double_tmp > MAX_DOUBLE)
            flag = 2;
        else
            flag = 0;
    }
    else if ((input[0] == '+' || input[0] == '-')
    && input[1] >= '0' && input[1] <= '9') {
        double_tmp = stod(input);
        if (double_tmp < MIN_DOUBLE || double_tmp > MAX_DOUBLE)
            flag = 2;
        else
            flag = 0;
    }
    else if (isNan == true) {
        double_tmp = 0 / dZero;
        flag = 1;
    }
    else if (isInf == true) {
        if (input[0] == '-')
            double_tmp = -1 / dZero;
        else {
            double_tmp = 1 / dZero;
            head = "+";
        }
        flag = 4;
    }
    else
        flag = 2;

    // print format setting
    if (flag == 0 && double_tmp - (int)double_tmp == 0)
        tail = ".0";

    // print
    std::cout << "double: ";
    switch (flag) {
        case 0:
            std::cout << static_cast<double>(double_tmp) << tail << std::endl;
            break ;
        case 1:
            std::cout << double_tmp << std::endl;
            break ;
        case 2:
            std::cout << "impossible" << std::endl;
            break ;
        case 3:
            std::cout << "Non displayable" << std::endl;
            break ;
        case 4:
            std::cout << head << double_tmp << std::endl;
            break ;
        default:
            std::cout << "error" << std::endl;
    }
}