#ifndef WRONGWrongCAT_HPP_
#define WRONGWrongCAT_HPP_

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat( void );
		WrongCat( WrongCat const & src );
		~WrongCat( void );
		WrongCat & operator=(WrongCat const & a );

		//Getters & Setters

		// Functions members - en este caso metodo
		void	makeSound( void );

};

#endif
