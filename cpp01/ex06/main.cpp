#include "Harl.hpp"

int main(int ac , char *argv[])
{
	if (ac == 2){
		std::string input;
		Harl harl;
		input = argv[1];
		harl.complain(input);
	}
	else{
		std::cout << "Accepted fmt: ./harlFilter <level>\nlevels: DEBUG, INFO, WARNING, ERROR" << std::endl;
	}
		return 0;
}