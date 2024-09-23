/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:41:06 by danevans          #+#    #+#             */
/*   Updated: 2024/09/23 21:41:07 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

bool	allDigit(std::string input){
	for (int i = 0; i < (int) input.length(); i++){
		if (!isdigit(input[i]))
			return false;
	}
	return true;
}

const std::string truncat_10(std::string str){
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return (str);
}

void print_contact(Contact contact){
	std::cout << std::endl;
	std::cout << "First name: " << contact.getFirstName() << std::endl;
	std::cout << "Last name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickName() << std::endl;
	std::cout << "Phone number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contact.getDarkestSecret() << std:: endl;
	std::cout << std::endl;
}

bool	add_infos(const std::string &str, std::string &input){
	std::cout << str;
	while (std::getline(std::cin, input))
	{
		if (input.empty())
		{
			std::cout << str;
			continue ;
		}
		return (true);
	}
	std::cout << std::endl;
	std::cin.clear();
	std::cin.putback('\n');
	return (false);
}

void PhoneBook::add_contact(){
	Contact	contact;
	std::string input;

	if (!add_infos("First name: ", input))
		return ;
	contact.setFirstName(input);
	if (!add_infos("Last name: ", input))
		return ;
	contact.setLastName(input);
	if (!add_infos("Nick name: ", input))
		return ;
	contact.setNickName(input);
	while(1){
		if (add_infos("📞 Phone number bitte: ", input)){
			if(!allDigit(input)){
				std::cin.clear();
				std::cout << "Enother Digit only" << std::endl;
				continue;
			}
			contact.setPhoneNumber(input);
			break;
		}
		else
			return ;
	}
	if (!add_infos("Tell me a secret, I've the MEGAPHONE READY LOL: ", input))
		return ;
	contact.setDarkestSecret(input);
	contacts[index] = contact;
	index = (index + 1) % MAX_CONTACT;
	if (count < MAX_CONTACT){
		count++;
	}

	std::cout << "Contact added successfully ✅[" << count << "|" << MAX_CONTACT << "]" << std::endl;
}

int isAlphabetic(const std::string& str){
	int i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
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
	while (1){
		if (!add_infos("Enter contact to display: ", display_index))
			return ;
		std::transform(display_index.begin(), display_index.end(), display_index.begin(), ::toupper);
		if (strcmp(display_index.c_str(), "EXIT") == 0){
			return ;
		}
		else if (!isAlphabetic(display_index))
			std::cout << "ENTER NUMBER ONLY" << std::endl;
		else
		{
			convert_index = atoi(display_index.c_str());
			std::cout << convert_index << std::endl;
			if (convert_index >= 0 && convert_index < count){
				break;
			}
			std::cout << "ENTER AVAILABLE CONTACT" << std::endl;
		}
	}
	print_contact(contacts[convert_index]);
}
