#include <stdio.h>

int	main(void)
{
	float	a = 420.042f; // Valor de referencia

	void*	b = &a; // Implicit reinterpretacion cast
	void*	c = (void *) &a; //  Explicit reinterpretacion cast

	void*	d = (void *) &a; //  Implicit promotion --> Ok
	int*	e = (void *) &a; //  Implicit degradacion -->  Hazardous 🔥
	int*	e = (void *) (int *) &a; //  Explicit degradacion -->  Hazardous -- En este caso sigue teniendo problemas



	printf("Valor a = %f addre = %p\n", a, &a);
	printf("Valor e = %d addre = %p\n", *e, e);




	return (0);
}
