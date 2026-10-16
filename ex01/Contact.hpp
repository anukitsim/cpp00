#ifndef CONTACT_HPP

#define CONTACT_HPP

#include <string>

class Contact
{
private:
	std::string FirstName;
	std::string LastName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string DarkestSecret;
public:
	void setFirstName(std::string firstname);
	void setLastName(std::string lastname);
	void setNickname(std::string nickname);
	void setPhoneNumber(std::string phonenumber);
	void setDarkestSecret(std::string secret);
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickname() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;
};


#endif
