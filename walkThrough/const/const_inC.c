#include <stdio.h>

typedef struct s_leo {
	int	x;
} t_leo;

int	main(void)
{
	t_leo l;
	const int	x = 7;

	l.x = 42;
	printf("x = %d __ l.x = %d\n", x, l.x);
	return (0);
}
