#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
	private:
		std::string	_name;
		int			_id;
	public:
		Animal(void);
		Animal( Animal const & src);
		Animal & operator=( Animal const & a );
		~Animal( void );
		Animal( std::string name, int id);

		void		anouce( std::string s);
		void		run(int distance);

		std::string	getName( void );

};

class Cat : public Animal
{
	private:
		int	_legs;
	public:

		Cat(void);
		// Cat (Cat const & src);
		// Cat & operator=( Cat const & a );
		~Cat( void );
		Cat(std::string, int, int);

};

#endif


/* Tareas
	1 - como llamar el constructor de su padre
	2 - Asegurarse q el destructor sea bien llamada por ambos
	3 - Como utilizar private et protected en : Herencia - niveles encapsulacion de herencia
	4 - Herencia multiple

	Niveles de encapsulacion
	- private // solo accesible desde una instacia de la clase
	- protected // accesible obj classe y derivados
	- public // accesible por todos

*/
