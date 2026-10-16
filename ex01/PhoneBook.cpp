#include "PhoneBook.hpp"
#include <iomanip>
#include <string>
#include <iostream>

PhoneBook::PhoneBook() : count(0), next(0)
{
}

void PhoneBook::add()
{
	std::string name;
	std::string lastName;
	std::string nickname;
	std::string number;
	std::string secret;

	name = getAnswer("First name: ");
	if(name.empty())
		return;
	lastName = getAnswer("Last name: ");
	if(lastName.empty())
		return;
	nickname = getAnswer("Nickname: ");
	if(nickname.empty())
		return;
	number = getAnswer("Phone number: ");
	if(number.empty())
		return;
	secret = getAnswer("Darkest secret: ");
	if(secret.empty())
		return;

	_members[next].setFirstName(name);
	_members[next].setLastName(lastName);
	_members[next].setNickname(nickname);
	_members[next].setPhoneNumber(number);
	_members[next].setDarkestSecret(secret);
	std::cout << "Contact saved" << std::endl;
	next = (next + 1) % 8;
	if (count < 8)
		count++;
}


std::string PhoneBook::formatCell(std::string text)
{
	int length = text.length();
	if (length > 10)
	{
		text = text.substr(0, 9);
		text += '.';
	}
	return(text);
}

void PhoneBook::search()
{
	int i = 0;

	if (count == 0)
	{
		std::cout << "Phonebook is empty" << std::endl;
		return;
	}
	std::cout << std::setw(10) << "index" << '|' << std::setw(10)
		<< "first name" << '|' << std::setw(10)
			<< "last name" << '|' << std::setw(10)
				<< "nickname" <<std::endl;
	while (i < count)
	{
		std::cout << std::setw(10) << i << '|';
		std::string formattedname = formatCell(_members[i].getFirstName());

		std::cout << std::setw(10)
		<< formattedname << '|';

		std::string formattedLastname = formatCell(_members[i].getLastName());

		std::cout << std::setw(10)
		<< formattedLastname << '|';

		std::string formattedNickname = formatCell(_members[i].getNickname());

		std::cout << std::setw(10)
		<< formattedNickname << std::endl;

		i++;
	}
	std::cout << "Enter index:";
	std::string chosenIndex;
	if(!std::getline(std::cin, chosenIndex))
		return;
	if(chosenIndex.length() == 1 && chosenIndex[0] >= '0' && chosenIndex[0] <= (count + '0') - 1)
	{
		int index = chosenIndex[0] - '0';
		std::cout << "First name: " << _members[index].getFirstName() << std::endl;
		std::cout << "Last name: " << _members[index].getLastName() << std::endl;
		std::cout << "Nickname: " << _members[index].getNickname() << std::endl;
		std::cout << "Phone number: " << _members[index].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << _members[index].getDarkestSecret() << std::endl;
	}
	else
	{
		std::cout << "Contact does not exist" << std::endl;
	}
}

std::string PhoneBook::getAnswer(std::string question)
{
	std::string answer;
	while (true)
	{
		std::cout << question;
		if (!std::getline(std::cin, answer))
			return ("");
		if (answer.empty())
		{
			std::cout << "This field cannot be empty." << std::endl;
		}
		else
			return (answer);
	}
}
