#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat( void );
		WrongCat( WrongCat const & src);
		~WrongCat( void );
		WrongCat & operator=( WrongCat const & d);

		// Functions member
		void	makeSound( void );
};

#endif
