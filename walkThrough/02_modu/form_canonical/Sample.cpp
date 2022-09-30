#include "Sample.hpp"

Sample::Sample( void ) : _n(0) {
	std::cout << "CONSTRUC DEFAULT" << std::endl;
	return ;
}

Sample::Sample( int num ) : _n(num) {
	std::cout << "CONSTRUC INICIALIZADOR" << std::endl;
	return ;

}

Sample::Sample( Sample const & src ) {
	std::cout << "CONSTRUC COPY" << std::endl;
	*this = src;
	return ;
}

Sample & Sample::operator=( Sample const & rhs ) {
	std::cout << "CONSTRUC ASIGNACION" << std::endl;
	this->_n = rhs.getVar();
	return (*this);
}

Sample::~Sample( void ) {
	std::cout << "DESCTRUCTOR\n";
}

int	Sample::getVar( void ) const {
	return (this->_n);
}


