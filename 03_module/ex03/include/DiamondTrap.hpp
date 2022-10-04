#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

	private:
		std::string	_name;
	public:
		DiamondTrap( void );
		DiamondTrap( DiamondTrap const & src);
		~DiamondTrap( void );
		DiamondTrap & operator=( DiamondTrap const & d);

		DiamondTrap( std::string name);

		// Getters & Setters propio
		void	whoAmI( void );

};

#endif
