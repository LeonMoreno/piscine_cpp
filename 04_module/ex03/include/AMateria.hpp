#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>

class AMateria {
	protected:
		std::string	type;

	public:
		AMateria(void);
		AMateria(AMateria const & src);
		virtual ~AMateria(void);
		AMateria & operator=(AMateria const & a);

		// Getters & Setters
		std::string	const & getType() const;

		// Funcion membre - Methods
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};


#endif
