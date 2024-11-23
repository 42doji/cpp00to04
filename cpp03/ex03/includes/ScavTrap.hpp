#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "../includes/ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	private:
		ScavTrap();

	public:
		ScavTrap(std::string name);
		~ScavTrap();

		void	attack(std::string const &target);
		void	guardGate();
};

#endif