#ifndef CAT_HPP_
#define CAT_HPP_

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat( void );
		Cat( Cat const & src );
		~Cat( void );
		Cat & operator=(Cat const & a );

		//Getters & Setters

		// Functions members - en este caso metodo
		void	makeSound( void );

};

#endif
