#include "PhoneBook.hpp"

void	ft_menu(PhoneBook *pb)
{
	std::string cmd;

	while (cmd != "EXIT")
	{
		std::cout << "✗ Enter a command: ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			pb->add();
		else if (cmd == "SEARCH")
			pb->search();
	}

}

int	main(void)
{
	PhoneBook pb;

	ft_menu(&pb);
	return (0);
}
