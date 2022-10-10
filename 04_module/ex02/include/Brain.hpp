#ifndef BRAIN_HPP_
#define BRAIN_HPP_

#include <iostream>

class Brain {
	private:
		std::string	_ideas[100];
	public:
		Brain( void );
		Brain( Brain const & src );
		~Brain( void );
		Brain & operator=(Brain const & a );

		//Getters & Setters
		std::string	getIdeas( void );
};

#endif
