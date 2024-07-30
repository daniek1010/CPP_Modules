#include "Dog.hpp"

Dog::Dog(void) : Animal (){
	type = ("Dog");
	std::cout << "<DOG> Default constructor called " << std::endl;
}

Dog::Dog(const Dog &to_copy) : Animal(){
	*this = to_copy;
	std::cout << "<DOG> Copy constructor called " << std::endl;
}

Dog& Dog::operator=(const Dog &other){
	if (this != &other){
		type = other.type;
	}
	std::cout << "<DOG> Copy assignment constructor called " << std::endl;
	return *this;
}

Dog::~Dog(){
	std::cout << "<DOG> Destructor called " << std::endl;
}

void Dog::makeSound() const{
	std::cout << "<DOG> woof woof sound called " << std::endl;
}