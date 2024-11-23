#ifndef IMateriasource_HPP
#define IMateriasource_HPP

#include "AMateria.hpp"

class IMateriaSource
{
	private:

	public:
		virtual ~IMateriaSource( void ) {}
		virtual void		learnMateria( AMateria * m ) = 0;
		virtual AMateria *	createMateria( std::string const & type ) = 0;
};

#endif