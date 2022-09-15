#include <iostream>
#include <string>
#include <locale>

int	main(int argc, char **argv)
{
	std::locale loc; 
	std::string s= "L";

	//for (std::string::size_type i=0; i < s.length(); i++)
	for (int i=0; i < s.length(); i++)
		std::cout << toupper(s[i]);
	//std::cout << s << std::endl;
//	std::cout << s << std::endl;
	return (0);
}
