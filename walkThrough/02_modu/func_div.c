#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int 	num;
	div_t	r;

	num = 9;
	r = div(num, 2);
	printf("Coci = %d y Resi = %d\n", r.quot, r.rem);
	printf(" MANO Coci = %d y Resi = %d\n", num / 2, num % 2);

	return (0);
}
