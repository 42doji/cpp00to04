#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
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

	const Animal* animals[4] = {new Dog(), new Cat(), new Dog(), new Cat()};
	for (int i = 0; i < 4; i++)
	{
		animals[i]->makeSound();
		delete animals[i];
	}
	return 0;
}