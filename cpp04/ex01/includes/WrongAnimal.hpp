#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;

	public:
		WrongAnimal( void );
		WrongAnimal( std::string type );
		~WrongAnimal( void );

		WrongAnimal( WrongAnimal const & src );
		WrongAnimal& operator=( WrongAnimal const & rhs );

		void	makeSound( void ) const;
		std::string		getType( void ) const;
};

#endif