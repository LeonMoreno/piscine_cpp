#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string	_name;
public:
	Zombie( std::string name );
	~Zombie();
	void	announce( void );
};

#endif
