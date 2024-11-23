#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type("WrongAnimal")
{
	std::cout << _type << " Constructor called." << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : _type(type)
{
	std::cout << _type << " Constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << _type << " Destructor called." << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src )
{
	std::cout << _type << " Copy constructor called." << std::endl;
	*this = src;
}

WrongAnimal& WrongAnimal::operator=( WrongAnimal const & rhs )
{
	std::cout << _type << " Assignation operator called." << std::endl;
	if (this != &rhs)
		_type = rhs._type;
	return *this;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimal makes a sound." << std::endl;
}

std::string		WrongAnimal::getType( void ) const
{
	return _type;
}