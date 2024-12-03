#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sstream>

class Zombie
{
	private:
		std::string	_name;

	public:
		Zombie() : _name("") {}
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void) const;
		void	setName(std::string name);
		Zombie	*newZombie(std::string name);
};

Zombie	*ZombieHorde(int N, std::string name);

#endif