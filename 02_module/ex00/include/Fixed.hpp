#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

	private:
		int					_fixPoint;
		static int const	_fracBits;

	public:
		Fixed( void );
		Fixed( Fixed & const src);
		Fixed & operator=( Fixed & const src);
		~Fixed( void );

		int		getRawbits( void ) const;
		void	setRawBits( int const raw);
};

#endif
