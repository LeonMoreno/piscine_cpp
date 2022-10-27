#include <stdio.h>

int	main(void)
{
	int		n;
	int		n2;
	double	d;
	double	d2;
	double	n3;
	int		i3;

	n = 42; // Valor de referencia
	n3 = 420.042f;
	d = n; // Implicit conversion cast
	d2 = (double)n; // Explicit conversion cast
	n2 = d;
	i3 = n3; // Implicit degradacion --> PELIGROSO 🔥 - aqui se pierde la parte flotante de n3

	printf("Valor d = %f\n", d);
	return (0);
}
