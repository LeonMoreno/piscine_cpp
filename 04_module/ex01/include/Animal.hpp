#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <iostream>
#include "colours.hpp"

class Animal {
	protected:
		std::string	_type;
	public:
		Animal( void );
		Animal( Animal const & src );
		virtual ~Animal( void );
		Animal & operator=(Animal const & a );

		//Getters & Setters
		std::string	getType( void );
		void		setType( std::string type );

		// Functions members - en este caso metodo
		virtual void	makeSound( void );
};

#endif
