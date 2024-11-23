#include "../includes/SedV2.hpp"
#include <iostream>

int main(int ac, char **av)
{
	SedV2 sed;

	if (ac < 4 || ac > 6)
	{
		std::cerr << "Usage: ./a.out [filename] [s1] [s2] [flag]" << std::endl;
		return 1;
	}
	if (ac == 4)
		sed.replace(av[1], av[2], av[3]);
	else if (ac == 5)
		sed.replace(av[1], av[2], av[3], av[4]);
	else if (ac == 6)
		sed.replace(av[1], av[2], av[3], av[4], av[5]);
	return 0;
}