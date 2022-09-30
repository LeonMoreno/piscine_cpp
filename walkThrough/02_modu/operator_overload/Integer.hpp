#ifndef __INTEGER_HPP__
#define __INTEGER_HPP__

#include <iostream>

class Integer
{
private:
	int	_n;
public:
	Integer(int const n);
	~Integer( void );
	int	getValue( void ) const;
	Integer & operator=( Integer const & rhs);
	Integer operator+( Integer const & rhs) const;
};

// std::ostream & operator<<( std::ostream & o, Integer const & rhs );


#endif
