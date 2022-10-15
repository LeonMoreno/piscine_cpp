// concepto de nullptr
// https://stackoverflow.com/questions/1282295/what-exactly-is-nullptr

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(void) :
	_name("nameless"),
	_nbTotal (0) {
	std::cout << "Character Default Constructor " << this << std::endl;
	for (int i = 0; i < MAX_INVENTORY; i++)
		this->_slot[i] = NULL;
}

Character::~Character(void) {
	std::cout << "Character DEStructor " << this << std::endl;
	// for (int i = 0; i < 4; i++)
	// {
	// 	if (this->_slot[i] != NULL)
	// 		delete this->_slot[i];
	// }
}

Character::Character(std::string name) :
	_name(name),
	_nbTotal(0) {
	std::cout << "Character INIT Constructor " << this << std::endl;
	for (int i = 0; i < 4; i++)
		this->_slot[i] = nullptr;
}

std::string const &	Character::getName() const {
	return (this->_name);
}

void	Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++)
	{
		if (this->_slot[i] == NULL)
		{
			this->_slot[i] = m;
			std::cout << "Materia type: " << m->getType() << " store in slot " << i << std::endl;
			return ;
		}
	}
	std::cout << "Slots FULL" << std::endl;
}

void	Character::unequip(int idx) {
	this->_slot[idx] = NULL;
	std::cout << "slot " << idx << " unequip" << std::endl;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx >= 4)
		std::cout << "Sorry don't slot" << std::endl;
	else
		this->_slot[idx]->use(target);
}

