/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 13:54:39 by djeon             #+#    #+#             */
/*   Updated: 2021/12/15 20:28:23 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("please input") {
    grade = 0;
}

Bureaucrat::Bureaucrat(const std::string nameInput, int gradeInput)
: name(nameInput) {
    grade = gradeInput;
    if (gradeInput < 1)
        throw GradeTooHighException("too high");
    else if (gradeInput > 150)
        throw GradeTooLowException("too low");
}

Bureaucrat::Bureaucrat(const Bureaucrat &input) : name("please input") {
    grade = 0;
    *this = input;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(std::string input) : message(input) { }

Bureaucrat::GradeTooLowException::GradeTooLowException(std::string input) : message(input) { }

Bureaucrat::~Bureaucrat(void) { }

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() { }

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() { }

Bureaucrat& Bureaucrat::operator = (const Bureaucrat &input) {
    grade = input.getGrade();
    return *this;
}

std::string Bureaucrat::getName(void) const {
    return name;
}

int Bureaucrat::getGrade(void) const {
    return grade;
}

void Bureaucrat::increaseGrade(int input) {
    if (grade + input > 150)
        throw GradeTooLowException("too low");
    else
        grade += input;
}

void Bureaucrat::decreaseGrade(int input) {
    if (grade - input < 1)
        throw GradeTooHighException("too high");
    else
        grade -= input;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return message.c_str();
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return message.c_str();
}

std::ostream &operator << (std::ostream &out, const Bureaucrat &rhs) {
    out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
    return out;
}
