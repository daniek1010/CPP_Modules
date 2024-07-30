#include "Cat.hpp"

Cat::Cat(void) : Animal (){
	type = ("Cat");
	std::cout << "<CAT> Default constructor called " << std::endl;
}

Cat::Cat(const Cat &to_copy) : Animal(){
	*this = to_copy;
	std::cout << "<CAT> Copy constructor called " << std::endl;
}

Cat& Cat::operator=(const Cat &other) {
	if (this != &other){
		type = other.type;
	}
	std::cout << "<CAT> Copy assignment constructor called " << std::endl;
	return *this;
}

Cat::~Cat(){
	std::cout << "<CAT> Destructor called " << std::endl;
}

void Cat::makeSound() const{
	std::cout << "<CAT> meow meow sound called " << std::endl;
}