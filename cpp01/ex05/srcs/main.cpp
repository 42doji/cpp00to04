#include "../includes/Harl.hpp"

int	main( void )
{
	std::string input;
	Harl        harl;

	std::cout << "levels: DEBUG, INFO, WARNING, ERROR" << std::endl;
	do
	{
		std::cout << "Enter a level: ";
		std::cin >> input;
		harl.complain(input);
	} while (input.compare("exit"));
	return (0);
}