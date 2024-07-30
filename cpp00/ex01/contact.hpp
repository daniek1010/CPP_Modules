#ifndef CONTACT_HPP

# define CONTACT_HPP

#include <string>

class Contact {
public:
	void	setFirstName(std::string str);
	void	setLastName(std::string str);
	void	setNickName(std::string str);
	void	setPhoneNumber(std::string str);
	void	setDarkestSecret(std::string str);

	const std::string&	getFirstName();
	const std::string&	getLastName();
	const std::string&	getNickName();
	const std::string&	getPhoneNumber();
	const std::string&	getDarkestSecret();

private:
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;
};
#endif