#ifndef __ZOMBIE__HPP
#define __ZOMBIE__HPP

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string     _name;

public:
    Zombie(std::string name);
    ~Zombie();
    void        announce( void );

    std::string*	getName( void );

};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif
