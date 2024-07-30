#include "phonebook.hpp"

bool	allDigit(std::string input)
{
	for (int i = 0; i < (int) input.length(); i++){
		if (!isdigit(input[i]))
			return false;
	}
	return true;
}

std::string truncat_10(std::string str){
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return (str);
}

void print_contact(Contact contact)
{
	std::cout << std::endl;
	std::cout << "First name: " << contact.getFirstName() << std::endl;
	std::cout << "Last name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickName() << std::endl;
	std::cout << "Phone number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contact.getDarkestSecret() << std:: endl;
	std::cout << std::endl;
}

void PhoneBook::add_contact(){
	Contact	contact;
	std::string input;

	std::cout << "First name: ";
	std::getline(std::cin, input);
	contact.setFirstName(input);

	std::cout << "Last name: ";
	std::getline(std::cin, input);
	contact.setLastName(input);

	std::cout << "Nick name: ";
	std::getline(std::cin, input);
	contact.setNickName(input);

	while(1){
	std::cout << "📞 Phone number bitte: ";
	std::getline(std::cin, input);
		if(!allDigit(input))
		{
			std::cin.clear();
			std::cout << "Enother Digit only" << std::endl;
			continue;
		}
		contact.setPhoneNumber(input);
		break;
	}
	std::cout << "Tell me a secret, I've got the MEGAPHONE READY LOL: ";
	std::getline(std::cin, input);
	contact.setDarkestSecret(input);
	contacts[index] = contact;
	index = (index + 1) % MAX_CONTACT;
	if (count < MAX_CONTACT){
		count++;
	}
	std::cout << "Contact added successfully ✅" << std::endl;
}

void PhoneBook::search_pb(){
	Contact contact;
	if (count == 0){
		std::cout << "No contact to display" << std::endl;
		return ;
	}
	std::cout << "\n|     Index|First Name| Last Name|  Nickname|" << std::endl;
	for (int i = 0; i < count; i++){
		std::cout << "|" << std::right << std::setw(10) << i;
		std::cout << "|" << std::right << std::setw(10) << truncat_10(contacts[i].getFirstName());
		std::cout << "|" << std::right << std::setw(10) << truncat_10(contacts[i].getLastName());
		std::cout << "|" << std::right << std::setw(10) << truncat_10(contacts[i].getNickName());
		std::cout << "|" << std::endl;
	}

	std::string display_index;
	int convert_index;
	std::cout << "Enter contact to display: " << std::endl;
	std::getline(std::cin, display_index);
	while (1){
		convert_index = atoi(display_index.c_str());
		if (convert_index >= 0 && convert_index < count){
			break;
		}
		std::cin.clear();
		std::cout << "Enter contact to display: " << std::endl;
		std::getline(std::cin, display_index);
	}
	print_contact(contacts[convert_index]);
}
