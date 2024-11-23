#include "../includes/WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{
	std::cout << _type << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat( void )
{
	std::cout << _type << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Meow Meow" << std::endl;
}
