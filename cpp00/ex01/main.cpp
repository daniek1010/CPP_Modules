/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:41:25 by danevans          #+#    #+#             */
/*   Updated: 2024/09/23 21:41:33 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void displayWelcome(void){
    std::cout << "*------------------------------------------------*\n"
                 "|                                                |\n"
                 "|         Welcome to the 80's Phonebook          |\n"
                 "|                                                |\n"
                 "|   Capitalize your request nd don't stress me   |\n"
                 "|          ADD - Add a new contact               |\n"
                 "|          SEARCH - Display a contact            |\n"
                 "|          EXIT - Exit PhoneBook                 |\n"
                 "|                                                |\n"
                 "*------------------------------------------------*" << std::endl;
}

bool	getInput(std::string &input){	
	while(1){
		std::cout <<  "Hello, enter an option (ADD, SEARCH, EXIT): " << std::endl;
		if (std::getline(std::cin, input)){
			std::transform(input.begin(), input.end(), input.begin(), ::toupper);
			if (input == "ADD" || input == "SEARCH" || input == "EXIT")
				return (true);
			std::cout << "Invalid option, please try again." << std::endl;
		}
		else
			break ;
	}
	std::cin.eof();
	return (false);
}

int main(void)
{
	PhoneBook phone;
	std::string input;

	displayWelcome();
	while (1){
		if (!getInput(input))
		{
			std::cout << "Exiting ... " << std::endl;
			break ;
		}
		if (input == "ADD")
			phone.add_contact();
		else if (input == "SEARCH")
			phone.search_pb();
		else
		{
			std::cout << "Thank for your time evaluator" << std::endl;
			return (EXIT_SUCCESS);
		}
	}
	return (0);
}