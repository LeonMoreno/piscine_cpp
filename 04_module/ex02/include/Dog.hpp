#ifndef DOG_HPP_
#define DOG_HPP_

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain	*_brain;
	public:
		Dog( void );
		Dog( Dog const & src );
		~Dog( void );
		Dog & operator=(Dog const & a );

		//Getters & Setters


		// Functions members - en este caso metodo
		void	makeSound( void );
		void	setIdea(void);

};

#endif
