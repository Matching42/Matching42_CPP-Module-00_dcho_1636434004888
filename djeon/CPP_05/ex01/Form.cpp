/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 21:00:10 by djeon             #+#    #+#             */
/*   Updated: 2021/12/15 22:37:08 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void)
 : name("please input"), gradeSigned(0), gradeExecute(0) {
    sign = false;
}

Form::Form(std::string nameInput, int grade1, int grade2)
 : name(nameInput), gradeSigned(grade1), gradeExecute(grade2) {
    sign = false;
    if (grade1 < 1)
        throw GradeTooHighException("gradeSigned too high");
    else if (grade1 > 150)
        throw GradeTooLowException("gradeSigned too low");
    else if (grade2 < 1)
        throw GradeTooHighException("gradeExecute too high");
    else if (grade2 > 150)
        throw GradeTooLowException("gradeExecute too low");
}

Form::Form(const Form &input) 
 : name("please input"), gradeSigned(0), gradeExecute(0) {
    *this = input;
}

Form::GradeTooHighException::GradeTooHighException(std::string input) : message(input) { }

Form::GradeTooLowException::GradeTooLowException(std::string input) : message(input) { }

Form::~Form(void) { }

Form::GradeTooHighException::~GradeTooHighException(void) throw() { }

Form::GradeTooLowException::~GradeTooLowException(void) throw() { }

Form& Form::operator = (const Form &input) {
    sign = input.getSign();
    return *this;
}

bool Form::getSign(void) const {
    return sign;
}

std::string Form::getName(void) const {
    return name;
}

int Form::getGradeSigned(void) const {
    return gradeSigned;
}

int Form::getGradeExecute(void) const {
    return gradeExecute;
}

void Form::beSigned(Bureaucrat &input) {
    if (gradeSigned >= input.getGrade())
        sign = true;
    else
        throw GradeTooLowException("too low");
}

const char* Form::GradeTooHighException::what() const throw() {
    return message.c_str();
}

const char* Form::GradeTooLowException::what() const throw() {
    return message.c_str();
}

std::ostream &operator << (std::ostream &out, const Form &rhs) {
    out << rhs.getName() << ", Form gradeSigned " << rhs.getGradeSigned() \
    << ", Form gradeExecute " << rhs.getGradeExecute() << ".";
    return out;
}
