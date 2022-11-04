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
				std::cout << "char	: " << static_cast<char>(c) << std::endl;
			else
				std::cout << "char	: " << "Non displayable" << std::endl;
			return (c);
		}
	}
	else
	{
		try {
			c = std::stoi(this->getArgu());
		}
		catch (std::invalid_argument & sia) {
			std::cout << "char	: " << "no conversion" << std::endl;
			return (c);
		}
		catch (std::out_of_range & sur) {
			std::cout << "char	: " << "out of range" << std::endl;
			return (c);
		}
	}
	if (std::isprint(c))
		std::cout << "char	: " << static_cast<char>(c) << std::endl;
	else
			std::cout << "char	: " << "imposible" << std::endl;
	return (c);
}

Convert::operator int() {
	int	n;

	n = 0;
	try {
		n = std::stoi(this->getArgu());
	}
	catch (std::invalid_argument & sia) {
		std::cout << "int	: " << "no conversion" << std::endl;
		return (n);
	}
	catch (std::out_of_range & sia) {
		std::cout << "int	: " << "out or range" << std::endl;
		return (n);
	}
	std::cout << "int	: " << n << std::endl;
	return (static_cast<int>(n));
}

Convert::operator float() {
	float	n;

	std::cout << std::fixed;
	std::cout.precision(1);
	n = 0;
	try {
		n = std::stof(this->getArgu());
	}
	catch (std::invalid_argument & sia) {
		std::cout << "float	: " << "no conversion" << std::endl;
		return (n);
	}
	catch (std::out_of_range & sia) {
		std::cout << "float	: " << "out or range" << std::endl;
		return (n);
	}
	std::cout << "float	: " << n << "f" << std::endl;
	return (static_cast<float>(n));
}

Convert::operator double() {
	double	n;

	std::cout << std::fixed;
	std::cout.precision(1);
	n = 0;
	try {
		n = std::stod(this->getArgu());
	}
	catch (std::invalid_argument & sia) {
		std::cout << "double	: " << "no conversion" << std::endl;
		return (n);
	}
	catch (std::out_of_range & sia) {
		std::cout << "double	: " << "out or range" << std::endl;
	}
	std::cout << "double	: " << n << std::endl;
	return (static_cast<float>(n));
}


/********************************/
/*		Utils					*/
/********************************/
void	ftPut(std::string s) {
	std::cout << s << std::endl;
}
