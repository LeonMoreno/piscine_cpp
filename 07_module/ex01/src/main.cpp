#include "Iter.hpp"

int	main(void)
{
	std::cout << "\n\t int template "  << std::endl;
	{
		int	arr[] = {43, 54, 32, 534, 4, 109, 59};
		int len = sizeof(arr) / sizeof(int);

		std::cout << "Print_1 int : ";
		iter(arr, len, &ftPrint); // Implicit conversion
		std::cout << std::endl;
		iter<int>(arr, len, &ftIncrement); // Explicit conversion

		std::cout << "Print_2 int : ";
		iter<int>(arr, len, &ftPrint);
		std::cout << std::endl;

		bubbleSort<int>(arr, len);
		std::cout << "Print_3 int : ";
		iter(arr, len, &ftPrint);
		std::cout << std::endl;
	}
	std::cout << "\n\t Float template "  << std::endl;
	{
		float	arr[] = {3.54f, 32.3f, 90.4f, 534.32f, 4, 109.232f, 59};
		int len = sizeof(arr) / sizeof(float);

		std::cout << "Print_1 int : ";
		iter(arr, len, &ftPrint); // Implicit conversion
		std::cout << std::endl;
		iter<float>(arr, len, &ftIncrement); // Explicit conversion

		std::cout << "Print_2 int : ";
		iter<float>(arr, len, &ftPrint);
		std::cout << std::endl;

		bubbleSort<float>(arr, len);
		std::cout << "Print_3 int : ";
		iter(arr, len, &ftPrint);
		std::cout << std::endl;
	}
	std::cout << "\n\t char template "  << std::endl;
	{
		char	arr[] = {'d', 'r', '4', 'P', '0', 'Q'};
		int len = sizeof(arr) / sizeof(char);

		std::cout << "Print_1 int : ";
		iter(arr, len, &ftPrint); // Implicit conversion
		std::cout << std::endl;
		iter<char>(arr, len, &ftIncrement); // Explicit conversion

		std::cout << "Print_2 int : ";
		iter<char>(arr, len, &ftPrint);
		std::cout << std::endl;

		bubbleSort<char>(arr, len);
		std::cout << "Print_3 int : ";
		iter(arr, len, &ftPrint);
		std::cout << std::endl;
	}

}

