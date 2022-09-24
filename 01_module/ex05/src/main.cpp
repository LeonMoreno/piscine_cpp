#include "Harl.hpp"

int	strToint(std::string s)
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

int	main(void)
{
	Harl *harl;

	harl = new Harl();
	harl->complain("WARNING");

	return (0);
}
