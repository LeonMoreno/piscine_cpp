#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
	protected:
		std::string	type;
	public:
		Animal( void );
		Animal( Animal const & src);
		virtual ~Animal( void );
		Animal & operator=(Animal const & a);

		// Getters & Setters
		std::string	getType( void );

		// member functions
		virtual void	makeSound( void );
};

#endif
