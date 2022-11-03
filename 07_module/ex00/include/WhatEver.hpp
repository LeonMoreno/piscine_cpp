#ifndef WHATEVER_HPP
#define WHATEVER_HPP

# include <iostream>

/****************************************/
/*		subject Members functions		*/
/****************************************/

template <typename T>
void	swap(T & x, T & y) {
	T	tmp;

	tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
T	min(T const & x, T const & y) {
	if (x < y)
		return (x);
	else if (x == y)
		return (y);
	else
		return (y);
}

template <typename T>
T	max(T const & x, T const & y) {
	if (x > y)
		return (x);
	else if (x == y)
		return (y);
	else
		return (y);
}

/****************************************/
/*		others functions				*/
/****************************************/
template <typename T>
void	ft_putvar(T x, T y) {
	std::cout << "x = " << x << " y = " << y << std::endl;
}


#endif
