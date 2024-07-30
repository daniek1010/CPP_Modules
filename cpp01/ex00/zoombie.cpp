#include "zoombie.hpp"

void Zoombie::setName(std::string name){
	this->name = name;
}

const std::string& Zoombie::getName(void){
	return name;
}

void Zoombie::announce(void){
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
Zoombie::Zoombie(){
	std::cout << "Zoombie " << this->getName() << "Constructor has risen" << std::endl;
}
Zoombie::~Zoombie(){
	std::cout << "Zoombie " << this->getName() << "Mayday mayday , destructor down!" << std::endl;
}