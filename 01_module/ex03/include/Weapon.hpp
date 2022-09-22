#ifndef __WEAPON__HPP
#define __WEAPON__HPP

#include <iostream>
#include <string>

class Weapon
{
private:
    std::string _type;
public:
    Weapon( std::string t);
    ~Weapon();
    void        setType( std::string type );
    std::string const & getType() const;
};

#endif
