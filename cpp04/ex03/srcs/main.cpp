#include <iostream>
#include "../includes/Character.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Ice.hpp"
#include "../includes/MateriaSource.hpp"
#include "../includes/IMateriaSource.hpp"
#include "../includes/ICharacter.hpp"

int main()
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());

	ICharacter *me = new Character("me");
	AMateria *tmp;
	AMateria *tmp2;

	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp2 = src->createMateria("ice");
	me->equip(tmp2);

	ICharacter *doji = new Character("doji");

	me->use(0, *doji);
	me->use(1, *doji);

	delete doji;
	delete me;
	delete src;

	return 0;
}