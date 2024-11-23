#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	const AAnimal* meta = new AAnimal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	const WrongAnimal* k = new WrongCat();

	std::cout << std::endl;
	meta->makeSound();
	std::cout << std::endl;
	i->makeSound();
	std::cout << std::endl;
	j->makeSound();
	std::cout << std::endl;
	k->makeSound();
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	delete k;

	Dog doggy;
	{
		Dog doggy2 = doggy;
	}

	const AAnimal* animals[4] = {new Dog(), new Cat(), new Dog(), new Cat()};
	for (int i = 0; i < 4; i++)
	{
		animals[i]->makeSound();
		delete animals[i];
	}
	return 0;
}