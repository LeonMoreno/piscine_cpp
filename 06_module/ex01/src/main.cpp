#include "Data.hpp"

uintptr_t	serialize(Data* ptr) {
	uintptr_t	r;

	r = reinterpret_cast<uintptr_t>(ptr);
	return (r);
}

Data*	deserialize(uintptr_t raw) {
	Data	*ptr;

	ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}

int	main(void)
{
	std::cout << "\n\t ============================== " << std::endl;
	std::cout <<  "\t\t Constructor  "  << std::endl;

	uintptr_t	r;
	Data		v("hola");
	Data		*ptr;

	std::cout << "\n\t ============================== " << std::endl;
	std::cout <<  "\t\t Test  "  << std::endl;

	std::cout << "addr v   = " << &v << std::endl;
	r = serialize(&v);
	std::cout << "Valor r = " << r << std::endl;
	ptr = deserialize(r);
	std::cout << "addr ptr = " << ptr << std::endl;

	std::cout << "\n\t ============================== " << std::endl;
	std::cout <<  "\t\t Destructor  "  << std::endl;

}
