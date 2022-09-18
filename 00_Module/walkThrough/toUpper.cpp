#include <iostream>
#include <string>
#include <locale>

int	main(int argc, char **argv)
{
	std::locale loc;
	std::string s= "Leonardo Moreno";

	//for (std::string::size_type i=0; i < s.length(); i++)
	for (int i=0; i < s.length(); i++)
		s[i] = toupper(s[i]);
	//std::cout << s << std::endl;
	std::cout << s << std::endl;
	return (0);
}
