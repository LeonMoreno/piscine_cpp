#include <Brain.hpp>

Brain::Brain ( void ) {
	std::string str1 ("idea: ");
	std::string str2;

	std::cout << "Brain: Defult Constructor " << this << std::endl;
	for (int i = 0; i < 100; i++) {
		str2 = std::to_string(i);
		this->_ideas[i] = str1 + str2;
	}
}

Brain::Brain ( Brain const & src ) {
	std::cout << "Brain: Copy Constructor " << this << std::endl;

	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
}

Brain::~Brain( void ) {
	std::cout << "Brain: Destructor " << this << std::endl;
}

Brain & Brain::operator=( Brain const & a ) {
	std::cout << "Brain: Assignation Constructor " << this << std::endl;

	for (int i = 0; i < 100; i++)
		this->_ideas[i] = a._ideas[i];
	return (*this);
}

std::string	Brain::getIdeas( void ) {
	static int i = -1;
	i++;
	return (this->_ideas[i]);
}

