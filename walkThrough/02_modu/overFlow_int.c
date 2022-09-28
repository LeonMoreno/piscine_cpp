#include <stdio.h>
#include <limits.h>

int	main(void)
{
	unsigned int n;

	n = 4294967295;
	n = n + 1;

	printf("int n = %u\n", n);
	return (0);
}
	
