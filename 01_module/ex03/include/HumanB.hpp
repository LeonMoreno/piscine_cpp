#ifndef __HUMANB__HPP
#define __HUMANB__HPP

#include "Weapon.hpp"

class HumanB
{
private:
/* data */
    std::string _name;
    Weapon*  _Wb;
public:
    HumanB( std::string name);
    ~HumanB();
    void    attack( void );
    void    setWeapon(Weapon & club);
};

#endif
