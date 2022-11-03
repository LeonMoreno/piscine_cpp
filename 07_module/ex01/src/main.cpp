#include "Iter.hpp"

int	main(void)
{
	{
		int	array[] = {54, 32, 53, 2, 7};

		std::cout << "Tes1" << std::endl;
		iter(array, 5, &ftPrint);
		iter(array, 5, &ftIncrement);

		std::cout << "\nTes2" << std::endl;
		iter(array, 5, &ftPrint);
	}

	{
		float	array[] = {54.87, 32.87, 53.43, 2, 7.33};

		std::cout << "\n Tes1 Float" << std::endl;
		iter(array, 5, &ftPrint);
		iter(array, 5, &ftIncrement);

		std::cout << "\nTes2" << std::endl;
		iter(array, 5, &ftPrint);
	}

	{
		char	array[] = {'f', 'd', 'Z', 'g', 'j'};

		std::cout << "\n Tes1 Float" << std::endl;
		iter(array, 5, &ftPrint);
		iter(array, 5, &ftIncrement);

		std::cout << "\nTes2" << std::endl;
		iter(array, 5, &ftPrint);
	}
}
