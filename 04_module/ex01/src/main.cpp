#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"


void	ftSound( Animal *ptr)
{
	std::cout << ptr->getType() << ": " ;
	ptr->makeSound();
}

void	ftSoundW( WrongAnimal *ptr)
{
	std::cout << ptr->getType() << ": " ;
	ptr->makeSound();
}

int	main( void )
{
	std::cout << "\n\t ============================== " << std::endl;
	std::cout << RED "\t\t Constructor " RESET << std::endl;

	const Animal*	j;

	j = new Dog();


	
	std::cout << "\n\t ============================== " << std::endl;
	std::cout << RED "\t\t Other TEST " RESET << std::endl;


	std::cout << "\t ============================== " << std::endl;
	std::cout << RED " \t\tDESTRUCTORS " RESET << std::endl;

	delete j;
	return (0);
}
