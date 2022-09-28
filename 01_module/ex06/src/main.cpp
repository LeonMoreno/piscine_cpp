#include "Harl.hpp"

int	strToint( std::string s)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while (s[i])
	{
		r += s[i];
		i++;
	}
	return (r);
}

int	main(int argc, char **argv)
{
	Harl *h;
       
	h = new Harl();
	switch (argc)
	{
		case 2:
			h->complain(argv[1]); 
			break;
		default:
			std::cout << "Invalid argus number" << std::endl;
	}
	delete h;
	return (0);
}
