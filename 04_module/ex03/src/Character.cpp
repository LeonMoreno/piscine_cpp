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
	for (int i = 0; i < 4; i++)
	{
		if (this->_slot[i] != NULL)
			delete this->_slot[i];
	}
}

Character::Character(std::string name) :
	_name(name),
	_nbTotal(0) {
	std::cout << "Character INIT Constructor " << this << std::endl;
	for (int i = 0; i < MAX_INVENTORY; i++)
		this->_slot[i] = NULL;
}

std::string const &	Character::getName() const {
	return (this->_name);
}

void	Character::equip(AMateria *m) {
	// std::cout << "Out _nbTo = " << this->_nbTotal << std::endl;
	// std::cout << "Max_INVEN = " << MAX_INVENTORY << std::endl;

	if (this->_nbTotal >= MAX_INVENTORY)
	{
		std::cout << "Sorry Slots FULL  // Inventory = ";
		std::cout << this->_nbTotal << std::endl;
		return ;
	}
	if (this->checkAMateria(m))
		return ;
	for (int i = 0; i < MAX_INVENTORY; i++)
	{
		if (this->_slot[i] == NULL)
		{
			this->_slot[i] = m;
			std::cout << "AMateria type: " << m->getType() << " store in slot " << i << std::endl;
			this->_nbTotal++;
			break;
		}
	}
}

void	Character::unequip(int idx) {
	if (idx >= MAX_INVENTORY)
	{
		std::cout << "slot " << idx << " don't equiped" << std::endl;
		return;
	}
	if (this->_slot[idx] == NULL)
	{
		std::cout << "slot " << idx << " don't equiped" << std::endl;
		return;
	}
	this->_slot[idx] = NULL;
	this->_nbTotal--;
	std::cout << "slot " << idx << " unequip" << std::endl;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx >= MAX_INVENTORY || this->_slot[idx] == NULL)
		std::cout << "Sorry slot don't exist" << std::endl;
	else
		this->_slot[idx]->use(target);
}

bool	Character::checkAMateria(AMateria *m)
{
	for(int i = 0; i < MAX_INVENTORY; i++)
	{
		if (this->_slot[i] == m) {
			std::cout << "Sorry. AMateria " << m->getType();
			std::cout << " * " << m << " *";
			std::cout << " is already in slot ";
			std::cout << i << std::endl;
			return (true);
		}
	}
	return (false);
}
