#include "ScalarConversion.hpp"

int main(int argc, char *argv[])
{
	if (argc !=  2 || argv[1] == NULL)
	{
		std::cout << "ERR: Please check again" << std::endl;
		return (-1);
	}
	ScalarConversion sc(argv[1]);

	sc.conversion();
	return (0);
}