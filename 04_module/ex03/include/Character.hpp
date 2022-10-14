#ifndef CHARACTER_HPP_
# define CHARACTER_HPP_

#include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		std::string	_name;
		AMateria	*_slot[4];
	public:
		Character(void);
		Character(Character const &src);
		Character & operator=(Character const &c);
		~Character(void);
		Character(std::string name);

		// Metodos
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

};

#endif
