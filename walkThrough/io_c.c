#include <unistd.h>

void	ft_put(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	ft_put('A');
	return (0);
}
