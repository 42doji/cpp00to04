#include "../includes/Dog.hpp"

Dog::Dog( void ) : Animal("Dog")
{
	std::cout << _type << " Constructor called." << std::endl;
	try
	{
		_brain = new Brain();
	}
	catch (std::bad_alloc &e)
	{
		std::cerr << "Failed to allocate memory for the brain." << e.what() << std::endl;
	}
}

Dog::~Dog( void )
{
	std::cout << _type << " Destructor called." << std::endl;
	delete _brain;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woof woof!" << std::endl;
}

Dog::Dog( const Dog & src )
{
	*this = src;
}

Dog & Dog::operator=( const Dog & src )
{
	std::cout << "<Dog.cpp::operator=> called" << std::endl;
	if (this != &src)
	{
		_type = src._type;
		delete _brain;
		_brain = new Brain(*src._brain);
	}
	return *this;
}