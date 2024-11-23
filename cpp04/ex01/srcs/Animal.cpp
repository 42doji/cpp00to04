#include "../includes/Animal.hpp"

Animal::Animal( void ) : _type("Animal")
{
	std::cout << "Animal is born!" << std::endl;
}

Animal::Animal( std::string type ) : _type(type)
{
	std::cout << "Animal " << _type << " constructor called." << std::endl;
}

Animal::~Animal( void )
{
	std::cout << "Animal " << _type << " destructor called." << std::endl;
}

Animal::Animal( Animal const & src )
{
	std::cout << "Animal " << _type << " copy constructor called." << std::endl;
	*this = src;
}

Animal& Animal::operator=( Animal const & rhs )
{
	std::cout << "Animal " << _type << " assignation operator called." << std::endl;
	if (this != &rhs)
		_type = rhs._type;
	return *this;
}

void	Animal::makeSound( void ) const
{
	std::cout << "Animal " << _type << " makes a sound." << std::endl;
}


std::string	Animal::getType( void ) const
{
	return _type;
}
