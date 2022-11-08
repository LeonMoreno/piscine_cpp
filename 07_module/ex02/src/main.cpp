#include "Array.hpp"

void	test_01(void) {
	std::cout << "\n\t ============================== " << std::endl;
	std::cout <<  "\t\t Construction with no parameter "  << std::endl;
	Array<int>	arr;
	try {
		std::cout << "Accessed idx[0]: " << arr[0] << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "Accessed idx[4]: " << arr[4] << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "Asign idx[7]: " << arr[7] << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n\t ============================== " << std::endl;
	std::cout <<  "\t\t int array "  << std::endl;
	Array<int>	arr2(7);
	std::cout << "\tinitialized by default:" << std::endl;
	arr2.getArray();
	try {
		std::cout << "Accessed idx[x]: " << std::endl;
		for (int i = 0; i < 7; i++)
			arr2[i] = i * 2;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\t After changes:" << std::endl;
	arr2.getArray();
}

void	test_02(void)
{
	std::cout << "\n\t ============================== " << std::endl;
	std::cout <<  "\t\t copy Construction "  << std::endl;
	Array<int> arr(7);
	Array<int> copy(arr);
	std::cout << "\tinitialized by default:" << std::endl;
	std::cout << "arr: ";
	arr.getArray();
	std::cout << "cop: ";
	copy.getArray();
	try {
		arr[0] = 124;
		arr[5] = 69;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\t After changes:" << std::endl;
	std::cout << "arr: ";
	arr.getArray();
	std::cout << "cop: ";
	copy.getArray();
	std::cout << "sizeArr = " << arr.size() << std::endl;
}

void	test_03(void) {
	std::cout << "\n\t ============================== " << std::endl;
	std::cout <<  "\t\t char array "  << std::endl;
	Array<char> arr(4);
	std::cout << "\tinitialized by default:" << std::endl;
	std::cout << "arr: ";
	arr.getArray();
	try {
		arr[0] = 'H';
		arr[1] = 'o';
		arr[2] = 'l';
		arr[3] = 'a';
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\tAfter:" << std::endl;
	std::cout << "arr: ";
	arr.getArray();
	std::cout << "sizeArr = " << arr.size() << std::endl;
}

void	test_04(void) {
	std::cout << "\n\t ============================== " << std::endl;
	std::cout <<  "\t\t Float array "  << std::endl;
	Array<float> arr(4);
	std::cout << "\tinitialized by default:" << std::endl;
	std::cout << "arr: ";
	arr.getArray();
	try {
		arr[0] = 45.0f;
		arr[1] = 42.42f;
		arr[2] = 980809809.98;
		arr[3] = 142.042;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\tAfter:" << std::endl;
	std::cout << "arr: ";
	arr.getArray();
	std::cout << "sizeArr = " << arr.size() << std::endl;
}


int	main(void) {

	int	*arr = new int[4];

	arr[0] = 9;
	arr[5] = 42;
	arr[15] = 7;

	std::cout << "arr[x} = " << arr[0] << std::endl;
	std::cout << "arr[x} = " << arr[15] << std::endl;

	// test_01(); // empty and INT
	// test_02(); // Construction by copy
	// test_03(); // char
	// test_04(); // Float
	return (0);
}
