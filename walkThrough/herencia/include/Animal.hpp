#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <iostream>

class Animal
{
private:
	int			_legs;
	std::string	_name;
public:
	Animal(void);
	Animal (Animal const & src);
	Animal(std::string name, int legs);
	virtual ~Animal();

	Animal & operator=(Animal const & rhs);

	/*Getter and Setters */
	int			getLegs(void);
	std::string	getName(void);

	void doSound(void);
	virtual std::string	getType(void) = 0;
};


#endif
