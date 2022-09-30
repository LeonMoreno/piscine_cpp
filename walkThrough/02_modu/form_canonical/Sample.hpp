#ifndef SAMPLE_HPP
# define SAMPLE_HPP

#include <iostream>

class Sample {
	private:
		int	_n;

	public:
		Sample( void ); // Constructor Defautl - CANONIC
		Sample( int num );
		Sample( Sample const & src); // Const. por copy - CANONI
		~Sample( void );

		Sample & operator=(Sample const & rhs);
		int		getVar( void ) const ;
};

#endif
