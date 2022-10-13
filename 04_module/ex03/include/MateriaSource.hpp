#ifndef MATERIASOURCE_HPP_
# define MATERIASOURCE_HPP_

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const & src);
		~MateriaSource(void);
		MateriaSource & operator=(MateriaSource const & m);
		AMateria *mater[4];

		//Metodos
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif
