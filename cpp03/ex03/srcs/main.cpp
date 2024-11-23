#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/DiamondTrap.hpp"

int main( void )
{
	DiamondTrap diamond("Doji");

	diamond.whoAmI();
	diamond.attack("elon musk");
	diamond.takeDamage(10);
	diamond.beRepaired(10);
	diamond.whoAmI();
	diamond.guardGate();
	diamond.highFives();

	return 0;
}