/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 09:43:05 by djeon             #+#    #+#             */
/*   Updated: 2021/12/16 23:29:04 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("default", "default", 25, 5) { }

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("default", target, 25, 5) { }

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &input) : Form(input) { }

PresidentialPardonForm::~PresidentialPardonForm(void) { }

PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm &input) {
    Form::operator = (input);
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    Form::execute(executor);
    std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}