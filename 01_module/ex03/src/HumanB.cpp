#include "HumanB.hpp"

HumanB::HumanB( std::string name) : _name(name)
{

}

HumanB::~HumanB()
{

}

/**
 * @brief Envio una copia de la variable club pero la recibo
 * como referencia. Asi luego puedeo obtener su direccion &.
 *
 * @param club: Instancia de Weapon.
 */
void	HumanB::setWeapon(Weapon & club)
{
	this->_Wb = &club;
}

void	HumanB::attack( void )
{
	std::cout << this->_name << " " << "attacks with their ";
	std::cout << this->_Wb->getType() << std::endl;
}
