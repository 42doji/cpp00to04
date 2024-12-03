#include "../includes/Zombie.hpp"
#include <sstream>

Zombie	*ZombieHorde(int N, std::string name)
{
	Zombie	*zombies = new Zombie[N];
    std::stringstream ss;

	for (int i = 0; i < N; i++)
    {
        ss.str("");
        ss << i;
		zombies[i].setName(name + ss.str());
	}
	return (zombies);
}