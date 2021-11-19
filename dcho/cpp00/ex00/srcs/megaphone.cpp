#include <iostream>

std::string megaphone(std::string str)
{
	for (size_t i = 0; i < str.size(); i++)
		str[i] = toupper(str[i]);
	return str;
}

int main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			if (i == argc - 1)
				std::cout << megaphone(argv[i]) << std::endl;
			else
				std::cout << megaphone(argv[i]);
		}
	}
	return 0;
}
