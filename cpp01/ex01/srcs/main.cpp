#include <iostream>
#include <string>
#include <sstream>
#include "Zombie.hpp"
#define N 4

int main( void )
{
	Zombie *zombiz = ZombieHorde(N, "zombi");

	for (size_t i = 0; i < N; i++)
	{
		std::stringstream ss;
		ss << i;
		zombiz[i].setName("zombi" + ss.str());
		zombiz[i].announce();
	}

	delete [] zombiz;
	return 0;
}