#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class AMateria {
	protected:
		std::string	type;

	public:
		AMateria(void);
		AMateria(AMateria const & src);
		~AMateria(void);
		AMateria & operator=(AMateria const & a);

		std::string	const & getType() const;
		virtual AMateria* clone() const = 0;

		//virtual void use(ICharacter& target);
};


#endif
