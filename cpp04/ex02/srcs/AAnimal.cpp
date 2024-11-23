#include "../includes/AAnimal.hpp"

AAnimal::AAnimal( void ) : _type("Animal")
{
	std::cout << "Animal is born!" << std::endl;
}

AAnimal::AAnimal( std::string type ) : _type(type)
{
	std::cout << "Animal " << _type << " constructor called." << std::endl;
}

AAnimal::~AAnimal( void )
{
	std::cout << "Animal " << _type << " destructor called." << std::endl;
}

AAnimal::AAnimal( AAnimal const & src )
{
	std::cout << "Animal " << _type << " copy constructor called." << std::endl;
	*this = src;
}

AAnimal& AAnimal::operator=( AAnimal const & rhs )
{
	std::cout << "Animal " << _type << " assignation operator called." << std::endl;
	if (this != &rhs)
		_type = rhs._type;
	return *this;
}

void	AAnimal::makeSound( void ) const
{
	std::cout << "Animal " << _type << " makes a sound." << std::endl;
}


std::string	AAnimal::getType( void ) const
{
	return _type;
}
