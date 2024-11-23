#include "../includes/HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name), _weapon(NULL) { }

HumanB::~HumanB() { }

void	HumanB::setWeapon( Weapon& weapon )
{
	this->_weapon = &weapon;
}

void	HumanB::attack( void ) const
{
	if (this->_weapon == NULL || this->_weapon->getType() == "")
		std::cout << this->_name << " attacks with his bare hands" << std::endl;
	else
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}
