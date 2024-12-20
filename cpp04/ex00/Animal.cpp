#include "Animal.hpp"

Animal::Animal(void){
	std::cout << "<ANIMAL> Default constructor called " << std::endl;
}

Animal::Animal(const Animal &to_copy){
	std::cout << "<ANIMAL> Copy constructor called " << std::endl;
	type = to_copy.type;
}

Animal& Animal::operator=(const Animal &other){
	std::cout << "<ANIMAL> Copy assignment constructor called " << std::endl;
	if (this != &other){
		type = other.type;
	}
	return *this;
}

Animal::~Animal(){
	std::cout << "<ANIMAL> Destructor called " << std::endl;
}

void Animal::makeSound() const{
	std::cout << "<ANIMAL> make sound called " << std::endl;
}

std::string Animal::getType()const{
	return type;
}

void Animal::setType(std::string type){
	this->type = type;
}