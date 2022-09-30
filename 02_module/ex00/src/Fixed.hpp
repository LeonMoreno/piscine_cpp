#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

	private:
		int					_fixPoint;
		static int const	_fracBits;

	public:
		Fixed( void ); // Default construct
		Fixed( Fixed const &src); // Copy construct
		Fixed & operator=( Fixed const &rhs); // Assignment construct operator overload
		~Fixed( void ); // Destructor

		int		getRawBits( void ) const;
		void	setRawBits( int const raw);
};

#endif
