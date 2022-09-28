#include <iostream>

namespace Foo {
	typedef struct s_leo {
		int	x;
		int	y;
	}	t_leo;

	int		n = 42;
	int	flaco (void) { return (1); }
}

namespace Bar {
	int	n = 7;
	int	f (int x) { return (x * 3); }
}

namespace An = Bar;

int	main(void)
{
	Foo::t_leo leo;

	leo.x = 3;
	
	printf("Foo::n = %d\n", Foo::n);
	printf("Foo::flaco() = %d\n", Foo::flaco());
	printf("Bar::f = %d\n", Bar::f(7));
}
