#include "Cat.hpp"

Cat::Cat(void) : Animal (){
	std::cout << "<CAT> Default constructor called " << std::endl;
	type = ("Cat");
}

Cat::Cat(const Cat &to_copy) : Animal(){
	std::cout << "<CAT> Copy constructor called " << std::endl;
	type = to_copy.type;
}

Cat& Cat::operator=(const Cat &other) {
	std::cout << "<CAT> Copy assignment constructor called " << std::endl;
	if (this != &other){
		type = other.type;
	}
	return *this;
}

Cat::~Cat(){
	std::cout << "<CAT> Destructor called " << std::endl;
}

void Cat::makeSound() const{
	std::cout << "<CAT> 🐱 Meow Meow! 🐾 " << std::endl;
}