#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include "colours.hpp"

class ClapTrap {

	private:
		std::string		_name;
		int				_hitPoints;
		int				_energyPoints;
		int				_attackDamage;

	public:
		ClapTrap( void );
		ClapTrap( ClapTrap const & src);
		~ClapTrap( void );
		ClapTrap & operator=(ClapTrap const & c);
		ClapTrap( std::string name);

		// public member functions -- Metodos (demande subject)
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		// public member functions -- Metodos (out subject)
		void	attack(ClapTrap & target);

		// Getters & Setters
		std::string	getName( void ) const;
		void		setName( std::string name);

		int			getHitP( void ) const ;
		void		setHitP( int );

		int			getAttackDamage( void ) const;
		void		setAttackDamage( int );

		int			getEnergy( void ) const;
		void		setEnergy( int );

		void		getInfo( void );

};


#endif
