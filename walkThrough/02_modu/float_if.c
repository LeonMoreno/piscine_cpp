#include <stdio.h>

int	main( void )
{
	float	x;
	float	y;

	x = 87.988832;
	y = 87.988831;

	if (x == y)
		printf("Iguales\n");
	else
		printf("NO Iguales\n");
	printf("INT size = %lu\n", sizeof(int));
	printf("FLOAT size = %lu\n", sizeof(float));
	return (0);
}
