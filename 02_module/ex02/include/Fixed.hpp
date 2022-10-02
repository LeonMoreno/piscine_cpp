#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

	private:
		int					_fixPointNum;
		static const int	_fractBits;

	public:
		/* Constructor and Destructor */
		Fixed( void ); // const Default CANONICAL
		Fixed( Fixed const & src); // const COPY CANONICAL
		~Fixed( void ); // CANONICAL
		Fixed( int const num );
		Fixed( float const num );

		/* Basic Operators */
		Fixed 	& operator=( Fixed const & f); // const asignacion CANONICAL

		/* Comparison operators */
		bool	operator>( Fixed const &f) const;
		bool	operator<( Fixed const &f) const;
		bool	operator>=( Fixed const &f) const;
		bool	operator<=( Fixed const &f) const;
		bool	operator==( Fixed const &f) const;
		bool	operator!=( Fixed const &f) const;

		/* arithmetic operators */
		Fixed	operator+( Fixed const &f) const;
		Fixed	operator-( Fixed const &f) const;
		Fixed	operator*( Fixed const &f) const;
		Fixed	operator/( Fixed const &f) const;

		/* increment/decrement operators */
		Fixed	operator++();
		Fixed 	operator++(int);
		Fixed	operator--();
		Fixed 	operator--(int);

		/* special  functions */
		static Fixed &	min(Fixed & p1, Fixed & p2);
		static Fixed const &	min(Fixed const & p1, Fixed const & p2);
		static Fixed &	max(Fixed & p1, Fixed & p2);
		static Fixed const &	max(Fixed const & p1, Fixed const & p2);

		/* Get and SET */
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		/* To int and To FLoat */
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & f);

#endif
