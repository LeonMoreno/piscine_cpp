#include <iostream>

void	ft_swap(int& x, int& y)
{
	int	tmp;

	printf("\nEN ft_SWAP\n");
	printf("address &x %p -- address &y %p\n", &x, &y);
	printf("x = %d -- y = %d\n\n", x, y);

	tmp = x;
	x = y;
	y = tmp;
	printf("x = %d -- y = %d\n", x, y);

}

int	main(void)
{
	int	x;
	int	y;

	printf("address &x %p -- address &y %p\n", &x, &y);
	// uso de puntero normales
	// int	*ptrX;
	// int	*ptrY;

	// ptrX = &x;
	// ptrY = &y;

	// Uso de puntero por referencia
	int& ptrX = x;
	int& ptrY = y;

	x = 42;
	y = 7;
	ft_swap(ptrX, ptrY);
	printf("En MAIN x = %d -- y = %d\n", x, y);

	ptrX = y;
	printf("address &x %d -- address &y %d\n", ptrX, ptrY);
	return (0);
}
