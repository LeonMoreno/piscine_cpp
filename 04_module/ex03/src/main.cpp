#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "colours.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Water.hpp"

int	main(void)
{
	std::cout << "\n\t ============================== " << std::endl;
	std::cout << RED "\t\t constructors " RESET << std::endl;

	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Water());

	ICharacter *me = new Character("me");


	AMateria *tmp;

	//tmp = src->createMateria("ice");
	me->equip(src->createMateria("ice")); //0
	tmp = src->createMateria("cure");
	me->equip(tmp); //1
	// tmp = src->createMateria("cure");
	// tmp = src->createMateria("water");
	// me->equip(tmp);  // slot 2

	ICharacter* bob = new Character("bob");

	std::cout << "\n\t ============================== " << std::endl;
	std::cout << RED "\t\t TEST " RESET << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);
	// me->use(2, *bob);


	// me->equip(tmp); //2

	// me->equip(tmp); //3
	// me->equip(tmp); //4 NO
	// me->equip(tmp); //5 NO EXISTE
	// me->equip(tmp);

	// me->use(5, *me);
	// me->use(0, *me);
	// me->use(1, *me);
	// me->unequip(2);
	// me->unequip(3);

	// me->equip(tmp);


	std::cout << "\n\t ============================== " << std::endl;
	std::cout << RED " \t\tDESTRUCTORS " RESET << std::endl;

	delete bob;
	delete me;
	delete src;


	return (0);
}
