#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "FragTrap " << _name << " constructed." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " destructed." << std::endl;
}

void	FragTrap::highFives(void)
{
	if (this->_energyPoints == 0)
	{
		std::cout << "FragTrap " << _name << " has no energy points!" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << _name << " requests a high five!" << std::endl;
	this->_energyPoints--;
}