#include "../includes/HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name), _weapon(NULL) { }

HumanB::~HumanB() { }

void	HumanB::setWeapon( Weapon& weapon )
{
	this->_weapon = &weapon;
	return;
}

void	HumanB::attack( void ) const
{
	std::cout << this->_name << " attacks with his bare hands" << std::endl;
}
