#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void){
	std::cout << "<WrongAnimal> Default constructor called " << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &to_copy){
	type = to_copy.type;
	std::cout << "<WrongAnimal> Copy constructor called " << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other){
	std::cout << "<WrongAnimal> Copy assignment constructor called " << std::endl;
	if (this != &other){
		type = other.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "<WrongAnimal> Destructor called " << std::endl;

}

void WrongAnimal::makeSound() const{
	std::cout << "<WrongAnimal> make sound called " << std::endl;
}

std::string WrongAnimal::getType()const{
	return type;
}

void WrongAnimal::setType(std::string type){
	this->type = type;
}