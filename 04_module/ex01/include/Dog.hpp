#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain	*bra;
	public:
		Dog( void );
		Dog( Dog const & src);
		~Dog( void );
		Dog & operator=( Dog const & d);

		// Functions member
		void	makeSound( void );
		void	newBrain( void );
};

#endif
