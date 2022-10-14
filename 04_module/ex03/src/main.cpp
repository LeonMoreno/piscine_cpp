#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "colours.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int	main(void)
{
	std::cout << "\n\t ============================== " << std::endl;
	std::cout << RED "\t\t constructors " RESET << std::endl;

	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter *me = new Character("me");

	std::cout << "\n\t ============================== " << std::endl;
	std::cout << RED " \t\tENSAYOSSS " RESET << std::endl;

	AMateria *tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	me->use(5, *me);
	me->use(0, *me);
	me->use(1, *me);
	me->unequip(2);
	me->equip(tmp);






	std::cout << "\n\t ============================== " << std::endl;
	std::cout << RED " \t\tDESTRUCTORS " RESET << std::endl;

	delete src;
	delete me;

	return (0);
}
