#include <stdio.h>

struct s_leo
{
	int	x;
};

int	main(void)
{
	struct s_leo l;
	struct s_leo a;

	l.x = 42;
	a.x = 42;
	if (&l == &l)
		printf("Son Iguales\n");
	else
		printf("Son Diferente\n");
	if (l.x == a.x)
		printf("Son Iguales\n");
	else
		printf("Son Diferente\n");
	printf("addr l = %p\n", &l);
	printf("addr a = %p\n", &a);
	return (0);
}
