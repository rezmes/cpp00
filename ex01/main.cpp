#include "PhoneBook.hpp"
#include <iostream>
#include <string>


int	main(void)
{
	PhoneBook book;
	std::string command;
	while (true)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, command))
			break;
		if (command == "EXIT")
			break;
		if (command == "ADD")
			book.addContact();
		if (command == "SEARCH")
			book.search();
	}
	return 0;
}
