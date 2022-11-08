#include "EasyFind.hpp"

static	void	displayInt(int	i)
{
	std::cout << i << ", ";
}

static	void	displayMsg(std::string s)
{
	std::cout << "\n\t ============================== " << std::endl;
	std::cout <<  "\t\t " << s  << std::endl;
}

void	ft_arrayTest(void)
{
	displayMsg("Test array");
	try {
		std::array<int, 10> arr = {43, 32, 98, 7, 23, 42};
		std::array<int, 0>::iterator it;

		// Imprimo array
		std::for_each(arr.begin(), arr.end(), displayInt);
		std::cout << std::endl;

		// Uso EasyFind
		it = EasyFind(arr, 7);
		std::cout << "Number found = " << *it << std::endl;
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}

static void	ft_vectorTest(void)
{
	displayMsg("Test vector");
	try {
		std::vector<int>				vec;
		std::vector<int>::iterator	it;
		std::vector<int>::iterator	itf = vec.end();

		for (int i = 0; i < 100; i++)
			vec.push_back(rand() % 200);


		// Imprimo vector
		// for (it = lst.begin(); it != itf ; it++)
		// 	std::cout << *it << ", ";
		for_each(vec.begin(), vec.end(), displayInt);
		std::cout << std::endl;
		// Uso EasyFind
		it = EasyFind(vec, 7);
		std::cout << "Number found = " << *it << std::endl;
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}

static void	ft_listTest(void)
{
	displayMsg(" Test list  ");
	try {
		std::list<int>				lst;
		std::list<int>::iterator	it;
		std::list<int>::iterator	itf = lst.end();

		for (int i = 0; i < 100; i++)
			lst.push_back(rand() % 500);

		// Imprimo lista
		for (it = lst.begin(); it != itf ; it++)
			std::cout << *it << ", ";
		// for_each(lst.begin(), lst.end(), displayInt);
		std::cout << std::endl;
		it = EasyFind(lst, 98);
		std::cout << "Number found = " << *it << std::endl;
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}


int	main(void) {

	srand (time(NULL));

	ft_arrayTest();
	ft_vectorTest();
	ft_listTest();
}
