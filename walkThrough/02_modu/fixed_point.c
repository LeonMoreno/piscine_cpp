#include <stdio.h>
#include <math.h>
#include <stdint.h>

typedef uint16_t fp;

int	main( void )
{
	/*
	unsigned int a = 60; // 60 = 0011 1100
	int c = 0;
	int r = 0;

	r = 1 << 8;
	c = a << 2; // 240 = 1111 0000
	printf("c = %d\n", c);
	printf("r = %d\n", r);
	*/
	int num = 0;
	int	j;

	fp f = round(42.42f * (1 << 5));

	j = 10;
	printf("fp = %d\n", f);
	for (int i = 0; i < 11; i++)
	{
		if (f & (32768 >> i))
		{
			num += pow(2, j);
			printf("%d ", 1);
		}
		else
			printf("%d ", 0);
		j--;
	}
	float expo = 0;
	j = -5;

	printf("\nnum = %d\n", num);
	for (int i = 0; i <= 5; i++)
	{
		if (f & (1 << i))
		{
			printf(" ENTRE EXPO i = %d j = %d\n ", i, j);
			expo += pow(2, j);
		}
		j++;
	}
	printf("\nExpo = %f\n", expo);

	return (0);
}
