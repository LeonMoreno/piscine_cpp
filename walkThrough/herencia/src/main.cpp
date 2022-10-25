#include "Animal.hpp"
#include "Dog.hpp"

int	main(void)
{
	std::cout << "\n\t ============================== " << std::endl;
	// std::cout <<  "\t\t Constructor "  << std::endl;

	// Animal ap; // Default costruct
	// Animal f("Fer", 4); // Init Construc
	// Animal dog(f); // Copy Construc
	// ap = dog; // Asignation construc

	// Dog lu("lu", 4);

	Animal *lu = new Dog("lu", 4);


	std::cout << "\n\t ============================== " << std::endl;
	std::cout <<  "\t\t Other TEST "  << std::endl;

	// std::cout << "name: " << dog.getName() << " legs: " << dog.getLegs() << std::endl;
	// std::cout << "name: " << ap.getName() << " legs: " << ap.getLegs() << std::endl;
	std::cout <<  "type: " << lu->getType() << " name: " << lu->getName() << " legs: " << lu->getLegs() << std::endl;

	// ap.doSound();
	lu->doSound();

	std::cout << "\t ============================== " << std::endl;
	std::cout <<  " \t\tDESTRUCTORS "  << std::endl;

	delete lu;
	return (0);
}
