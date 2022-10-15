#ifndef ICHARACTER_HPP_
#define ICHARACTER_HPP_

// #include "AMateria.hpp"
#include <iostream>

class AMateria;

class ICharacter
{
public:
	virtual ~ICharacter() {};

	// Methode pure = 0  // No se pueden implentar
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif
