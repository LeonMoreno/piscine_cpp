#ifndef __HARL__HPP
#define __HARL__HPP

#include <iostream>
#include <string>

class Harl
{
private:
/* data */
    void _debug( void );
    void _info( void );
    void _warning( void );
    void _error( void );
public:
    Harl();
    ~Harl();
    void    complain( std::string level );
    // void    (Harl::*func)(); Lo deje en la func
};

int strToint    (std::string s);

#endif
