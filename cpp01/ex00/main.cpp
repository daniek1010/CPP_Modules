#include "zoombie.hpp"

int main (){
	std::string name;
	std::cout << "Enter a name: ";
	std::cin >> name;
	randomChump(name);
	Zoombie* z = newZombie(name);
	z->announce();
	delete z;
	}