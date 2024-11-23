#ifndef MATERIALSOURCE_HPP
#define MATERIALSOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *	_materias[4];

	public:
		MateriaSource( void );
		~MateriaSource( void );

		MateriaSource( MateriaSource const & src );
		MateriaSource &	operator=( MateriaSource const & rhs );

		AMateria *	getMateria( std::string const & type );
		AMateria *	createMateria( std::string const & type );
		void		learnMateria( AMateria * m );
};

#endif