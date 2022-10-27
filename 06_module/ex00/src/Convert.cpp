#include "Convert.hpp"

/*********************************/
/*	Constructors and Destructors */
/*********************************/

Convert::Convert() : _argu("arguless") {
	// ftPut("Convert Default Constructor ");
}

Convert::Convert(std::string argu) : _argu(argu) {
	// ftPut("INiT Constructor ");

}

Convert::Convert(Convert const & src) : _argu(src._argu) {
	ftPut("Convert copy Constructor ");
}

Convert & Convert::operator=(Convert const & rhs) {
	ftPut("Convert asignation Constructor ");
	this->_argu = rhs._argu;
	return (*this);
}

Convert::~Convert() {
	// ftPut("Convert DesTRUCTOR ");
}

/********************************/
/* 		Setters and Getters		*/
/********************************/
std::string	Convert::getArgu(void) {
	return (this->_argu);
}

/********************************/
/*		Members functions		*/
/*		And Cast Operators		*/
/********************************/

Convert::operator char() {
	int	c;

	c = 0;
	if (this->getArgu().length() == 1)
	{
		try {
			c = std::stoi(this->getArgu());
		}
		catch(std::invalid_argument & sia) {
			c = (this->getArgu()[0]);
			if (std::isprint(c))
				std::cout << "char : " << static_cast<char>(c) << std::endl;
			else
				std::cout << "char : " << "Non displayable" << std::endl;
			return (c);
		}
	}
	else
	{
		try {
			c = std::stoi(this->getArgu());
		}
		catch (std::invalid_argument & sia) {
			std::cout << "char : " << "no conversion" << std::endl;
			return (c);
		}
		catch (std::out_of_range & sur) {
			std::cout << "char : " << "out of range" << std::endl;
			return (c);
		}
	}
	if (std::isprint(c))
		std::cout << "char : " << static_cast<char>(c) << std::endl;
	else
			std::cout << "char : " << "imposible" << std::endl;
	return (c);
}

Convert::operator int() {
	int	n;

	n = 0;
	try {
		n = std::stoi(this->getArgu());
	}
	catch (std::invalid_argument & sia) {
		std::cout << "int  : " << "no conversion" << std::endl;
	}
	if (n)
		std::cout << "int  : " << n << std::endl;
	return (static_cast<int>(n));
}


/********************************/
/*		Utils					*/
/********************************/
void	ftPut(std::string s) {
	std::cout << s << std::endl;
}
