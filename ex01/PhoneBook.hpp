#ifndef PHONEBOOK_HPP

#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

class PhoneBook
{
private:
	Contact _members[8];
	int count;
	int next;
	std::string getAnswer(std::string question);
	std::string formatCell(std::string text);

public:
	PhoneBook();
	void add();
	void search();
};

#endif
