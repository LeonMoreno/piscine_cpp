#ifndef AANIMAL_HPP_
#define AANIMAL_HPP_

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
		std::string	getType( void ) const;
		void		setType( std::string type );

		// Functions members - en este caso metodo
		virtual void	makeSound( void ) const = 0;
};

#endif
