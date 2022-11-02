#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void) {
	int		n;

	 /* initialize random seed: */
	srand (time(NULL));

	/* generate secret number between 0 and 2: */
	n = (std::rand() % 3);
	std::cout << "Randon = " << n << std::endl;
	switch (n)
	{
	case 2 :
	{
		A *a = new A;
		return (static_cast<Base *>(a));
		break;
	}
	case 1 :
	{
		B *b = new B;
		return (static_cast<Base *>(b));
		break;
	}
	default:
	{
		C *c = new C;
		return (static_cast<Base *>(c));
		break;
	}
	}
}

void	identify(Base* p) {

	A *a;
	B *b;
	C *c;

	a = dynamic_cast<A *>(p);
	b = dynamic_cast<B *>(p);
	c = dynamic_cast<C *>(p);
	std::cout << "**** Type of the object pointed by ptr is: ";
	if (a)
		std::cout << "A class *****" << std::endl;
	if (b)
		std::cout << "B class *****" << std::endl;
	if (c)
		std::cout << "C class *****" << std::endl;
}

void	identify(Base& p)
{
	try {
		A &a = dynamic_cast<A &>(p);
		std::cout << "**** RType of the object Refer by ptr is: A class *****" << std::endl;
	}
	catch(std::bad_cast &sbc) {}
	try {
		B &b = dynamic_cast<B &>(p);
		std::cout << "**** RType of the object Refer by ptr is: B class *****" << std::endl;
	}
	catch(std::bad_cast &sbc) {}
	try {
		C &c = dynamic_cast<C &>(p);
		std::cout << "**** RType of the object Refer by ptr is: C class *****" << std::endl;
	}
	catch(std::bad_cast &sbc) {}
}

int	main(void)
{
	std::cout << "\n\t ============================== " << std::endl;
	std::cout <<  "\t\t Constructor && generate  "  << std::endl;
	Base *ptr1;
	Base *ptr2;

	ptr1 = generate();
	ptr2 = generate();

	std::cout << "\n\t ============================== " << std::endl;
	std::cout <<  "\t\t identify by address "  << std::endl;

	identify(ptr1);
	identify(ptr2);

	std::cout << "\n\t ============================== " << std::endl;
	std::cout <<  "\t\t identify by Reference "  << std::endl;
	identify(*ptr1);
	identify(*ptr2);

	std::cout << "\n\t ============================== " << std::endl;
	std::cout <<  "\t\t Destructor  "  << std::endl;
	delete ptr1;
}
