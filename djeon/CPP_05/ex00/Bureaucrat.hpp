/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 13:54:45 by djeon             #+#    #+#             */
/*   Updated: 2021/12/15 20:32:01 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>

class Bureaucrat {
    public:
        Bureaucrat(void);
        Bureaucrat(const std::string nameInput, int gradeInput);
        Bureaucrat(const Bureaucrat &input);
        ~Bureaucrat(void);

        Bureaucrat& operator = (const Bureaucrat &input);

        std::string getName(void) const;
        int getGrade(void) const;
        void increaseGrade(int input);
        void decreaseGrade(int input);

        class GradeTooHighException : public std::exception {
            public:
                GradeTooHighException(std::string input);
                ~GradeTooHighException(void) throw();

                const char* what(void) const throw();

            private:
                const std::string message;
        };

        class GradeTooLowException : public std::exception {
            public:
                GradeTooLowException(std::string input);
                ~GradeTooLowException(void) throw();

                const char* what(void) const throw();

            private:
                const std::string message;
        };

    private:
        const std::string name;
        int grade;
};

std::ostream &operator << (std::ostream &out, const Bureaucrat &rhs);

#endif