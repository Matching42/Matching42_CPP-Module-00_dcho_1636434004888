/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Casting.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 16:14:08 by djeon             #+#    #+#             */
/*   Updated: 2021/12/18 17:49:20 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASTING_HPP
# define CASTING_HPP

# define MAX_INT std::numeric_limits<int>::max()
# define MAX_FLOAT std::numeric_limits<float>::max()
# define MAX_DOUBLE std::numeric_limits<double>::max()
# define MIN_INT std::numeric_limits<int>::lowest()
# define MIN_FLOAT std::numeric_limits<float>::lowest()
# define MIN_DOUBLE std::numeric_limits<double>::lowest()

# include <string>
# include <iostream>
# include <cctype>

class Casting {
    public:
        Casting(void);
        Casting(char* str);
        Casting(const Casting &input);
        ~Casting(void);

        Casting &operator = (const Casting &input);

        std::string getInput(void);
        void printChar(void);
        void printInt(void);
        void printFloat(void);
        void printDouble(void);

    private:
        const std::string input;
        bool isNan;
        bool isInf;
        // nan : 0 / 0.0
        // inf : 1 / 0.0
};

#endif