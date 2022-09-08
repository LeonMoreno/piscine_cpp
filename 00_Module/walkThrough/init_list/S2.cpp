#include "S2.hpp"

S2::S2(char p1, int p2, float p3) : c(p1), n(p2), f(p3) {

	std::cout << "INIT CONSTRUCTOR" << std::endl;
	// this->c = p1;
	// this->n = p2;
	// this->f = p3;

	std::cout << "this->c " << this->c << std::endl;
	std::cout << "this->n " << this->n << std::endl;
	std::cout << "this->f " << this->f << std::endl;
	return ;
}

S2::~S2(void)
{
	std::cout << "INIT DESTRUCTOR" << std::endl;
	return ;
}
