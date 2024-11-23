#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"


int main()
{
	ClapTrap scav("Doji");
	ScavTrap scav2("Koji");

	scav.attack("elon musk");
	scav.takeDamage(10);
	scav.beRepaired(10);

	scav2.attack("jeff bezos");
	scav2.takeDamage(10);
	scav2.beRepaired(10);
	scav2.guardGate();



	return 0;
}