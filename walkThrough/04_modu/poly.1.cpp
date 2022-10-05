#include <iostream>

class Character {
	public:
		Character( void );
		virtual	void	sayHello(std::string const & target);
		~Character( void );
};

class Warrior : public Character {
	public:
		Warrior (void );
		~Warrior (void );
		void sayHello(std::string const & target);
};

class cat {
	// [...]
};

Character::Character( void ) {
	std::cout << "DEfaul Character CONSTRUCTOR " << this << std::endl;
}

Character::~Character( void ) {
	std::cout << "Character DESTRUCTOR "  << this << std::endl;
}

Warrior::Warrior( void ) {
	std::cout << "DEfaul Warrior CONSTRUCTOR "  << this << std::endl;
}

Warrior::~Warrior( void ) {
	std::cout << "Warrior DESTRUCTOR "  << this << std::endl;
}

void	Character::sayHello( std::string const & target) {
	std::cout << "Hello " << target << " !" << std::endl;
}

void	Warrior::sayHello( std::string const & target) {
	std::cout << "F*** of " << target << ", I dont't like you" << std::endl;
}

int	main( void )
{
	std::cout << "size class = " << sizeof(Character) << std::endl;
	std::cout << "size class = " << sizeof(Warrior) << std::endl;

	Warrior *w = new Warrior;
	Character *c = new Warrior;

	w->sayHello("Leo");
	c->sayHello("AP");

	delete w;
	return (0);
}
