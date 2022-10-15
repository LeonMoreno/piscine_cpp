#include "AMateria.hpp"

//****** Constructors and Destructors*****//

AMateria::AMateria(void) {
	std::cout << "AMateria Default Constructor " << this << std::endl;
}

AMateria::AMateria(AMateria const & src) : type(src.type) {
	std::cout << "AMateria copy Constructor " << this << std::endl;
}
// While assigning a Materia to another, copying the type doesn’t make sense.
AMateria & AMateria::operator=(AMateria const & a) {
	std::cout << "AMateria asignation Constructor " << this << std::endl;
	this->type = a.getType();
	return (*this);
}

AMateria::~AMateria(void) {
	std::cout << "AMateria DesTRUCTOR " << this << std::endl;
}

//****** Getters and Setters*****//

std::string const & AMateria::getType() const {
	return(this->type);
}

//****** Funcion membre - Methods *****//

void	AMateria::use(ICharacter& target) {
	std::cout << "NADA ES AMateria " << target.getName() << std::endl;
}

// Un metodo puro no se puede implementar en la clase base
// AMateria* AMateria::clone() const {
// 	return (&this);
// }
