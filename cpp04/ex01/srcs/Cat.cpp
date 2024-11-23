#include "../includes/Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
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

Cat::~Cat( void )
{
	std::cout << _type << " Destructor called." << std::endl;
	delete _brain;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow meow!" << std::endl;
}

Cat::Cat( const Cat & src )
{
	*this = src;
}

Cat & Cat::operator=( const Cat & src )
{
	std::cout << "<Cat.cpp::operator=> called" << std::endl;
	if (this != &src)
	{
		_type = src._type;
		delete _brain;
		_brain = new Brain(*src._brain);
	}
	return *this;
}