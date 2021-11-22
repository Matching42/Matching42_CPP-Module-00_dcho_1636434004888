#include <iostream>
#include <string>
#include <fstream>

std::string fileInput(std::string& fn)
{
	std::ifstream	fin(fn);
	std::string		fc;

	if (!fin.is_open())
	{
		std::cerr << "Can not find file!" << std::endl;
		exit(100);
	}

	fin.seekg(0, std::ios::end);
	int size = fin.tellg();
	fc.resize(size);
	fin.seekg(0, std::ios::beg);
	fin.read(&fc[0], size);
	return (fc);
}

void	replace(std::string& fn, const std::string& s1, const std::string& s2)
{
	std::string		fc = fileInput(fn);
	std::ofstream	fout(fn.erase(fn.find(".txt"), fn.size() ) + ".replace");
	int spot;

	while (fc.find(s1) != std::string::npos)
	{
		spot = fc.find(s1);
		fc.erase(spot, s1.size());
		fc.insert(spot, s2);
	}
	if (fout.is_open())
		fout << fc << std::endl;
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string fn(argv[1]);
		std::string s1(argv[2]);
		std::string s2(argv[3]);
		if (s1.length() != 0 && s2.length() != 0)
			replace(fn, s1, s2);
		else
			std::cout << "s1 or s2, that are empty!😅" << std::endl;
	}
	else
		std::cout << "The number of arguments is incorrect!😅" << std::endl;
	return (0);
}
