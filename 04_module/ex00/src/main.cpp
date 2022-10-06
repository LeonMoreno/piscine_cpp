#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void	ftSound( Animal *ptr)
{
	std::cout << ptr->getType() << ": " ;
	ptr->makeSound();
}


int	main( void )
{
	Animal *a = new Animal();
	Animal *p = new Dog();
	Animal *c = new Cat();

	// std::cout << "Dog = " << p->getType() << std::endl;
	// std::cout << "Anm = " << a->getType() << std::endl;
	// std::cout << "cat = " << c->getType() << std::endl;

	// a->makeSound();
	// p->makeSound();
	// c->makeSound();

	for (int i = 0; i < 16; i++) {
		std::cout << i << " ";
		if (i % 2 == 0)
			ftSound(p);
		else if (i %  3 == 0)
			ftSound(c);
		else
			ftSound(a);
	}

	delete a;
	delete p;
	delete c;
	return (0);
}
