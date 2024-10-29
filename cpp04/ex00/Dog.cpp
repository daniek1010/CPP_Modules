#include "Dog.hpp"

Dog::Dog(void) : Animal () {
	type = ("Dog");
	std::cout << "<DOG> Default constructor called " << std::endl;
}

Dog::Dog(const Dog &to_copy) : Animal(){
	std::cout << "<DOG> Copy constructor called " << std::endl;
	type = to_copy.type;
}

Dog& Dog::operator=(const Dog &other){
	std::cout << "<DOG> Copy assignment constructor called " << std::endl;
	if (this != &other){
		type = other.type;
	}
	return *this;
}

Dog::~Dog(){
	std::cout << "<DOG> Destructor called " << std::endl;
}

void Dog::makeSound() const{
	std::cout << "<DOG>  🐕 Woof Woof! 🐾 " << std::endl;
}