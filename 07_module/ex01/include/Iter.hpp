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
	std::cout << std::fixed;
	std::cout.precision(1);
	std::cout << argu << " ";
}

template <typename T>
void	ftIncrement(T argu)
{
	argu += 10;
}

template <typename T>
void	bubbleSort(T *arr, int len)
{
	for (int i = 0; i < (len - 1); i++)
		for (int j = 0; j < (len - i - 1); j++)
			if (arr[j] > arr[j + 1])
				std::swap(arr[j], arr[j + 1]);
}

#endif
