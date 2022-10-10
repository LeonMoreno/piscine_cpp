#ifndef DOG_HPP_
#define DOG_HPP_

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog( void );
		Dog( Dog const & src );
		~Dog( void );
		Dog & operator=(Dog const & a );

		//Getters & Setters


		// Functions members - en este caso metodo
		void	makeSound( void );

};

#endif
