#include <iostream>

class Parent					{};
class Child1 : public Parent 	{};
class Child2 : public Parent	{};

//************************************************//


int	main(void) {
	Child1 a; // Valor referencia

	Parent * b = &a;				// Implicit 'reinterpretacion'cast
	Parent * c = (Parent *) &a;		// Explitic 'reinterpretacion'cast

	Parent	* d = &a;				// Implicit upcast --> ok
	Child1	* e = d;				// Implicit downCast -- Hell no !

	return (0);
}
