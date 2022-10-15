#ifndef CHARACTER_HPP_
# define CHARACTER_HPP_

#include "ICharacter.hpp"
#define MAX_INVENTORY 4

class Character : public ICharacter {
	private:
		std::string		_name;
		int				_nbTotal;
		AMateria		*_slot[MAX_INVENTORY];

	public:
		Character(void);
		Character(Character const &src);
		Character & operator=(Character const &c);
		~Character(void);
		Character(std::string name);

		// Getters and Setters
		std::string const & getName() const;

		// Funcion miembros y Metodos
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

		// Funcion miembros
		bool	checkAMateria(AMateria *m);

};

#endif
