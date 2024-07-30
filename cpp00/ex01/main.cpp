#include "phonebook.hpp"

void displayWelcome(void)
{
    std::cout << "*------------------------------------------------*\n"
                 "|                                                |\n"
                 "|            Welcome to the 80's Phonebook       |\n"
                 "|                                                |\n"
                 "| Capitalize your request and don't stress me    |\n"
                 "|          ADD - Add a new contact               |\n"
                 "|          SEARCH - Display a contact            |\n"
                 "|          EXIT - Exit PhoneBook                 |\n"
                 "|                                                |\n"
                 "*------------------------------------------------*" << std::endl;
}

std::string getInput(){
	std::string input;
	
	while(1){
		std::cout <<  "Hello, enter an option (ADD, SEARCH, EXIT): " << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD" || input == "add" || input == "SEARCH" 
				|| input == "search" || input == "EXIT" || input == "exit")
			break;
		std::cout << "Invalid option, please try again." << std::endl;
		std::cin.clear();
	}
	return (input);
}

int main()
{
	PhoneBook phone;
	std::string input;

	displayWelcome();
	while (1){
		input = getInput();
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
}