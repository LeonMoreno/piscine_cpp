#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public:
		ScavTrap( void );
		ScavTrap( ScavTrap const & src);
		~ScavTrap(void);
		ScavTrap & operator=(ScavTrap const & s);
		ScavTrap( std::string name);

		// Metodo propio
		void	guardGate();
};


#endif
