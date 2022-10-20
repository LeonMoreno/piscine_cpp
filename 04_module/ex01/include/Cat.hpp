#ifndef CAT_HPP_
#define CAT_HPP_

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain	*_brain;
	public:
		Cat( void );
		Cat( Cat const & src );
		~Cat( void );
		Cat & operator=(Cat const & a );

		//Getters & Setters

		// Functions members - en este caso metodo
		void	makeSound( void );
		void	setIdea(void);
		void	getBrain(void);

};

#endif
