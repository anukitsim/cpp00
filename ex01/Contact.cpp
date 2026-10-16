#include "Contact.hpp"

void Contact::setFirstName(std::string firstname)
{
	FirstName = firstname;
}


void Contact::setLastName(std::string lastname)
{
	LastName = lastname;

}

void Contact::setNickname(std::string nickname)
{
	Nickname = nickname;
}

void Contact::setPhoneNumber(std::string phonenumber)
{
	PhoneNumber = phonenumber;

}

void Contact::setDarkestSecret(std::string secret)
{
	DarkestSecret = secret;
}

std::string Contact::getFirstName() const
{
	return(FirstName);
}

std::string Contact::getLastName() const
{
	return (LastName);
}

std::string Contact::getNickname() const
{
	return(Nickname);
}

std::string Contact::getPhoneNumber() const
{
	return (PhoneNumber);
}

std::string Contact::getDarkestSecret() const
{
	return (DarkestSecret);
}
