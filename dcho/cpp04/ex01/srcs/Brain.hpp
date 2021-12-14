#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

# define MAXIDEA 100

class Brain
{
	public:
		Brain();
		~Brain();
		Brain(const Brain& copy);
		Brain& operator = (const Brain& brain);
		const std::string& getIdeas(int index) const;
		void setIdeas(int index, std::string idea);
	private:
		std::string ideas[MAXIDEA];
};

#endif
