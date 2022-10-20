/* Virtual funcion https://stackoverflow.com/questions/2391679/why-do-we-need-virtual-functions-in-c
// virtual destructor https://stackoverflow.com/questions/461203/when-to-use-virtual-destructors
// http://www.gotw.ca/publications/mill18.htm
*/

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"


void	ftSound( const Animal *ptr)
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
	std::cout << "\n\t ============================== " << std::endl;
	std::cout << RED "\t\t Constructor " RESET << std::endl;
	const Animal		*a = new Animal();
	const Animal		*d = new Dog();
	const Animal		*c0 = new Cat();
	const WrongAnimal	*w = new WrongAnimal();
	const WrongCat	*c1 = new WrongCat();

	std::cout << "\n\t ============================== " << std::endl;
	std::cout << RED " \t\tTest subject " RESET << std::endl;
	std::cout << "Anm = " << a->getType() << std::endl;
	std::cout << "Anm = " << d->getType() << std::endl;
	std::cout << "Anm = " << c0->getType() << std::endl;

	a->makeSound();
	d->makeSound();
	c0->makeSound();

	std::cout << "\n\t ============================== " << std::endl;
	std::cout << RED "\t\t Other TEST " RESET << std::endl;


	for (int i = 0; i < 16; i++) {
		std::cout << i << " ";
		if (i % 2 == 0)
			ftSound(d);
		else if (i %  3 == 0)
			ftSound(c0);
		else
			ftSound(a);
	}
	std::cout << " \t============================== " << std::endl;
	std::cout << RED "\t\t Wrong TEST " RESET << std::endl;
	for (int i = 0; i < 5; i++) {
		std::cout << i << " ";
		ftSoundW(w);
		ftSoundW(c1);
	}



	std::cout << "\t ============================== " << std::endl;
	std::cout << RED " \t\tDESTRUCTORS " RESET << std::endl;


	delete a;
	delete d;
	delete c0;
	delete w;
	delete c1;
	return (0);
}
