#include "../includes/Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
	std::cout << _type << " Constructor called." << std::endl;
}

Cat::~Cat( void )
{
	std::cout << _type << " Destructor called." << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow meow!" << std::endl;
}