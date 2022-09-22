#ifndef __HUMANA__HPP
#define __HUMANA__HPP

#include "Weapon.hpp"

class HumanA
{
private:
/* data */
    std::string _name;
public:
    HumanA( std::string name, Weapon& w );
    ~HumanA();
    /// @brief Una referencia es const -
    // debe ser inicializada en su declaracion / inicializacion
    Weapon& Wa;
    void    attack( void );
};

#endif
