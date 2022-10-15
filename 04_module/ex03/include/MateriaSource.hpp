#ifndef MATERIASOURCE_HPP_
# define MATERIASOURCE_HPP_

#include "IMateriaSource.hpp"
#define MAX_INVENTORY 4


class MateriaSource : public IMateriaSource {
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const & src);
		~MateriaSource(void);
		MateriaSource & operator=(MateriaSource const & m);
		AMateria *mater[MAX_INVENTORY];

		//Metodos
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif
