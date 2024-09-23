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
			if (input == "ADD" || input == "add" || input == "SEARCH" 
					|| input == "search" || input == "EXIT" || input == "exit")
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
		if (input == "ADD" || input == "add")
			phone.add_contact();
		else if (input == "SEARCH" || input == "search")
			phone.search_pb();
		else
		{
			std::cout << "Thank for your time evaluator" << std::endl;
			return (EXIT_SUCCESS);
		}
	}
	return (0);
}