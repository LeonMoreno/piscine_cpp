#include "Span.hpp"

/*********************************/
/*	Constructors and Destructors */
/*********************************/

Span::Span() :_nSize(0) {
	// std::cout << "Span Default Constructor " << this << std::endl;
	_vec.reserve(0);
	_counter = 0;
}

Span::Span(unsigned int size) : _nSize(size) {
	// std::cout << "Span INt Constructor " << this << std::endl;
	_vec.reserve(size);
	_counter = 0;
}

Span::Span(Span const & src) : _nSize(src._nSize) {
	// std::cout << "Span copy Constructor " << this << std::endl;
}

Span & Span::operator=(Span const & rhs) {
	std::cout << "Span asignation Constructor " << this << std::endl;
	this->_nSize = rhs._nSize;
	return (*this);
}

Span::~Span() {
	// std::cout << "Span DesTRUCTOR " << this << std::endl;
}

/********************************/
/* 		Setters and Getters		*/
/********************************/
int	Span::getCounter(void) {
	return (this->_counter);
}

int	Span::getSize(void) {
	return (this->_nSize);
}

std::vector<int> 	Span::getVec(void) const {
	return (this->_vec);
}

/********************************/
/*		Members functions		*/
/********************************/
void	Span::addNumber(int num) {
	if (this->_counter >= this->_nSize)
		throw std::out_of_range("Is Full");
	_vec.push_back(num);
	_counter++;
}

int	Span::longestSpan(void) {
	if (this->_counter == 0 || this->_counter == 1)
		throw std::length_error("length error");
	std::pair<std::vector<int>::iterator, std::vector<int>::iterator> res;

	res = std::minmax_element(this->_vec.begin(), this->_vec.end());
	return (*res.second - *res.first);
}

int	Span::shortestSpan(void) {
	if (this->_counter == 0 || this->_counter == 1)
		throw std::length_error("length error");
	int							shorte = 1000;
	int							temp = 0;
	std::vector<int>::iterator	it = this->_vec.begin();
	std::vector<int>::iterator	itf = this->_vec.end();

	for (it; it != itf; it++)
	{
		if (*it < *(it + 1))
		{
			temp = *(it + 1) - *it;
			if (temp != 0 && shorte > temp)
				shorte = temp;
		}

	}
	return (shorte);
}

void		Span::rangetSpan(std::vector<int>::iterator s, std::vector<int>::iterator f) {
	std::vector<int>::iterator t;

	for (t = s; t!= f; t++)
		addNumber(rand() % 10000);
}
