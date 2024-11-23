#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int main()
{
	FragTrap doji("Doji");

	doji.attack("elon musk");
	doji.takeDamage(10);
	doji.beRepaired(5);
	doji.highFives();

	return 0;
}