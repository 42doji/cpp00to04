#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
	protected:
		std::string _type;

	public:
		AAnimal( void );
		AAnimal( std::string type );
		virtual	~AAnimal( void );

		AAnimal( AAnimal const & src );
		AAnimal& operator=( AAnimal const & rhs );

		virtual void	makeSound( void ) const;
		std::string		getType( void ) const;
};

#endif