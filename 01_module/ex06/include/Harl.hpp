#ifndef __HARL_HPP__
# define __HARL_HPP__

#include <iostream>

class Harl {
	private:
		void 	_debug( void );
		void	_info( void );
		void	_warning( void );
		void	_error( void );
	public:
		Harl	( void );
		~Harl	( void );
		void	complain( std::string level);
};

int	strToint( std::string s);

#endif
