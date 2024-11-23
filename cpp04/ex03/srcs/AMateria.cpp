#include "../includes/AMateria.hpp"

AMateria::AMateria( void ) : _type("")
{
}

AMateria::AMateria( std::string const & type ) : _type(type)
{
	std::cout << "AMateria " << _type << " constructor called." << std::endl;
}

AMateria::~AMateria( void )
{
	std::cout << "AMateria " << _type << " destructor called." << std::endl;
}

AMateria::AMateria( AMateria const & src )
{
	*this = src;
}

std::string const & AMateria::getType( void ) const
{
	return _type;
}


AMateria*	AMateria::clone( void ) const
{
	return (AMateria*)this;
}

void	AMateria::use( ICharacter& target )
{
	std::cout << "AMateria " << _type << " used on " << target.getName() << std::endl;
}


