#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "../includes/ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	private:
		FragTrap();

	public:
		FragTrap(std::string name);
		~FragTrap();

		void	highFives(void);
};

#endif