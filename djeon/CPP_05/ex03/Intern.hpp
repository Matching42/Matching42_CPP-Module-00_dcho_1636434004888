/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 09:11:03 by djeon             #+#    #+#             */
/*   Updated: 2021/12/17 10:56:58 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include <exception>

class Form;

class Intern {
    public:
        Intern(void);
        // Intern(const Intern &input);
        ~Intern(void);

        // Intern& operator = (const Intern &input);

        Form* makeForm(std::string name, std::string target);

        class InvalidFormNameException : public std::exception {
            public:
                InvalidFormNameException(std::string input);
                ~InvalidFormNameException(void) throw();

                const char* what(void) const throw();

            private:
                const std::string message;
        };
};

#endif