#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

// Virutal para evitar que se creen dos objetos base de ClapTrap se antepone Virtual
// class ScavTrap :  public ClapTrap {
class ScavTrap :  virtual public ClapTrap {

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
