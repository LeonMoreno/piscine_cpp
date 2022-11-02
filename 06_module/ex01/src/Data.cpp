#include "Data.hpp"
/********************************/
/*		Utils					*/
/********************************/
void	ftPut(std::string s) {
	std::cout << s << std::endl;
}

/*********************************/
/*	Constructors and Destructors */
/*********************************/

Data::Data() : _value("valueless"){
	ftPut("Data Default Constructor ");
}

Data::Data(std::string value) : _value(value) {
	ftPut("INiT Constructor ");
}

Data::Data(Data const & src) {
	ftPut("Data copy Constructor ");
	this->_value = src._value;
}

Data & Data::operator=(Data const & rhs) {
	ftPut("Data asignation Constructor ");
	this->_value = rhs._value;
	return (*this);
}

Data::~Data() {
	ftPut("Data DesTRUCTOR ");
}

/********************************/
/* 		Setters and Getters		*/
/********************************/
std::string	Data::getValue(void) {
	return (this->_value);
}

void	Data::setValue(std::string value) {
	this->_value = value;
}

/********************************/
/*		Members functions		*/
/********************************/

