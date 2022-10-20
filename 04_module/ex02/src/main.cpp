/* Shallow Copy and Deep Copy in C++ */
// https://www.geeksforgeeks.org/shallow-copy-and-deep-copy-in-c/

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

void	ftSound( const AAnimal *ptr)
{
	std::cout << ptr->getType() << ": " ;
	ptr->makeSound();
}

void	ftSoundW( const WrongAnimal *ptr)
{
	std::cout << ptr->getType() << ": " ;
	ptr->makeSound();
}

int	main( void )
{

	/* std::cout << "\n\t ============================== " << std::endl;
	std::cout << RED "\t\t Test Shallow Copy and Deep Copy  " RESET << std::endl;

	Dog c;
	Dog copy(c);

	c.getBrain();
	copy.getBrain();

	std::cout << "type "<< c.getType() << std::endl;
	std::cout << "type "<< copy.getType() << std::endl; */

	std::cout << "\n\t ============================== " << std::endl;
	std::cout << RED "\t\t Constructor " RESET << std::endl;
	AAnimal	*d[100];

	for (int i = 0; i < 100; i++) {
		if (i % 2 == 0)
		{
			d[i] = new Dog();
			(( Dog *) d[i])->Dog::setIdea();
		}
		else
		{
			d[i] = new Cat();
			((Cat *) d[i])->Cat::setIdea();
		}

	}

	std::cout << "\t ============================== " << std::endl;
	std::cout << RED " \t\tDESTRUCTORS " RESET << std::endl;
	for (int i = 0; i < 100; i++)
		delete d[i];
	return (0);
}
