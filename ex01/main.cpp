#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phonebook;
	std::string arg;
	while (true)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT):";
		if (!std::getline(std::cin, arg))
		{
			std::cout << std::endl;
			break;
		}
		else if (arg == "EXIT")
			break;
		else if (arg == "ADD")
		{
			phonebook.add();
			if(std::cin.eof())
			{
				std::cout << std::endl;
				break;
			}
		}
		else if (arg == "SEARCH")
		{
			phonebook.search();
			if(std::cin.eof())
			{
				std::cout << std::endl;
				break;
			}
		}
		else
			continue;
	}
	return (0);
}
