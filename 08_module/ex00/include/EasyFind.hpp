#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>

template <typename T>
class EasyFind
{
private:
	EasyFind(void);
	/* data */
public:
	EasyFind(T arg, int f);
	~EasyFind(void);
};

#include "EasyFind.tpp"

#endif
