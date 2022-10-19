#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	std::cout << "MateriaSource Contructor " << this << std::endl;
	for (int i = 0; i < 4; i++)
		this->mater[i] = NULL;
}

MateriaSource::~MateriaSource(void) {
	std::cout << "MateriaSource DEStructor " << this << std::endl;
	for (int i = 0; i < 4; i++)
		{
			if (this->mater[i] != NULL)
				delete mater[i];
		}
}

void	MateriaSource::learnMateria(AMateria *src) {
	for (int i = 0; i < 4; i++) {
		if (this->mater[i] == NULL)
		{
			this->mater[i] = src;
			std::cout << "Miremos " << src << std::endl;
			break;
		}

	}
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++)
	{
		if (this->mater[i] != NULL)
		{
			std::string tsrc = this->mater[i]->getType();
			if (tsrc == type)
			{
				std::cout << "AMa type: " << this->mater[i]->getType() << std::endl;
				return (this->mater[i]->clone());
			}
		}

	}
	return (0);
}
