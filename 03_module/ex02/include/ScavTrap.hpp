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

		/// Metodos propios de ScavTrap
		void	guardGate();
		void	attack(ClapTrap & target);
};


#endif
