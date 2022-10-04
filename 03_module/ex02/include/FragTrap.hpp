#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap( void );
		FragTrap( FragTrap const & src);
		~FragTrap( void );
		FragTrap & operator=(FragTrap const & f);
		FragTrap ( std::string name);

		// Metodos propios de FragTrap
		void	highFivesGuys(void);
		void	attack(ClapTrap & target);
};

#endif
