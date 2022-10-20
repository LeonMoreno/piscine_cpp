#include <Cat.hpp>

Cat::Cat ( void ) {
	this->_type = "Cat";
	std::cout << "Cat: Defult Constructor " << this << std::endl;
	this->_brain = new Brain();
}

Cat::Cat ( Cat const & src ) : Animal(src) {
	std::cout << "Cat: Copy Constructor " << this << std::endl;
	this->_brain = new Brain(*(src._brain));
}

Cat::~Cat( void ) {
	delete this->_brain;
	std::cout << "Cat: Destructor " << this << std::endl;
}

Cat & Cat::operator=( Cat const & a ) {
	std::cout << "Cat: Assignation Constructor " << this << std::endl;
	delete this->_brain;
	this->_brain = new Brain(*(a._brain));
	this->_type = a._type;
	return (*this);
}

void	Cat::makeSound( void ) const {
	std::cout << "Cat: Miauuu Miauuuuu" << std::endl;
}

void	Cat::setIdea(void) {
	std::cout << this->_brain->getIdeas() << std::endl;
}

void	Cat::getBrain(void) {
	std::cout << "Brain= " << this->_brain << std::endl;
}
