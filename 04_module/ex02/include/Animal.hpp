#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <iostream>
#include "colours.hpp"

class AAnimal {
	protected:
		std::string	_type;
	public:
		AAnimal( void );
		AAnimal( AAnimal const & src );
		virtual ~AAnimal( void );
		AAnimal & operator=(AAnimal const & a );

		//Getters & Setters
		std::string	getType( void );
		void		setType( std::string type );

		// Functions members - en este caso metodo
		virtual void	makeSound( void ) = 0;
};

#endif
