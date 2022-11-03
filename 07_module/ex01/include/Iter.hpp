#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void	iter(T *array, int len, void (*f)(T &))
{
	for (int i = 0; i < len; i++) {
		(*f)(array[i]);
	}
}

template <typename T>
void	ftPrint(T argu)
{
	std::cout << argu << std::endl;
}

template <typename T>
void	ftIncrement(T argu)
{
	argu += 10;
}

#endif
