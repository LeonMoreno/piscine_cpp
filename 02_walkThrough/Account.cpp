#include "Acc.hpp"

Acc::Acc(int x) {
	int static Index = 0;

 	std::cout << "Index:" << Index << ";" << "amount:" << x \
	<< ";" << "created" << std::endl;
	Index++;
	return ;
 }

 Acc::~Acc() {
 	std::cout << "Inicio DEstructor" << std::endl;
	return ;
 }

int	main(void) {

//	Acc a;
	typedef std::vector<Acc::t>		acc_t;

	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) );

	acc_t td(z, z + sizeof(z) / sizeof(int));

	std::time_t result = std::time(nullptr);
    std::cout << result << " seconds since the Epoch\n";

	std::cout << "amounts_0 = " << amounts[0] << std::endl;

	return (0);

}
