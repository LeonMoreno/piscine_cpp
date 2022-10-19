#ifndef WATER_HPP_
#define WATER_HPP_

#include <iostream>
#include "AMateria.hpp"

class Water : public AMateria {
	public:
		Water(void);
		Water(Water const & src);
		~Water(void);
		Water & operator=(Water const & a);

		Water* clone() const;
		void use(ICharacter& target);
};

#endif
