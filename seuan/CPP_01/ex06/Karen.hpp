#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

class Karen
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

	public:
		Karen(void);
		~Karen(void);
		void complain( std::string level );
};

std::string str_to_upper(std::string str);

#endif