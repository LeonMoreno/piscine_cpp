#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "colours.hpp"
#include "MateriaSource.hpp"

int	main(void)
{
	std::cout << "\n\t ============================== " << std::endl;
	std::cout << RED "\t\t constructors " RESET << std::endl;

	Ice m;
	Cure c;
	AMateria *t;

	std::cout << "type =" << m.getType() << std::endl;
	std::cout << "type =" << c.getType() << std::endl;

	t = c.clone();

	std::cout << "type T = " << t->getType() << std::endl;

	std::cout << "\n\t ============================== " << std::endl;
	std::cout << RED " \t\tENSAYOSSS " RESET << std::endl;

	IMateriaSource *ptr;

	ptr = new MateriaSource();

	ptr->learnMateria(new Ice());
	ptr->learnMateria(new Cure());
	AMateria *pt2 = ptr->createMateria("ice");
	std::cout << "Type =" << pt2->getType() << std::endl;
	pt2 = ptr->createMateria("cure");
	std::cout << "Type =" << pt2->getType() << std::endl;




	std::cout << "\n\t ============================== " << std::endl;
	std::cout << RED " \t\tDESTRUCTORS " RESET << std::endl;

	delete ptr;

	return (0);
}
