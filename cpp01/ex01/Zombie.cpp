#include "Zombie.hpp"

void Zombie::setName(std::string name){
	this->name = name;
}

const std::string& Zombie::getName(void){
	return name;
}

void Zombie::announce(void){
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::Zombie(){
	std::cout << "Zoombie " << this->getName() << "Constructor has risen" << std::endl;
}
Zombie::~Zombie(){
	std::cout << "Zoombie " << this->getName() << "Mayday mayday , destructor down!" << std::endl;
}