#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	zombie = Zombie(name, "random");
	zombie.announce();
}