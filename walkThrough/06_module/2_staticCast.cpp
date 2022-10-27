#include <iostream>

class Parent					{};
class Child1 : public Parent 	{};
class Child2 : public Parent	{};

class SinRelacion				{};

//************************************************//


int	main(void) {
	Child1 a; 						// Valor referencia
	Parent a2;

	Parent 	* b = &a;				// Implicit Upcast --> ok
	//Child1	* c = &a2;				// Implicit downCast -- Hell no !
	//Child1	* c1 = b;				// Implicit downCast -- Hell no !

	Child2	* d = static_cast<Child2 *>(b); // Explicit downCast -- OK but 🔥🔥🔥 !

	SinRelacion * e = static_cast<SinRelacion *>(&a); // Explicit conversion --> NO 🔥🔥

	return (0);
}
