#ifndef WRONGANIMAL_HPP_
#define WRONGANIMAL_HPP_

#include <iostream>

class WrongAnimal {
	protected:
		std::string	_type;
	public:
		WrongAnimal( void );
		WrongAnimal( WrongAnimal const & src );
		virtual ~WrongAnimal( void );
		WrongAnimal & operator=(WrongAnimal const & a );

		//Getters & Setters
		std::string	getType( void ) const;
		void		setType( std::string type );

		// Functions members - en este caso metodo
		void	makeSound( void ) const;
};

#endif
