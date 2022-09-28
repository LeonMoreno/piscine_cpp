#include <iostream>

class polymorphisme
{
private:
	/* data */
public:
	polymorphisme(/* args */);
	~polymorphisme();

	void	bar(int x);
	void	bar(char c);
	void	bar(float f);
};

polymorphisme::polymorphisme(/* args */)
{
	std::cout << "CONSTRUCTOR\n";
}

polymorphisme::~polymorphisme()
{
}

void	polymorphisme::bar( int x )
{
	std::cout << x << std::endl;
}

void	polymorphisme::bar( char c )
{
	std::cout << c << std::endl;
}

void	polymorphisme::bar( float f )
{
	std::cout << f << std::endl;
}


int	main(void)
{
	polymorphisme p;
	float f;

	f = 42.8;

	p.bar(42);
	p.bar('A');
	p.bar(f);
	return (0);
}

