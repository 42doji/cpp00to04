#include "../includes/Dog.hpp"

Dog::Dog( void ) : Animal("Dog")
{
	std::cout << _type << " Constructor called." << std::endl;
}

Dog::~Dog( void )
{
	std::cout << _type << " Destructor called." << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woof woof!" << std::endl;
}
