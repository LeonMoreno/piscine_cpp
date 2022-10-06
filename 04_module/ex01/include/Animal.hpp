#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <colours.hpp>

class Animal {
	protected:
		std::string	type;
	public:
		Animal( void );
		Animal( Animal const & src);
		Animal & operator=(Animal const & a);

		// EL destructor debe ser virtual cuando hay funciones polimorficas en nuestra clase
		// funciones con la palabra clave: virtual
		virtual ~Animal( void );

		// Getters & Setters
		std::string getType( void );

		// member functions
		// LLamada a la funcion dinamica.
		// Metodo: Una funcion miembro virtual cuya resolucion sera dinamica.
		virtual void	makeSound( void );
};

#endif
