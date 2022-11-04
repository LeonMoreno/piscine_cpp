#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
private:
	T	*_arr;
	int	_i;
public:
	Array();
	Array(unsigned int idx);
	Array(Array const & src);
	Array<T> & operator=(Array const & rhs);
	~Array(void);

/* 		Setters and Getters		*/
	void			getArray(void) const;
	unsigned int	size(void) const;

/* Operator OVerLoad */
	T & operator[](std::size_t idx);
};

# include "Array.tpp"

#endif
