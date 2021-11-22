#include <iostream>

class Karen
{
	public:
		Karen();
		~Karen();
		void complain(std::string level);
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		void except(void);
};

std::string str_toupper(std::string str);
