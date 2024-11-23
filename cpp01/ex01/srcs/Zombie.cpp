#include "../includes/Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie(void) {}

void	Zombie::announce(void) const
{
	std::cout << "<" << this->_name << ":  Braiiiiiiinnnssss..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}
