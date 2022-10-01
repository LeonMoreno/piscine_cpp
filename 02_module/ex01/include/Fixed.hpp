#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
#include <string>

class Fixed {

	private:
			int					_fixPointNum;
			static const int	_fracBits;

	public:
			Fixed( void ); // Contructor Default CANONICAL
			Fixed( Fixed const & src); // Contructor copy CANONICAL
			Fixed & operator=( Fixed const & rhs); // // Contructor por Asignation CANONICAL
			Fixed( int const num );
			Fixed( float const num );
			~Fixed( void ); // Destructor CANONICAL

			int		getRawBits( void ) const;
			void	setRawBits( int const raw );
			float	ft_pow(int base, int expo) const;
			float	toFloat( void ) const;
			int	toInt( void ) const;
};

std::ostream & operator<<( std::ostream & o, Fixed const &f );

#endif
