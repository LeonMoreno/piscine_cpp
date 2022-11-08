#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <array>
#include <list>
#include <vector>


template <typename T>
const typename T::iterator	EasyFind(T  &arg, int f) {

	typename T::iterator	it;
	it = std::find(arg.begin(), arg.end(), f);
	if (it == arg.end())
		throw std::out_of_range("number not found");
	return (it);
}

#endif
