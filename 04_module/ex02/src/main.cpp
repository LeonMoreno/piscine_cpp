#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"



void	ftSound( AAnimal *ptr)
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
	// AAnimal l; // No se puede instanciar por q es una clase Abstracta

	Dog	*d[50];

	for (int i = 0; i < 50; i++) {
		if (i % 2 == 0)
		{
			d[i] = new Dog();
			(( Dog *) d[i])->Dog::setIdea();
		}
		else
		{
			d[i] = new Dog();
			((Cat *) d[i])->Cat::setIdea();
		}

	}

	std::cout << "\t ============================== " << std::endl;
	std::cout << RED " \t\tDESTRUCTORS " RESET << std::endl;
	for (int i = 0; i < 50; i++)
		delete d[i];

	return (0);
}
