/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 09:43:10 by djeon             #+#    #+#             */
/*   Updated: 2021/12/16 23:28:34 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form {
    public:
        PresidentialPardonForm(void);
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &input);
        ~PresidentialPardonForm(void);

        PresidentialPardonForm& operator = (const PresidentialPardonForm &input);

        void execute(Bureaucrat const & executor) const;
};

#endif