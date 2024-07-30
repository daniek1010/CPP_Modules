#include <iostream>
#include <string>

int main (){
	std::string str = "HI THIS IS BRIAN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	//memory address
	std::cout << "Memory address of the string variable (str): " << &str << std::endl;
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;
	
    // print values
    std::cout << "Value of the string variable (str): " << str << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
	return 0;
}