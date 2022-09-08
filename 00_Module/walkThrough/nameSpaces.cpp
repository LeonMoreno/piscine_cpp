#include <stdio.h>

int	n = 7;
int	f(void) { return 42; }

namespace	Foo {
	struct s_leo
	{
		int	x;
		int	y;
	}typedef t_leo;

	int	n = 3;
	int	flaco(void) { return 1; }
}

namespace	Bar {

	int	n = 9;
	int	f(void) { return 3; }
}

namespace Per = Bar;

int	main(void)
{
	Foo::t_leo l;

	printf("n = [%d]\n", n);
	printf("f() = [%d]\n", f());

	l.x = 8;

	printf("Foo::n = %d\n", Foo::n);
	printf("Fo::fun = %d\n", Foo::flaco());

	printf("Bar.n = %d\n", Bar::n);
	printf("Bar.fun = %d\n", Bar::f());

	Per:n = 19;

	printf("PER.n = %d\n", Per::n);


	return (0);
}
