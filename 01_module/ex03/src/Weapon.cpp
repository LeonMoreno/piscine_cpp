#include "Weapon.hpp"

Weapon::Weapon( std::string t)
{
	Weapon::setType(t);
}

Weapon::~Weapon()
{

}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

std::string	const & Weapon::getType() const
{
	return (this->_type);
}
