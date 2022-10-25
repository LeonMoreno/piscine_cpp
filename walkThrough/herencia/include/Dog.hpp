#ifndef DOG_HPP_
#define DOG_HPP_

#include "Animal.hpp"

class Dog : public Animal
{
private:
	std::string	_type;
public:
	Dog(void);
	Dog (Dog const & src);
	Dog(std::string name, int legs);
	~Dog();

	Dog & operator=(Dog const & rhs);

	/*Getter and Setters */
	// int			getLegs(void);
	// std::string	getName(void);
	std::string	getType(void);


	// void doSound(void);
};


#endif
