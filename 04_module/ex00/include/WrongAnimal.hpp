#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	protected:
		std::string	type;
	public:
		WrongAnimal( void );
		WrongAnimal( WrongAnimal const & src);
		~WrongAnimal( void );
		WrongAnimal & operator=(WrongAnimal const & a);

		// Getters & Setters
		std::string	getType( void ) const;

		// member functions
		void	makeSound( void ) const;
};

#endif
