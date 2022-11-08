#include <iostream>
#include <algorithm>
#include <array>


int	main(void) {
	std::array<int, 10> myA = {98, 43, 543, 452, 32, 549, 7, 42, 987, 432};

	std::array<int, 0>::iterator it = std::find(myA.begin(), myA.end(), 7);
	if (it != myA.end())
		std::cout << "Numero encontrado " << *it << std::endl;
	else
		std::cout << "Tu numero no esta\n";
}
