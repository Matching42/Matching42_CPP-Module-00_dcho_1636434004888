#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public:
		Brain();
		~Brain();
		Brain(const Brain& copy);
		Brain& operator = (const Brain& brain);
		std::string ideas[100];
};

#endif