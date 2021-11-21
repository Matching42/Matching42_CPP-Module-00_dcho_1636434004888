#include <iostream>
#include <fstream>

void	replace(const std::string& fn, const std::string& s1, const std::string& s2)
{
	std::ifstream fin(fn);
	if (!fin)
	{
		std::cerr << "Can not find file!" << std::endl;
		exit(100);
	}
	if (s1.length() || s2.length() || fn.length())
		std::cout << s1 << std::endl;
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string fn = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		if (s1.length() != 0 && s2.length() != 0)
			replace(fn, s1, s2);
		else
			std::cout << "s1 or s2, that are empty!😅" << std::endl;
	}
	else
		std::cout << "The number of arguments is incorrect!😅" << std::endl;
	return (0);
}