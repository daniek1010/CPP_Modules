#include "Harl.hpp"

std::string getInput(){
	std::string input;
	
	while(1){
		std::cout <<  "Enter input here: " << std::endl;
		std::getline(std::cin, input);
		if (input == "warning" || input == "debug" || input == "info" 
				|| input == "error" )
			break;
		std::cout << "Invalid option, please try again." << std::endl;
		std::cin.clear();
	}
	return (input);
}

int main()
{
	Harl harl;
	std::string input;

	input = getInput();
	harl.complain(input);
	return 0;
}