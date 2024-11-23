#include "../includes/Character.hpp"

Character::Character( std::string const & name ) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	std::cout << "Character " << _name << " created." << std::endl;
}

Character::Character( Character const & src ) : _name(src._name)
{
	*this = src;
	std::cout << "Character " << _name << " created." << std::endl;
}

Character::~Character( void )
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}

Character &	Character::operator=( Character const & rhs )
{
	if (this != &rhs)
	{
		_name = rhs._name;
		for (int i = 0; i < 4; i++)
		{
			_inventory[i] = rhs._inventory[i];
		}
	}
	return *this;
}

std::string const &	Character::getName( void ) const
{
	return _name;
}

void	Character::equip( AMateria* m )
{
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			std::cout << "AMateria " << m->getType() << " equipped." << std::endl;
			return ;
		}
	}
	std::cout << "Inventory full." << std::endl;
}

void	Character::unequip( int idx )
{
	if (idx < 0 || idx >= 4 || !_inventory[idx])
	{
		std::cout << "Invalid index." << std::endl;
		return ;
	}
	std::cout << "AMateria " << _inventory[idx]->getType() << " unequipped." << std::endl;
	_inventory[idx] = NULL;
}

void	Character::use( int idx, ICharacter& target )
{
	if (idx < 0 || idx >= 4 || !_inventory[idx])
	{
		std::cout << "Invalid index." << std::endl;
		return ;
	}
	_inventory[idx]->use(target);
}